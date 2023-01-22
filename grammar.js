module.exports = grammar({
	name: 'quickbms',

	extra: _ => [
		/[ \t]/
	],

	rules: {
		statement_list: $ => repeat1($._statement),

		number: _ => token(seq(
			optional('-'),
			token.immediate(/\d\S*/),
		)),

		// taken from https://github.com/tree-sitter/tree-sitter-c/blob/7175a6dd5fc1cee660dce6fe23f6043d75af424a/grammar.js#L964
		escape_sequence: _ => token(prec(1, seq(
			'\\',
			choice(
				/[^xuU]/,
				/\d{2,3}/,
				/x[0-9a-fA-F]{2,}/,
				/u[0-9a-fA-F]{4}/,
				/U[0-9a-fA-F]{8}/
			),
		))),

		string: $ => seq(
			'"',
			repeat(choice(
				token.immediate(prec(1, /[^"\\]+/)),
				$.escape_sequence,
			)),
			'"'
		),

		character: $ => seq(
			'\'',
			choice(
				token.immediate(/[^\n'\\]/),
				$.escape_sequence,
			),
			'\''
		),

		identifier: _ => /[^'"\d\s]\S*/,

		_variable: $ => choice(
			$.number,
			$.string,
			$.character,
			$.identifier,
		),

		// based on https://github.com/tree-sitter/tree-sitter-javascript/blob/7a29d06274b7cf87d643212a433d970b73969016/grammar.js#L947
		comment: _ => token(choice(
			seq(choice('#', '//', ';'), /.*/),
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'/',
			)
		)),

		_statement: $ => choice(
			$._empty_statement,
			$.ignored,

			$.version_statement,
			$.exit_statement,

			$.math_statement,

			$.open_statement,
			$.call_dll_statement,

			$.save_pos_statement,
			$.set_statement,

			$.endian_statement,
			$._get_statements,
			$._put_statements,

			$.goto_statement,
			$.if_statement,

			$.call_function_statement,
			$.start_function_statement,

			$.for_statement,
			$.label_statement,
			$.break_statement,
			$.continue_statement,

			$.print_statement,

			$.append_statement,
			$.log_statement,
			$.clog_statement,
			$.s_log_statement,
		),

		_statement_end: $ => seq(
			optional(choice(
				';',
				$.comment,
			)),
			'\n'
		),

		_empty_statement: $ => $._statement_end,

		ignored: $ => choice(
			seq('<', case_insensitive('bms'), /[^\n]*/, $._statement_end),
			seq('</', case_insensitive('bms'), '>', $._statement_end),
		),

		// TODO: split out variable into version and arguments fields
		version_statement: $ => seq(
			case_insensitive('quickbmsver'),
			$._variable,
			$._statement_end,
		),

		exit_statement: $ => seq(
			choice(
				case_insensitive('cleanexit'),
				case_insensitive('exit'),
				case_insensitive('exitifnofilesopen'),
			),
			$._statement_end,
		),

		math_statement: $ => seq(
			case_insensitive('math'),
			field('left', $._variable),
			field('op', $._variable),
			field('right', $._variable),
			$._statement_end,
		),

		endian_statement: $ => seq(
			case_insensitive('endian'),
			field('type', $._variable),
			optional(field('name', $._variable)),
			$._statement_end,
		),

		get_var_chr_statement: $ => seq(
			case_insensitive('getvarchr'),
			field('name', $._variable),
			field('file_number', $._variable),
			field('offset', $._variable),
			optional(field('type', $._variable)),
			$._statement_end,
		),

		get_array_statement: $ => seq(
			case_insensitive('getarray'),
			// FIXME: this should be repeat1
			// repeat1(field('name', $._variable)),
			field('name', $._variable),
			field('index', $._variable),
			field('array', $._variable),
			$._statement_end,
		),

		get_statement: $ => seq(
			case_insensitive('get'),
			field('name', $._variable),
			field('type', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		get_d_string_statement: $ => seq(
			case_insensitive('getdstring'),
			field('name', $._variable),
			field('length', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		get_c_t_statement: $ => seq(
			case_insensitive('getct'),
			field('name', $._variable),
			field('type', $._variable),
			field('delimiter', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		get_bits_statement: $ => seq(
			case_insensitive('getbits'),
			field('name', $._variable),
			field('bits', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		_get_statements: $ => choice(
			$.get_var_chr_statement,
			$.get_array_statement,
			$.get_statement,
			$.get_d_string_statement,
			$.get_c_t_statement,
			$.get_bits_statement,
		),

		open_statement: $ => seq(
			case_insensitive('open'),
			choice(
				field('file_number', $._variable),
				seq(
					field('folder', $._variable),
					field('name', $._variable),
					optional(seq(
						field('file_number', $._variable),
						optional(field('exists', $._variable)),
					)),
				),
			),
			$._statement_end,
		),

		call_dll_statement: $ => seq(
			case_insensitive('calldll'),
			field('file', $._variable),
			choice(
				field('offset', $.number),
				field('function', choice($.string, $.identifier)),
			),
			field('calling_convention', $._variable),
			field('return', $._variable),
			repeat(field('argument', $._variable)),
			$._statement_end,
		),

		save_pos_statement: $ => seq(
			case_insensitive('savepos'),
			field('name', $._variable),
			optional(field('file_num', $._variable)),
			$._statement_end,
		),

		set_statement: $ => seq(
			case_insensitive('set'),
			field('name', $._variable),
			optional(choice(
				field('op', alias('=', $._variable)),
				field('type', $._variable)
			)),
			field('value', $._variable),
			$._statement_end,
		),

		put_var_chr_statement: $ => seq(
			case_insensitive('putvarchr'),
			field('name', $._variable),
			field('offset', $._variable),
			field('name', $._variable),
			optional(field('type', $._variable)),
			$._statement_end,
		),

		put_array_statement: $ => seq(
			case_insensitive('putarray'),
			field('array', $._variable),
			field('index', $._variable),
			repeat1(field('name', $._variable)),
			$._statement_end,
		),

		put_statement: $ => seq(
			case_insensitive('put'),
			field('name', $._variable),
			field('type', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		put_d_string_statement: $ => seq(
			case_insensitive('putdstring'),
			field('name', $._variable),
			field('length', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		put_c_t_statement: $ => seq(
			case_insensitive('putct'),
			field('name', $._variable),
			field('type', $._variable),
			field('char', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		put_bits_statement: $ => seq(
			case_insensitive('putbits'),
			field('name', $._variable),
			field('bits', $._variable),
			optional(field('file_number', $._variable)),
			$._statement_end,
		),

		_put_statements: $ => choice(
			$.put_var_chr_statement,
			$.put_array_statement,
			$.put_statement,
			$.put_d_string_statement,
			$.put_c_t_statement,
			$.put_bits_statement,
		),

		goto_statement: $ => seq(
			case_insensitive('goto'),
			field('offset', $._variable),
			optional(seq(
				field('file_number', $._variable),

				optional(field('type', choice(
					case_insensitive('SOF'), case_insensitive('SEEK_SET'),
					case_insensitive('SEEK_CUR'),
					case_insensitive('EOF'), case_insensitive('SEEK_END'),
				)))
			)),
			$._statement_end,
		),

		if_statement: $ => seq(
			case_insensitive('if'),
			field('condition', $.binary_expression),
			$._statement_end,

			optional(field('consequence', $.statement_list)),

			repeat(field('alternative', $.elif_statement)),
			optional(field('alternative', $.else_statement)),

			case_insensitive('endif'),
			$._statement_end,
		),

		elif_statement: $ => seq(
			case_insensitive('elif'),
			field('condition', $.binary_expression),
			$._statement_end,

			optional(field('consequence', $.statement_list)),
		),

		else_statement: $ => seq(
			case_insensitive('else'), $._statement_end,
			optional(field('consequence', $.statement_list)),
		),

		_comparison_value: $ => choice(
			$._variable,
		),

		binary_comparison: $ => seq(
			field('left', $._comparison_value),
			field('op', $.binary_op),
			field('right', $._comparison_value),
		),

		// based on check_condition function in cmd.c
		binary_op: _ => seq(
			optional('u'),
			optional('0'),
			choice(
				'<', case_insensitive('minor'), case_insensitive('lower'), case_insensitive('below'),
				'>', case_insensitive('major'), case_insensitive('greater'), case_insensitive('above'),
				'<>', '!=', '!==', case_insensitive('different'),
				'=', '==', '===', case_insensitive('equal'),
				case_insensitive('strcmp'), case_insensitive('stricmp'), case_insensitive('strcasecmp'),
				'>=',
				'<=',
				'&', '&&', case_insensitive('and'),
				case_insensitive('strstr'), case_insensitive('stristr'), case_insensitive('strcasestr'),
				'^', '^^', case_insensitive('xor'),
				'|', '||', case_insensitive('or'),
				'%', case_insensitive('mod'),
				'/', case_insensitive('div'),
				'<<', case_insensitive('shl'),
				'>>', case_insensitive('shr'),
				'!', case_insensitive('not'),
				'!!',
				'~', case_insensitive('complement'),
				case_insensitive('strncmp'), case_insensitive('strnicmp'), case_insensitive('strncasecmp'),
				case_insensitive('ext'), case_insensitive('extension'),
				case_insensitive('basename'),
				case_insensitive('filepath'),
				case_insensitive('filename'),
			),
		),

		binary_expression: $ => seq(
			$.binary_comparison,
			repeat(seq(
				choice('&&', '||', 'and', 'or'),
				$.binary_comparison,
			)),
		),

		op_value: $ => seq(
			field('op', $._variable),
			field('value', $._variable),
		),

		call_function_statement: $ => seq(
			case_insensitive('callfunction'),
			field('name', $._variable),
			optional(seq(
				field('save_variables', $._variable),
				optional(repeat(field('argument', $._variable))),
			)),
			$._statement_end,
		),

		start_function_statement: $ => seq(
			case_insensitive('startfunction'),
			field('name', $._variable),
			$._statement_end,

			optional(field('body', $.statement_list)),

			case_insensitive('endfunction'),
			$._statement_end,
		),

		next_statement: $ => seq(
			case_insensitive('next'),
			optional(seq(
				field('name', $._variable),
				optional(field('update', $.op_value)),
			)),
			$._statement_end,
		),

		prev_statement: $ => seq(
			case_insensitive('prev'),
			optional(seq(
				field('name', $._variable),
				optional(field('update', $.op_value)),
			)),
			$._statement_end,
		),

		for_statement: $ => seq(
			case_insensitive('for'),
			optional(seq(
				field('name', $._variable),

				optional(seq(
					field('initializer', $.op_value),
					optional(field('condition', $.op_value)),
				)),
			)),
			$._statement_end,

			optional(field('body', $.statement_list)),

			choice(
				$.next_statement,
				$.prev_statement,
			),
		),

		label_statement: $ => seq(
			case_insensitive('label'),
			field('name', $._variable),
			$._statement_end,
		),

		break_statement: $ => seq(
			case_insensitive('break'),
			optional(field('name', $._variable)),
			$._statement_end,
		),

		continue_statement: $ => seq(
			case_insensitive('continue'),
			optional(field('name', $._variable)),
			$._statement_end,
		),

		print_statement: $ => seq(
			case_insensitive('print'),
			// TODO: this should be a cstring with special %VAR% syntax
			field('message', $._variable),
			$._statement_end,
		),

		append_statement: $ => seq(
			case_insensitive('append'),
			optional(field('direction', $._variable)),
			$._statement_end,
		),

		log_statement: $ => seq(
			case_insensitive('log'),
			field('name', $._variable),
			field('offset', $._variable),
			field('size', $._variable),
			optional(seq(
				field('file_number', $._variable),
				optional(field('encrypted_size', $._variable)),
			)),
			$._statement_end,
		),

		clog_statement: $ => seq(
			case_insensitive('clog'),
			field('name', $._variable),
			field('offset', $._variable),
			field('compressed_size', $._variable),
			field('size', $._variable),
			optional(seq(
				field('file_number', $._variable),
				optional(field('encrypted_size', $._variable)),
			)),
			$._statement_end,
		),

		s_log_statement: $ => seq(
			case_insensitive('slog'),
			field('name', $._variable),
			field('offset', $._variable),
			field('size', $._variable),
			optional(seq(
				field('type', $._variable),
				optional(seq(
					field('file_number', $._variable),
					optional(field('id', $._variable)),
				)),
			)),
			$._statement_end,
		),
	}
})

// taken from https://github.com/stadelmanma/tree-sitter-fortran/blob/edcb3374f4698aaedf24bc572f6b2f5ef0e89ac7/grammar.js#L1160
function case_insensitive(keyword, alias_as_word = true) {
	let result = new RegExp(
		keyword
			.split('')
			.map(l => l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
			.join('')
	)

	if (alias_as_word) {
		result = alias(result, keyword)
	}

	return result
}
