let c_type_qualifiers = [
	'unsigned', 'signed',
	'const', 'static',
	'local', 'global', 'volatile',
	'hexadecimal', 'decimal', 'octal',
	'read-only',
]

let c_types = [
	'8', '8bit',
	'byte', 'ubyte',
	'char', 'cchar',
	'tchar', 'uchar',
	'u_char', 'uint8_t',
	'uint8', 'int8_t',
	'int8', 'u8',
	'i8', 'si8',
	'ui8', 'ch',
	'tch', 'str',
	'sz', 'ctstr',
	'tstr', 'fchar',
	'boole8', 'string',
	'zstring', 'binary',

	'16', '16bit',
	'word', 'short',
	'ushort', 'u_short',
	'uint16_t', 'uint16',
	'int16_t', 'int16',
	'u16', 'i16',
	'si16', 'ui16',
	'fixed8', 'wchar',
	'wchar_t', 'wch',
	'wstr', 'fshort',
	'char16', 'string16',
	'boole16', 'zstring16',

	'32', '32bit',
	'dword', 'unsigned',
	'int', 'uint',
	'u_int', 'long',
	'ulong', 'u_long',
	'uint32_t', 'uint32',
	'int32_t', 'int32',
	'u32', 'i32',
	'si32', 'ui32',
	'fixed', 'float16',
	'bool', 'boolean',
	'boole32', 'void',
	'handle', 'flong',
	'dosdatetime', 'unixdatetime',
	'time_t',

	'64', '64bit',
	'longlong', 'ulonglong',
	'u_longlong', 'uint64_t',
	'uint64', 'int64_t',
	'int64', 'u64',
	'i64', 'si64',
	'ui64', 'void64',
	'filetime', 'oledatetime',
	'sqldatetime', 'javadatetime',

	'float', 'double',

	'encodedu32', 'encoded',

	'bits', 'sb',
	'ub', 'fb',
]

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

			$.string_statement,
			$.strlen_statement,
			$.math_statement,
			$.xmath_statement,
			$.find_loc_statement,

			$.open_statement,
			$.file_xor_statement,
			$.call_dll_statement,

			$.save_pos_statement,
			$.set_statement,

			$.endian_statement,
			$._magic_check_statements,
			$._get_statements,
			$._put_statements,

			$.goto_statement,
			$.padding_statement,
			$.if_statement,

			$.call_function_statement,
			$.start_function_statement,

			$.for_statement,
			$.do_statement,
			$.loop_statement,
			$.label_statement,
			$.break_statement,
			$.continue_statement,

			$.print_statement,

			$.namecrc_statement,
			$.append_statement,
			$.encryption_statement,
			$.log_statement,
			$.comtype_statement,
			$.clog_statement,
			$.s_log_statement,

			$.c_variable_declaration,
			$.c_array_declaration,
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

		strlen_statement: $ => seq(
			case_insensitive('strlen'),
			field('name', $._variable),
			field('string', $._variable),
			optional(field('size', $._variable)),
			$._statement_end,
		),

		// TODO: add to _printf and _sscanf rules printf string parsing for
		//       format field: e.g. %d in "foo%d"
		_string_statement_printf: $ => seq(
			field('op', alias(
				token(prec(1, seq(
					optional(token.immediate('0')),
					'p',
					optional(token.immediate('=')),
				))),
				$.identifier,
			)),
			field('format', $._variable),
			repeat(field('argument', $._variable)),
		),

		_string_statement_sscanf: $ => seq(
			field('op', alias(
				token(prec(1, seq(
					optional(token.immediate('0')),
					's',
					optional(token.immediate('=')),
				))),
				$.identifier,
			)),
			field('format', $._variable),
			repeat(field('argument', $._variable)),
		),

		// TODO: add bms print string parsing to format: e.g. %FOO|x% in "test%FOO|x%"
		_string_statement_quickbms_print: $ => seq(
			field('op', alias(
				token(prec(1, seq(
					optional(token.immediate('0')),
					'P',
					optional(token.immediate('=')),
				))),
				$.identifier,
			)),
			field('format', $._variable),
		),

		// TODO?: I'm not sure how this one works, might want to parse format field
		_string_statement_sscanf_split: $ => seq(
			field('op', alias(
				token(prec(1, seq(
					optional(token.immediate('0')),
					'S',
					optional(token.immediate('=')),
				))),
				$.identifier,
			)),
			field('format', $._variable),
			repeat(field('argument', $._variable)),
		),

		_string_statement_replace: $ => seq(
			field('op', alias(
				token(prec(1, seq(
					optional(token.immediate('0')),
					'R',
					optional(token.immediate('=')),
				))),
				$.identifier,
			)),
			field('format', $._variable),
			repeat(field('argument', $._variable)),
		),

		string_statement: $ => seq(
			case_insensitive('string'),
			choice(
				seq(
					field('name', $._variable),
					choice(
						$._string_statement_printf,
						$._string_statement_sscanf,
						$._string_statement_quickbms_print,
						$._string_statement_sscanf_split,
						$._string_statement_replace,
					)
				),
				seq(
					field('left', $._variable),
					field('op', $.identifier),
					field('value', $._variable),
				),
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

		xmath_statement: $ => seq(
			case_insensitive('xmath'),
			field('name', $._variable),
			// TODO: parse this as it's own rule since while operations looks like a
			//       string, it really has it's own syntax
			field('operations', $._variable),
			$._statement_end,
		),

		find_loc_statement: $ => seq(
			case_insensitive('findloc'),
			field('name', $._variable),
			field('type', $.identifier),
			field('string', $._variable),
			optional(seq(
				field('file_number', $._variable),
				optional(seq(
					field('error_value', $._variable),
					optional(field('end_offset', $._variable)),
				)),
			)),
			$._statement_end,
		),

		endian_statement: $ => seq(
			case_insensitive('endian'),
			field('type', $._variable),
			optional(field('name', $._variable)),
			$._statement_end,
		),

		id_string_statement: $ => seq(
			case_insensitive('idstring'),
			optional(field('file_number', $._variable)),
			field('magic', $._variable),
			$._statement_end,
		),

		id_statement: $ => seq(
			case_insensitive('id'),
			optional(field('file_number', $._variable)),
			field('magic', $._variable),
			$._statement_end,
		),

		memcmp_statement: $ => seq(
			case_insensitive('memcmp'),
			optional(field('file_number', $._variable)),
			field('magic', $._variable),
			$._statement_end,
		),

		strcmp_statement: $ => seq(
			case_insensitive('strcmp'),
			optional(field('file_number', $._variable)),
			field('magic', $._variable),
			$._statement_end,
		),

		_magic_check_statements: $ => choice(
			$.id_string_statement,
			$.id_statement,
			$.memcmp_statement,
			$.strcmp_statement,
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

		file_xor_statement: $ => seq(
			case_insensitive('filexor'),
			field('bytes', $._variable),
			optional(seq(
				field('offset', $._variable),
				optional(field('file_number', $._variable)),
			)),
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

		padding_statement: $ => seq(
			case_insensitive('padding'),
			field('alignment', $._variable),
			optional(seq(
				field('file_number', $._variable),
				optional(field('offset', $._variable)),
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

		while_statement: $ => seq(
			case_insensitive('while'),
			field('condition', $.binary_expression),
			$._statement_end,
		),

		// basically just $.while_statement, but the it only does != checks,
		// and only on two variables. While $.while_statement, can do many
		// kinds of checks, with multiple predicates.
		end_loop_statement: $ => seq(
			case_insensitive('endloop'),
			field('left', $._variable),
			field('right', $._variable),
			$._statement_end,
		),

		do_statement: $ => seq(
			case_insensitive('do'),
			$._statement_end,

			optional(field('body', $.statement_list)),

			choice($.while_statement, $.end_loop_statement),
		),

		loop_statement: $ => seq(
			case_insensitive('loop'),
			$._statement_end,

			optional(field('body', $.statement_list)),

			choice($.while_statement, $.end_loop_statement),
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

		namecrc_statement: $ => seq(
			case_insensitive('namecrc'),
			field('name', $._variable),
			field('crc', $._variable),
			optional(seq(
				field('file_list', $._variable),
				optional(seq(
					field('type', $._variable),
					optional(seq(
						field('polynomial', $._variable),
						optional(field('parameters', $._variable)),
					)),
				)),
			)),
			$._statement_end,
		),

		append_statement: $ => seq(
			case_insensitive('append'),
			optional(field('direction', $._variable)),
			$._statement_end,
		),

		encryption_statement: $ => seq(
			case_insensitive('encryption'),
			field('algorithm', $._variable),
			choice(
				field('memory_file', alias(
					token(prec(1, seq(
						'MEMORY_FILE',
						token.immediate(/\S*/),
					))),
					$.identifier
				)),
				field('key', $._variable),
			),
			optional(seq(
				field('ivec', $._variable),
				optional(seq(
					field('mode', $._variable),
					optional(field('key_length', $._variable)),
				)),
			)),
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

		comtype_statement: $ => seq(
			case_insensitive('comtype'),
			field('algorithm', $._variable),
			optional(seq(
				field('dictionary', $._variable),
				optional(field('dictionary_length', $._variable)),
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

		c_type_qualifier: $ => choice(...c_type_qualifiers),

		_c_identifier: $ => /[A-za-z_]\w*/,

		c_type: $ => $._c_identifier,

		c_qualified_type: $ => seq(
			repeat1($.c_type_qualifier),
			$.c_type,
		),

		_c_type: $ => choice(
			$.c_type,
			$.c_qualified_type,
		),

		c_variable_declaration: $ => seq(
			field('type', $._c_type),
			field('name', alias($._c_identifier, $.identifier)),
			optional(seq(
				':',
				field('bit_size', alias(/\d+/, $.number)),
			)),
			$._statement_end,
		),

		c_array_declaration: $ => seq(
			field('type', $._c_type),
			field('name', alias($._c_identifier, $.identifier)),
			seq(
				'[',
				field('size', choice(
					alias(/\d+/, $.number),
					alias($._c_identifier, $.identifier),
				)),
				']',
			),
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
