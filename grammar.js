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
		type: _ => /[a-zA-z0-9?-]+/,

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
			$._empty_statment,

			$.version_statement,

			$.math_statement,

			$.get_statement,
			$.set_statement,
			$._put_statements,

			$.goto_statement,
			$.if_statement,

			$.print_statement,
		),

		_statment_end: $ => seq(
			optional(choice(
				';',
				$.comment,
			)),
			'\n'
		),

		_empty_statment: $ => $._statment_end,

		// TODO: split out variable into version and arguments fields
		version_statement: $ => seq(
			case_insensitive('quickbmsver'),
			$.variable,
			$._statment_end,
		),

		math_statement: $ => seq(
			case_insensitive('math'),
			field('left', $.variable),
			field('op', $.variable),
			field('right', $.variable),
			$._statment_end,
		),

		get_statement: $ => seq(
			case_insensitive('get'),
			field('name', $.variable),
			field('type', $.type),
			optional(field('file_number', $.variable)),
			$._statment_end,
		),

		set_statement: $ => seq(
			case_insensitive('set'),
			field('name', $.variable),
			// TODO: this should be $.type instead of $.variable, but that
			//       causes issues where optional(type: $.type) is always skipped
			//       since (value: $.variable) always is a valid token
			optional(field('type', $.variable)),
			field('value', $.variable),
			$._statment_end,
		),

		put_var_chr_statement: $ => seq(
			case_insensitive('putvarchr'),
			field('name', $.variable),
			field('offset', $.variable),
			field('name', $.variable),
			optional(field('type', $.variable)),
			$._statment_end,
		),

		put_array_statement: $ => seq(
			case_insensitive('putarray'),
			field('array', $.variable),
			field('index', $.variable),
			repeat1(field('name', $.variable)),
			$._statment_end,
		),

		put_statement: $ => seq(
			case_insensitive('put'),
			field('name', $.variable),
			field('type', $.variable),
			optional(field('file_number', $.variable)),
			$._statment_end,
		),

		put_d_string_statement: $ => seq(
			case_insensitive('putdstring'),
			field('name', $.variable),
			field('length', $.variable),
			optional(field('file_number', $.variable)),
			$._statment_end,
		),

		put_c_t_statement: $ => seq(
			case_insensitive('putct'),
			field('name', $.variable),
			field('type', $.variable),
			field('char', $.variable),
			optional(field('file_number', $.variable)),
			$._statment_end,
		),

		put_bits_statement: $ => seq(
			case_insensitive('putbits'),
			field('name', $.variable),
			field('bits', $.variable),
			optional(field('file_number', $.variable)),
			$._statment_end,
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
			$._statment_end,
		),

		if_statement: $ => seq(
			case_insensitive('if'),
			field('condition', $.binary_expression),
			$._statment_end,

			optional(field('consequence', $.statement_list)),

			repeat(field('alternative', $.elif_statement)),
			optional(field('alternative', $.else_statement)),

			case_insensitive('endif'),
			$._statment_end,
		),

		elif_statement: $ => seq(
			case_insensitive('elif'),
			field('condition', $.binary_expression),
			$._statment_end,

			optional(field('consequence', $.statement_list)),
		),

		else_statement: $ => seq(
			case_insensitive('else'), $._statment_end,
			optional(field('consequence', $.statement_list)),
		),

		_comparison_value: $ => choice(
			$.variable,
		),

		binary_comparison: $ => seq(
			field('left', $._comparison_value),
			$._binary_op,
			field('right', $._comparison_value),
		),

		// based on check_condition function in cmd.c
		_binary_op: $ => seq(
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

		print_statement: $ => seq(
			case_insensitive('print'),
			// TODO: this should be a cstring with special %VAR% syntax
			field('message', $.variable),
			$._statment_end,
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
