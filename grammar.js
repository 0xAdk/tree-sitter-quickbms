module.exports = grammar({
	name: 'quickbms',

	extra: _ => [
		/[ \t]/
	],

	rules: {
		statement_list: $ => repeat1($._statement),

		// TODO: split out $.number, $.string, and $.text into their own rules
		// TODO: add string escaping
		variable: _ => choice(/"[^"]*"/, /'.'/,  /\S+/),

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

			$.version_statement,

			$.math_statement,

			$.save_pos_statement,
			$.set_statement,

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

		// TODO: split out variable into version and arguments fields
		version_statement: $ => seq(
			case_insensitive('quickbmsver'),
			$.variable,
			$._statement_end,
		),

		math_statement: $ => seq(
			case_insensitive('math'),
			field('left', $.variable),
			field('op', $.variable),
			field('right', $.variable),
			$._statement_end,
		),

		get_var_chr_statement: $ => seq(
			case_insensitive('getvarchr'),
			field('name', $.variable),
			field('file_number', $.variable),
			field('offset', $.variable),
			optional(field('type', $.variable)),
			$._statement_end,
		),

		get_array_statement: $ => seq(
			case_insensitive('getarray'),
			// FIXME: this should be repeat1
			// repeat1(field('name', $.variable)),
			field('name', $.variable),
			field('index', $.variable),
			field('array', $.variable),
			$._statement_end,
		),

		get_statement: $ => seq(
			case_insensitive('get'),
			field('name', $.variable),
			field('type', $.variable),
			optional(field('file_number', $.variable)),
			$._statement_end,
		),

		get_d_string_statement: $ => seq(
			case_insensitive('getdstring'),
			field('name', $.variable),
			field('length', $.variable),
			optional(field('file_number', $.variable)),
			$._statement_end,
		),

		get_c_t_statement: $ => seq(
			case_insensitive('getct'),
			field('name', $.variable),
			field('type', $.variable),
			field('delimiter', $.variable),
			optional(field('file_number', $.variable)),
			$._statement_end,
		),

		get_bits_statement: $ => seq(
			case_insensitive('getbits'),
			field('name', $.variable),
			field('bits', $.variable),
			optional(field('file_number', $.variable)),
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


		save_pos_statement: $ => seq(
			case_insensitive('savepos'),
			field('name', $.variable),
			optional(field('file_num', $.variable)),
			$._statement_end,
		),

		set_statement: $ => seq(
			case_insensitive('set'),
			field('name', $.variable),
			optional(choice(
				field('op', alias('=', $.variable)),
				field('type', $.variable)
			)),
			field('value', $.variable),
			$._statement_end,
		),

		put_var_chr_statement: $ => seq(
			case_insensitive('putvarchr'),
			field('name', $.variable),
			field('offset', $.variable),
			field('name', $.variable),
			optional(field('type', $.variable)),
			$._statement_end,
		),

		put_array_statement: $ => seq(
			case_insensitive('putarray'),
			field('array', $.variable),
			field('index', $.variable),
			repeat1(field('name', $.variable)),
			$._statement_end,
		),

		put_statement: $ => seq(
			case_insensitive('put'),
			field('name', $.variable),
			field('type', $.variable),
			optional(field('file_number', $.variable)),
			$._statement_end,
		),

		put_d_string_statement: $ => seq(
			case_insensitive('putdstring'),
			field('name', $.variable),
			field('length', $.variable),
			optional(field('file_number', $.variable)),
			$._statement_end,
		),

		put_c_t_statement: $ => seq(
			case_insensitive('putct'),
			field('name', $.variable),
			field('type', $.variable),
			field('char', $.variable),
			optional(field('file_number', $.variable)),
			$._statement_end,
		),

		put_bits_statement: $ => seq(
			case_insensitive('putbits'),
			field('name', $.variable),
			field('bits', $.variable),
			optional(field('file_number', $.variable)),
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
			field('offset', $.variable),
			optional(seq(
				field('file_number', $.variable),

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
			$.variable,
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
			field('op', $.variable),
			field('value', $.variable),
		),

		call_function_statement: $ => seq(
			case_insensitive('callfunction'),
			field('name', $.variable),
			optional(seq(
				field('save_variables', $.variable),
				optional(repeat(field('argument', $.variable))),
			)),
			$._statement_end,
		),

		start_function_statement: $ => seq(
			case_insensitive('startfunction'),
			field('name', $.variable),
			$._statement_end,

			optional(field('body', $.statement_list)),

			case_insensitive('endfunction'),
			$._statement_end,
		),

		next_statement: $ => seq(
			case_insensitive('next'),
			optional(seq(
				field('name', $.variable),
				optional(field('update', $.op_value)),
			)),
			$._statement_end,
		),

		prev_statement: $ => seq(
			case_insensitive('prev'),
			optional(seq(
				field('name', $.variable),
				optional(field('update', $.op_value)),
			)),
			$._statement_end,
		),

		for_statement: $ => seq(
			case_insensitive('for'),
			optional(seq(
				field('name', $.variable),

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
			field('name', $.variable),
			$._statement_end,
		),

		break_statement: $ => seq(
			case_insensitive('break'),
			optional(field('name', $.variable)),
			$._statement_end,
		),

		continue_statement: $ => seq(
			case_insensitive('continue'),
			optional(field('name', $.variable)),
			$._statement_end,
		),

		print_statement: $ => seq(
			case_insensitive('print'),
			// TODO: this should be a cstring with special %VAR% syntax
			field('message', $.variable),
			$._statement_end,
		),

		log_statement: $ => seq(
			case_insensitive('log'),
			field('name', $.variable),
			field('offset', $.variable),
			field('size', $.variable),
			optional(seq(
				field('file_number', $.variable),
				optional(field('encrypted_size', $.variable)),
			)),
			$._statement_end,
		),

		clog_statement: $ => seq(
			case_insensitive('clog'),
			field('name', $.variable),
			field('offset', $.variable),
			field('compressed_size', $.variable),
			field('size', $.variable),
			optional(seq(
				field('file_number', $.variable),
				optional(field('encrypted_size', $.variable)),
			)),
			$._statement_end,
		),

		s_log_statement: $ => seq(
			case_insensitive('slog'),
			field('name', $.variable),
			field('offset', $.variable),
			field('size', $.variable),
			optional(seq(
				field('type', $.variable),
				optional(seq(
					field('file_number', $.variable),
					optional(field('id', $.variable)),
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
