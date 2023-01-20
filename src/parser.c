#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 33

enum {
  aux_sym_variable_token1 = 1,
  aux_sym_variable_token2 = 2,
  aux_sym_variable_token3 = 3,
  sym_type = 4,
  sym_comment = 5,
  anon_sym_SEMI = 6,
  anon_sym_LF = 7,
  aux_sym_version_statement_token1 = 8,
  aux_sym_math_statement_token1 = 9,
  aux_sym_get_statement_token1 = 10,
  aux_sym_set_statement_token1 = 11,
  aux_sym_put_var_chr_statement_token1 = 12,
  aux_sym_put_array_statement_token1 = 13,
  aux_sym_put_statement_token1 = 14,
  aux_sym_put_d_string_statement_token1 = 15,
  aux_sym_put_c_t_statement_token1 = 16,
  aux_sym_put_bits_statement_token1 = 17,
  aux_sym_goto_statement_token1 = 18,
  aux_sym_goto_statement_token2 = 19,
  aux_sym_goto_statement_token3 = 20,
  aux_sym_goto_statement_token4 = 21,
  aux_sym_goto_statement_token5 = 22,
  aux_sym_goto_statement_token6 = 23,
  aux_sym_if_statement_token1 = 24,
  aux_sym_if_statement_token2 = 25,
  aux_sym_elif_statement_token1 = 26,
  aux_sym_else_statement_token1 = 27,
  anon_sym_u = 28,
  anon_sym_0 = 29,
  anon_sym_LT = 30,
  aux_sym__binary_op_token1 = 31,
  aux_sym__binary_op_token2 = 32,
  aux_sym__binary_op_token3 = 33,
  anon_sym_GT = 34,
  aux_sym__binary_op_token4 = 35,
  aux_sym__binary_op_token5 = 36,
  aux_sym__binary_op_token6 = 37,
  anon_sym_LT_GT = 38,
  anon_sym_BANG_EQ = 39,
  anon_sym_BANG_EQ_EQ = 40,
  aux_sym__binary_op_token7 = 41,
  anon_sym_EQ = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_EQ_EQ_EQ = 44,
  aux_sym__binary_op_token8 = 45,
  aux_sym__binary_op_token9 = 46,
  aux_sym__binary_op_token10 = 47,
  aux_sym__binary_op_token11 = 48,
  anon_sym_GT_EQ = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_AMP = 51,
  anon_sym_AMP_AMP = 52,
  aux_sym__binary_op_token12 = 53,
  aux_sym__binary_op_token13 = 54,
  aux_sym__binary_op_token14 = 55,
  aux_sym__binary_op_token15 = 56,
  anon_sym_CARET = 57,
  anon_sym_CARET_CARET = 58,
  aux_sym__binary_op_token16 = 59,
  anon_sym_PIPE = 60,
  anon_sym_PIPE_PIPE = 61,
  aux_sym__binary_op_token17 = 62,
  anon_sym_PERCENT = 63,
  aux_sym__binary_op_token18 = 64,
  anon_sym_SLASH = 65,
  aux_sym__binary_op_token19 = 66,
  anon_sym_LT_LT = 67,
  aux_sym__binary_op_token20 = 68,
  anon_sym_GT_GT = 69,
  aux_sym__binary_op_token21 = 70,
  anon_sym_BANG = 71,
  aux_sym__binary_op_token22 = 72,
  anon_sym_BANG_BANG = 73,
  anon_sym_TILDE = 74,
  aux_sym__binary_op_token23 = 75,
  aux_sym__binary_op_token24 = 76,
  aux_sym__binary_op_token25 = 77,
  aux_sym__binary_op_token26 = 78,
  aux_sym__binary_op_token27 = 79,
  aux_sym__binary_op_token28 = 80,
  aux_sym__binary_op_token29 = 81,
  aux_sym__binary_op_token30 = 82,
  aux_sym__binary_op_token31 = 83,
  anon_sym_and = 84,
  anon_sym_or = 85,
  aux_sym_print_statement_token1 = 86,
  sym_statement_list = 87,
  sym_variable = 88,
  sym__statement = 89,
  sym__statment_end = 90,
  sym__empty_statment = 91,
  sym_version_statement = 92,
  sym_math_statement = 93,
  sym_get_statement = 94,
  sym_set_statement = 95,
  sym_put_var_chr_statement = 96,
  sym_put_array_statement = 97,
  sym_put_statement = 98,
  sym_put_d_string_statement = 99,
  sym_put_c_t_statement = 100,
  sym_put_bits_statement = 101,
  sym__put_statements = 102,
  sym_goto_statement = 103,
  sym_if_statement = 104,
  sym_elif_statement = 105,
  sym_else_statement = 106,
  sym__comparison_value = 107,
  sym_binary_comparison = 108,
  sym__binary_op = 109,
  sym_binary_expression = 110,
  sym_print_statement = 111,
  aux_sym_statement_list_repeat1 = 112,
  aux_sym_put_array_statement_repeat1 = 113,
  aux_sym_if_statement_repeat1 = 114,
  aux_sym_binary_expression_repeat1 = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_variable_token2] = "variable_token2",
  [aux_sym_variable_token3] = "variable_token3",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [aux_sym_version_statement_token1] = "quickbmsver",
  [aux_sym_math_statement_token1] = "math",
  [aux_sym_get_statement_token1] = "get",
  [aux_sym_set_statement_token1] = "set",
  [aux_sym_put_var_chr_statement_token1] = "putvarchr",
  [aux_sym_put_array_statement_token1] = "putarray",
  [aux_sym_put_statement_token1] = "put",
  [aux_sym_put_d_string_statement_token1] = "putdstring",
  [aux_sym_put_c_t_statement_token1] = "putct",
  [aux_sym_put_bits_statement_token1] = "putbits",
  [aux_sym_goto_statement_token1] = "goto",
  [aux_sym_goto_statement_token2] = "SOF",
  [aux_sym_goto_statement_token3] = "SEEK_SET",
  [aux_sym_goto_statement_token4] = "SEEK_CUR",
  [aux_sym_goto_statement_token5] = "EOF",
  [aux_sym_goto_statement_token6] = "SEEK_END",
  [aux_sym_if_statement_token1] = "if",
  [aux_sym_if_statement_token2] = "endif",
  [aux_sym_elif_statement_token1] = "elif",
  [aux_sym_else_statement_token1] = "else",
  [anon_sym_u] = "u",
  [anon_sym_0] = "0",
  [anon_sym_LT] = "<",
  [aux_sym__binary_op_token1] = "minor",
  [aux_sym__binary_op_token2] = "lower",
  [aux_sym__binary_op_token3] = "below",
  [anon_sym_GT] = ">",
  [aux_sym__binary_op_token4] = "major",
  [aux_sym__binary_op_token5] = "greater",
  [aux_sym__binary_op_token6] = "above",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [aux_sym__binary_op_token7] = "different",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [aux_sym__binary_op_token8] = "equal",
  [aux_sym__binary_op_token9] = "strcmp",
  [aux_sym__binary_op_token10] = "stricmp",
  [aux_sym__binary_op_token11] = "strcasecmp",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_AMP] = "&&",
  [aux_sym__binary_op_token12] = "and",
  [aux_sym__binary_op_token13] = "strstr",
  [aux_sym__binary_op_token14] = "stristr",
  [aux_sym__binary_op_token15] = "strcasestr",
  [anon_sym_CARET] = "^",
  [anon_sym_CARET_CARET] = "^^",
  [aux_sym__binary_op_token16] = "xor",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_PIPE] = "||",
  [aux_sym__binary_op_token17] = "or",
  [anon_sym_PERCENT] = "%",
  [aux_sym__binary_op_token18] = "mod",
  [anon_sym_SLASH] = "/",
  [aux_sym__binary_op_token19] = "div",
  [anon_sym_LT_LT] = "<<",
  [aux_sym__binary_op_token20] = "shl",
  [anon_sym_GT_GT] = ">>",
  [aux_sym__binary_op_token21] = "shr",
  [anon_sym_BANG] = "!",
  [aux_sym__binary_op_token22] = "not",
  [anon_sym_BANG_BANG] = "!!",
  [anon_sym_TILDE] = "~",
  [aux_sym__binary_op_token23] = "complement",
  [aux_sym__binary_op_token24] = "strncmp",
  [aux_sym__binary_op_token25] = "strnicmp",
  [aux_sym__binary_op_token26] = "strncasecmp",
  [aux_sym__binary_op_token27] = "ext",
  [aux_sym__binary_op_token28] = "extension",
  [aux_sym__binary_op_token29] = "basename",
  [aux_sym__binary_op_token30] = "filepath",
  [aux_sym__binary_op_token31] = "filename",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [aux_sym_print_statement_token1] = "print",
  [sym_statement_list] = "statement_list",
  [sym_variable] = "variable",
  [sym__statement] = "_statement",
  [sym__statment_end] = "_statment_end",
  [sym__empty_statment] = "_empty_statment",
  [sym_version_statement] = "version_statement",
  [sym_math_statement] = "math_statement",
  [sym_get_statement] = "get_statement",
  [sym_set_statement] = "set_statement",
  [sym_put_var_chr_statement] = "put_var_chr_statement",
  [sym_put_array_statement] = "put_array_statement",
  [sym_put_statement] = "put_statement",
  [sym_put_d_string_statement] = "put_d_string_statement",
  [sym_put_c_t_statement] = "put_c_t_statement",
  [sym_put_bits_statement] = "put_bits_statement",
  [sym__put_statements] = "_put_statements",
  [sym_goto_statement] = "goto_statement",
  [sym_if_statement] = "if_statement",
  [sym_elif_statement] = "elif_statement",
  [sym_else_statement] = "else_statement",
  [sym__comparison_value] = "_comparison_value",
  [sym_binary_comparison] = "binary_comparison",
  [sym__binary_op] = "_binary_op",
  [sym_binary_expression] = "binary_expression",
  [sym_print_statement] = "print_statement",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_put_array_statement_repeat1] = "put_array_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_binary_expression_repeat1] = "binary_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [aux_sym_variable_token2] = aux_sym_variable_token2,
  [aux_sym_variable_token3] = aux_sym_variable_token3,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_version_statement_token1] = aux_sym_version_statement_token1,
  [aux_sym_math_statement_token1] = aux_sym_math_statement_token1,
  [aux_sym_get_statement_token1] = aux_sym_get_statement_token1,
  [aux_sym_set_statement_token1] = aux_sym_set_statement_token1,
  [aux_sym_put_var_chr_statement_token1] = aux_sym_put_var_chr_statement_token1,
  [aux_sym_put_array_statement_token1] = aux_sym_put_array_statement_token1,
  [aux_sym_put_statement_token1] = aux_sym_put_statement_token1,
  [aux_sym_put_d_string_statement_token1] = aux_sym_put_d_string_statement_token1,
  [aux_sym_put_c_t_statement_token1] = aux_sym_put_c_t_statement_token1,
  [aux_sym_put_bits_statement_token1] = aux_sym_put_bits_statement_token1,
  [aux_sym_goto_statement_token1] = aux_sym_goto_statement_token1,
  [aux_sym_goto_statement_token2] = aux_sym_goto_statement_token2,
  [aux_sym_goto_statement_token3] = aux_sym_goto_statement_token3,
  [aux_sym_goto_statement_token4] = aux_sym_goto_statement_token4,
  [aux_sym_goto_statement_token5] = aux_sym_goto_statement_token5,
  [aux_sym_goto_statement_token6] = aux_sym_goto_statement_token6,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_if_statement_token2] = aux_sym_if_statement_token2,
  [aux_sym_elif_statement_token1] = aux_sym_elif_statement_token1,
  [aux_sym_else_statement_token1] = aux_sym_else_statement_token1,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym__binary_op_token1] = aux_sym__binary_op_token1,
  [aux_sym__binary_op_token2] = aux_sym__binary_op_token2,
  [aux_sym__binary_op_token3] = aux_sym__binary_op_token3,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym__binary_op_token4] = aux_sym__binary_op_token4,
  [aux_sym__binary_op_token5] = aux_sym__binary_op_token5,
  [aux_sym__binary_op_token6] = aux_sym__binary_op_token6,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_BANG_EQ_EQ] = anon_sym_BANG_EQ_EQ,
  [aux_sym__binary_op_token7] = aux_sym__binary_op_token7,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [aux_sym__binary_op_token8] = aux_sym__binary_op_token8,
  [aux_sym__binary_op_token9] = aux_sym__binary_op_token9,
  [aux_sym__binary_op_token10] = aux_sym__binary_op_token10,
  [aux_sym__binary_op_token11] = aux_sym__binary_op_token11,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [aux_sym__binary_op_token12] = anon_sym_and,
  [aux_sym__binary_op_token13] = aux_sym__binary_op_token13,
  [aux_sym__binary_op_token14] = aux_sym__binary_op_token14,
  [aux_sym__binary_op_token15] = aux_sym__binary_op_token15,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [aux_sym__binary_op_token16] = aux_sym__binary_op_token16,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [aux_sym__binary_op_token17] = anon_sym_or,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym__binary_op_token18] = aux_sym__binary_op_token18,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__binary_op_token19] = aux_sym__binary_op_token19,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [aux_sym__binary_op_token20] = aux_sym__binary_op_token20,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym__binary_op_token21] = aux_sym__binary_op_token21,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym__binary_op_token22] = aux_sym__binary_op_token22,
  [anon_sym_BANG_BANG] = anon_sym_BANG_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym__binary_op_token23] = aux_sym__binary_op_token23,
  [aux_sym__binary_op_token24] = aux_sym__binary_op_token24,
  [aux_sym__binary_op_token25] = aux_sym__binary_op_token25,
  [aux_sym__binary_op_token26] = aux_sym__binary_op_token26,
  [aux_sym__binary_op_token27] = aux_sym__binary_op_token27,
  [aux_sym__binary_op_token28] = aux_sym__binary_op_token28,
  [aux_sym__binary_op_token29] = aux_sym__binary_op_token29,
  [aux_sym__binary_op_token30] = aux_sym__binary_op_token30,
  [aux_sym__binary_op_token31] = aux_sym__binary_op_token31,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [aux_sym_print_statement_token1] = aux_sym_print_statement_token1,
  [sym_statement_list] = sym_statement_list,
  [sym_variable] = sym_variable,
  [sym__statement] = sym__statement,
  [sym__statment_end] = sym__statment_end,
  [sym__empty_statment] = sym__empty_statment,
  [sym_version_statement] = sym_version_statement,
  [sym_math_statement] = sym_math_statement,
  [sym_get_statement] = sym_get_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_put_var_chr_statement] = sym_put_var_chr_statement,
  [sym_put_array_statement] = sym_put_array_statement,
  [sym_put_statement] = sym_put_statement,
  [sym_put_d_string_statement] = sym_put_d_string_statement,
  [sym_put_c_t_statement] = sym_put_c_t_statement,
  [sym_put_bits_statement] = sym_put_bits_statement,
  [sym__put_statements] = sym__put_statements,
  [sym_goto_statement] = sym_goto_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_elif_statement] = sym_elif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym__comparison_value] = sym__comparison_value,
  [sym_binary_comparison] = sym_binary_comparison,
  [sym__binary_op] = sym__binary_op,
  [sym_binary_expression] = sym_binary_expression,
  [sym_print_statement] = sym_print_statement,
  [aux_sym_statement_list_repeat1] = aux_sym_statement_list_repeat1,
  [aux_sym_put_array_statement_repeat1] = aux_sym_put_array_statement_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_binary_expression_repeat1] = aux_sym_binary_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_math_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_get_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_put_var_chr_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_put_array_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_put_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_put_d_string_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_put_c_t_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_put_bits_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_goto_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_goto_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_goto_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_goto_statement_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_goto_statement_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_goto_statement_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elif_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_else_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token23] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token24] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token25] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token26] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token27] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token28] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token29] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token30] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_op_token31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_print_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_statement_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__statment_end] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_statment] = {
    .visible = false,
    .named = true,
  },
  [sym_version_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_math_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_get_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put_var_chr_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put_array_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put_d_string_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put_c_t_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put_bits_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__put_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_goto_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__comparison_value] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_op] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_put_array_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_array = 2,
  field_bits = 3,
  field_char = 4,
  field_condition = 5,
  field_consequence = 6,
  field_file_number = 7,
  field_index = 8,
  field_left = 9,
  field_length = 10,
  field_message = 11,
  field_name = 12,
  field_offset = 13,
  field_op = 14,
  field_right = 15,
  field_type = 16,
  field_value = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_array] = "array",
  [field_bits] = "bits",
  [field_char] = "char",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_file_number] = "file_number",
  [field_index] = "index",
  [field_left] = "left",
  [field_length] = "length",
  [field_message] = "message",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_op] = "op",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 2},
  [17] = {.index = 33, .length = 3},
  [18] = {.index = 36, .length = 3},
  [19] = {.index = 39, .length = 3},
  [20] = {.index = 42, .length = 3},
  [21] = {.index = 45, .length = 1},
  [22] = {.index = 46, .length = 2},
  [23] = {.index = 48, .length = 4},
  [24] = {.index = 52, .length = 4},
  [25] = {.index = 56, .length = 1},
  [26] = {.index = 57, .length = 2},
  [27] = {.index = 59, .length = 2},
  [28] = {.index = 61, .length = 2},
  [29] = {.index = 63, .length = 3},
  [30] = {.index = 66, .length = 3},
  [31] = {.index = 69, .length = 3},
  [32] = {.index = 72, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_offset, 1},
  [1] =
    {field_message, 1},
  [2] =
    {field_name, 1},
    {field_type, 2},
  [4] =
    {field_name, 1},
    {field_value, 2},
  [6] =
    {field_name, 0},
  [7] =
    {field_length, 2},
    {field_name, 1},
  [9] =
    {field_bits, 2},
    {field_name, 1},
  [11] =
    {field_file_number, 2},
    {field_offset, 1},
  [13] =
    {field_left, 0},
    {field_right, 2},
  [15] =
    {field_alternative, 0},
  [16] =
    {field_left, 1},
    {field_op, 2},
    {field_right, 3},
  [19] =
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [22] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [25] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
  [28] =
    {field_array, 1},
    {field_index, 2},
    {field_name, 3, .inherited = true},
  [31] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [33] =
    {field_file_number, 3},
    {field_length, 2},
    {field_name, 1},
  [36] =
    {field_char, 3},
    {field_name, 1},
    {field_type, 2},
  [39] =
    {field_bits, 2},
    {field_file_number, 3},
    {field_name, 1},
  [42] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [45] =
    {field_condition, 1},
  [46] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [48] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
    {field_type, 4},
  [52] =
    {field_char, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [56] =
    {field_consequence, 2},
  [57] =
    {field_condition, 1},
    {field_consequence, 3},
  [59] =
    {field_alternative, 3},
    {field_condition, 1},
  [61] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [63] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [66] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [69] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [72] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 3,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 3,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 3,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 3,
  [128] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(281);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(196);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == '^') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(189);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(208);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(281);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '^') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(262);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(201);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(263);
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(233);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(232);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(230);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(271);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 47:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 80:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(236);
      END_STATE();
    case 81:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(235);
      END_STATE();
    case 82:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(83);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 83:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 85:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 98:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 142:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 143:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 151:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 152:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 153:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 154:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 163:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      END_STATE();
    case 164:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 165:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 167:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 180:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 186:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 188:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 189:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 190:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 191:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 192:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      END_STATE();
    case 193:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 194:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 195:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 196:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(67);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_put_var_chr_statement_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_put_array_statement_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_put_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_put_d_string_statement_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_put_c_t_statement_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_put_bits_statement_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '>') ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '>') ADVANCE(279);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(283);
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 197},
  [8] = {.lex_state = 197},
  [9] = {.lex_state = 197},
  [10] = {.lex_state = 197},
  [11] = {.lex_state = 197},
  [12] = {.lex_state = 197},
  [13] = {.lex_state = 197},
  [14] = {.lex_state = 197},
  [15] = {.lex_state = 197},
  [16] = {.lex_state = 197},
  [17] = {.lex_state = 197},
  [18] = {.lex_state = 197},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 197},
  [21] = {.lex_state = 197},
  [22] = {.lex_state = 197},
  [23] = {.lex_state = 197},
  [24] = {.lex_state = 197},
  [25] = {.lex_state = 197},
  [26] = {.lex_state = 197},
  [27] = {.lex_state = 197},
  [28] = {.lex_state = 197},
  [29] = {.lex_state = 197},
  [30] = {.lex_state = 197},
  [31] = {.lex_state = 197},
  [32] = {.lex_state = 197},
  [33] = {.lex_state = 197},
  [34] = {.lex_state = 197},
  [35] = {.lex_state = 197},
  [36] = {.lex_state = 197},
  [37] = {.lex_state = 197},
  [38] = {.lex_state = 197},
  [39] = {.lex_state = 197},
  [40] = {.lex_state = 197},
  [41] = {.lex_state = 197},
  [42] = {.lex_state = 197},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 197},
  [45] = {.lex_state = 197},
  [46] = {.lex_state = 197},
  [47] = {.lex_state = 197},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 197},
  [60] = {.lex_state = 197},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 197},
  [72] = {.lex_state = 197},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 197},
  [76] = {.lex_state = 197},
  [77] = {.lex_state = 197},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 197},
  [81] = {.lex_state = 197},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 197},
  [87] = {.lex_state = 197},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 197},
  [93] = {.lex_state = 197},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 197},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 197},
  [100] = {.lex_state = 197},
  [101] = {.lex_state = 197},
  [102] = {.lex_state = 197},
  [103] = {.lex_state = 197},
  [104] = {.lex_state = 197},
  [105] = {.lex_state = 197},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 197},
  [114] = {.lex_state = 197},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 195},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 195},
  [128] = {.lex_state = 197},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_variable_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_version_statement_token1] = ACTIONS(1),
    [aux_sym_math_statement_token1] = ACTIONS(1),
    [aux_sym_get_statement_token1] = ACTIONS(1),
    [aux_sym_set_statement_token1] = ACTIONS(1),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(1),
    [aux_sym_put_array_statement_token1] = ACTIONS(1),
    [aux_sym_put_statement_token1] = ACTIONS(1),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(1),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(1),
    [aux_sym_put_bits_statement_token1] = ACTIONS(1),
    [aux_sym_goto_statement_token1] = ACTIONS(1),
    [aux_sym_goto_statement_token2] = ACTIONS(1),
    [aux_sym_goto_statement_token3] = ACTIONS(1),
    [aux_sym_goto_statement_token4] = ACTIONS(1),
    [aux_sym_goto_statement_token5] = ACTIONS(1),
    [aux_sym_goto_statement_token6] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_elif_statement_token1] = ACTIONS(1),
    [aux_sym_else_statement_token1] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym__binary_op_token1] = ACTIONS(1),
    [aux_sym__binary_op_token2] = ACTIONS(1),
    [aux_sym__binary_op_token3] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym__binary_op_token4] = ACTIONS(1),
    [aux_sym__binary_op_token5] = ACTIONS(1),
    [aux_sym__binary_op_token6] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [aux_sym__binary_op_token7] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [aux_sym__binary_op_token8] = ACTIONS(1),
    [aux_sym__binary_op_token9] = ACTIONS(1),
    [aux_sym__binary_op_token10] = ACTIONS(1),
    [aux_sym__binary_op_token11] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [aux_sym__binary_op_token12] = ACTIONS(1),
    [aux_sym__binary_op_token13] = ACTIONS(1),
    [aux_sym__binary_op_token14] = ACTIONS(1),
    [aux_sym__binary_op_token15] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [aux_sym__binary_op_token16] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [aux_sym__binary_op_token17] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym__binary_op_token18] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym__binary_op_token19] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym__binary_op_token20] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym__binary_op_token21] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym__binary_op_token22] = ACTIONS(1),
    [anon_sym_BANG_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym__binary_op_token23] = ACTIONS(1),
    [aux_sym__binary_op_token24] = ACTIONS(1),
    [aux_sym__binary_op_token25] = ACTIONS(1),
    [aux_sym__binary_op_token26] = ACTIONS(1),
    [aux_sym__binary_op_token27] = ACTIONS(1),
    [aux_sym__binary_op_token28] = ACTIONS(1),
    [aux_sym__binary_op_token29] = ACTIONS(1),
    [aux_sym__binary_op_token30] = ACTIONS(1),
    [aux_sym__binary_op_token31] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [aux_sym_print_statement_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_statement_list] = STATE(124),
    [sym__statement] = STATE(8),
    [sym__statment_end] = STATE(8),
    [sym__empty_statment] = STATE(8),
    [sym_version_statement] = STATE(8),
    [sym_math_statement] = STATE(8),
    [sym_get_statement] = STATE(8),
    [sym_set_statement] = STATE(8),
    [sym_put_var_chr_statement] = STATE(8),
    [sym_put_array_statement] = STATE(8),
    [sym_put_statement] = STATE(8),
    [sym_put_d_string_statement] = STATE(8),
    [sym_put_c_t_statement] = STATE(8),
    [sym_put_bits_statement] = STATE(8),
    [sym__put_statements] = STATE(8),
    [sym_goto_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_print_statement] = STATE(8),
    [aux_sym_statement_list_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_statement_token1] = ACTIONS(11),
    [aux_sym_set_statement_token1] = ACTIONS(13),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(15),
    [aux_sym_put_array_statement_token1] = ACTIONS(17),
    [aux_sym_put_statement_token1] = ACTIONS(19),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(21),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(23),
    [aux_sym_put_bits_statement_token1] = ACTIONS(25),
    [aux_sym_goto_statement_token1] = ACTIONS(27),
    [aux_sym_if_statement_token1] = ACTIONS(29),
    [aux_sym_print_statement_token1] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(33), 1,
      anon_sym_u,
    ACTIONS(35), 1,
      anon_sym_0,
    STATE(67), 1,
      sym__binary_op,
    ACTIONS(37), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym__binary_op_token27,
    ACTIONS(39), 44,
      aux_sym__binary_op_token1,
      aux_sym__binary_op_token2,
      aux_sym__binary_op_token3,
      aux_sym__binary_op_token4,
      aux_sym__binary_op_token5,
      aux_sym__binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym__binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym__binary_op_token8,
      aux_sym__binary_op_token9,
      aux_sym__binary_op_token10,
      aux_sym__binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym__binary_op_token12,
      aux_sym__binary_op_token13,
      aux_sym__binary_op_token14,
      aux_sym__binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym__binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym__binary_op_token17,
      anon_sym_PERCENT,
      aux_sym__binary_op_token18,
      anon_sym_SLASH,
      aux_sym__binary_op_token19,
      anon_sym_LT_LT,
      aux_sym__binary_op_token20,
      anon_sym_GT_GT,
      aux_sym__binary_op_token21,
      aux_sym__binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym__binary_op_token23,
      aux_sym__binary_op_token24,
      aux_sym__binary_op_token25,
      aux_sym__binary_op_token26,
      aux_sym__binary_op_token28,
      aux_sym__binary_op_token29,
      aux_sym__binary_op_token30,
      aux_sym__binary_op_token31,
  [68] = 2,
    ACTIONS(43), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym__binary_op_token27,
    ACTIONS(41), 46,
      anon_sym_u,
      anon_sym_0,
      aux_sym__binary_op_token1,
      aux_sym__binary_op_token2,
      aux_sym__binary_op_token3,
      aux_sym__binary_op_token4,
      aux_sym__binary_op_token5,
      aux_sym__binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym__binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym__binary_op_token8,
      aux_sym__binary_op_token9,
      aux_sym__binary_op_token10,
      aux_sym__binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym__binary_op_token12,
      aux_sym__binary_op_token13,
      aux_sym__binary_op_token14,
      aux_sym__binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym__binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym__binary_op_token17,
      anon_sym_PERCENT,
      aux_sym__binary_op_token18,
      anon_sym_SLASH,
      aux_sym__binary_op_token19,
      anon_sym_LT_LT,
      aux_sym__binary_op_token20,
      anon_sym_GT_GT,
      aux_sym__binary_op_token21,
      aux_sym__binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym__binary_op_token23,
      aux_sym__binary_op_token24,
      aux_sym__binary_op_token25,
      aux_sym__binary_op_token26,
      aux_sym__binary_op_token28,
      aux_sym__binary_op_token29,
      aux_sym__binary_op_token30,
      aux_sym__binary_op_token31,
  [129] = 3,
    ACTIONS(45), 1,
      anon_sym_0,
    ACTIONS(47), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym__binary_op_token27,
    ACTIONS(49), 44,
      aux_sym__binary_op_token1,
      aux_sym__binary_op_token2,
      aux_sym__binary_op_token3,
      aux_sym__binary_op_token4,
      aux_sym__binary_op_token5,
      aux_sym__binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym__binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym__binary_op_token8,
      aux_sym__binary_op_token9,
      aux_sym__binary_op_token10,
      aux_sym__binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym__binary_op_token12,
      aux_sym__binary_op_token13,
      aux_sym__binary_op_token14,
      aux_sym__binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym__binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym__binary_op_token17,
      anon_sym_PERCENT,
      aux_sym__binary_op_token18,
      anon_sym_SLASH,
      aux_sym__binary_op_token19,
      anon_sym_LT_LT,
      aux_sym__binary_op_token20,
      anon_sym_GT_GT,
      aux_sym__binary_op_token21,
      aux_sym__binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym__binary_op_token23,
      aux_sym__binary_op_token24,
      aux_sym__binary_op_token25,
      aux_sym__binary_op_token26,
      aux_sym__binary_op_token28,
      aux_sym__binary_op_token29,
      aux_sym__binary_op_token30,
      aux_sym__binary_op_token31,
  [191] = 2,
    ACTIONS(47), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym__binary_op_token27,
    ACTIONS(49), 44,
      aux_sym__binary_op_token1,
      aux_sym__binary_op_token2,
      aux_sym__binary_op_token3,
      aux_sym__binary_op_token4,
      aux_sym__binary_op_token5,
      aux_sym__binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym__binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym__binary_op_token8,
      aux_sym__binary_op_token9,
      aux_sym__binary_op_token10,
      aux_sym__binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym__binary_op_token12,
      aux_sym__binary_op_token13,
      aux_sym__binary_op_token14,
      aux_sym__binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym__binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym__binary_op_token17,
      anon_sym_PERCENT,
      aux_sym__binary_op_token18,
      anon_sym_SLASH,
      aux_sym__binary_op_token19,
      anon_sym_LT_LT,
      aux_sym__binary_op_token20,
      anon_sym_GT_GT,
      aux_sym__binary_op_token21,
      aux_sym__binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym__binary_op_token23,
      aux_sym__binary_op_token24,
      aux_sym__binary_op_token25,
      aux_sym__binary_op_token26,
      aux_sym__binary_op_token28,
      aux_sym__binary_op_token29,
      aux_sym__binary_op_token30,
      aux_sym__binary_op_token31,
  [250] = 2,
    ACTIONS(51), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym__binary_op_token27,
    ACTIONS(53), 44,
      aux_sym__binary_op_token1,
      aux_sym__binary_op_token2,
      aux_sym__binary_op_token3,
      aux_sym__binary_op_token4,
      aux_sym__binary_op_token5,
      aux_sym__binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym__binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym__binary_op_token8,
      aux_sym__binary_op_token9,
      aux_sym__binary_op_token10,
      aux_sym__binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym__binary_op_token12,
      aux_sym__binary_op_token13,
      aux_sym__binary_op_token14,
      aux_sym__binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym__binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym__binary_op_token17,
      anon_sym_PERCENT,
      aux_sym__binary_op_token18,
      anon_sym_SLASH,
      aux_sym__binary_op_token19,
      anon_sym_LT_LT,
      aux_sym__binary_op_token20,
      anon_sym_GT_GT,
      aux_sym__binary_op_token21,
      aux_sym__binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym__binary_op_token23,
      aux_sym__binary_op_token24,
      aux_sym__binary_op_token25,
      aux_sym__binary_op_token26,
      aux_sym__binary_op_token28,
      aux_sym__binary_op_token29,
      aux_sym__binary_op_token30,
      aux_sym__binary_op_token31,
  [309] = 23,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_set_statement_token1,
    ACTIONS(15), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(27), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(29), 1,
      aux_sym_if_statement_token1,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    ACTIONS(55), 1,
      aux_sym_if_statement_token2,
    ACTIONS(57), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(59), 1,
      aux_sym_else_statement_token1,
    STATE(62), 1,
      sym_statement_list,
    STATE(65), 1,
      aux_sym_if_statement_repeat1,
    STATE(117), 1,
      sym_elif_statement,
    STATE(126), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(8), 18,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_put_var_chr_statement,
      sym_put_array_statement,
      sym_put_statement,
      sym_put_d_string_statement,
      sym_put_c_t_statement,
      sym_put_bits_statement,
      sym__put_statements,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [397] = 18,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_set_statement_token1,
    ACTIONS(15), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(27), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(29), 1,
      aux_sym_if_statement_token1,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(65), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 18,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_put_var_chr_statement,
      sym_put_array_statement,
      sym_put_statement,
      sym_put_d_string_statement,
      sym_put_c_t_statement,
      sym_put_bits_statement,
      sym__put_statements,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [472] = 18,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      aux_sym_version_statement_token1,
    ACTIONS(78), 1,
      aux_sym_math_statement_token1,
    ACTIONS(81), 1,
      aux_sym_get_statement_token1,
    ACTIONS(84), 1,
      aux_sym_set_statement_token1,
    ACTIONS(87), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(90), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(93), 1,
      aux_sym_put_statement_token1,
    ACTIONS(96), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(99), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(102), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(105), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(108), 1,
      aux_sym_if_statement_token1,
    ACTIONS(113), 1,
      aux_sym_print_statement_token1,
    ACTIONS(69), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(111), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 18,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_put_var_chr_statement,
      sym_put_array_statement,
      sym_put_statement,
      sym_put_d_string_statement,
      sym_put_c_t_statement,
      sym_put_bits_statement,
      sym__put_statements,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [547] = 18,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_set_statement_token1,
    ACTIONS(15), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(27), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(29), 1,
      aux_sym_if_statement_token1,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    STATE(115), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(116), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(8), 18,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_put_var_chr_statement,
      sym_put_array_statement,
      sym_put_statement,
      sym_put_d_string_statement,
      sym_put_c_t_statement,
      sym_put_bits_statement,
      sym__put_statements,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [622] = 18,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_set_statement_token1,
    ACTIONS(15), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(27), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(29), 1,
      aux_sym_if_statement_token1,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    ACTIONS(118), 1,
      aux_sym_if_statement_token2,
    STATE(121), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(8), 18,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_put_var_chr_statement,
      sym_put_array_statement,
      sym_put_statement,
      sym_put_d_string_statement,
      sym_put_c_t_statement,
      sym_put_bits_statement,
      sym__put_statements,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [695] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [720] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(126), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [745] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(130), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [770] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(134), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [795] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(138), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [820] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(142), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [845] = 2,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(146), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [870] = 2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(150), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [895] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(154), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [920] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(158), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [945] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(162), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [970] = 2,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(166), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [995] = 2,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(170), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1020] = 2,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(174), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1045] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(178), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1070] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(182), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1095] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(186), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1120] = 2,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(190), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1145] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(194), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1170] = 2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(198), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1195] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(202), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1220] = 2,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(206), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1245] = 2,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1270] = 2,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(214), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1295] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(218), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1320] = 2,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(222), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1345] = 2,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(226), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1370] = 2,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(230), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1395] = 2,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(234), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1420] = 2,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(238), 18,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_put_var_chr_statement_token1,
      aux_sym_put_array_statement_token1,
      aux_sym_put_statement_token1,
      aux_sym_put_d_string_statement_token1,
      aux_sym_put_c_t_statement_token1,
      aux_sym_put_bits_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [1445] = 2,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1462] = 6,
    ACTIONS(242), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statment_end,
    STATE(56), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(64), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1484] = 4,
    ACTIONS(244), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(246), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [1502] = 4,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(46), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(248), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(252), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1519] = 4,
    ACTIONS(256), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(254), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(252), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1536] = 4,
    ACTIONS(260), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(262), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1553] = 5,
    ACTIONS(267), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym__statment_end,
    STATE(100), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1572] = 5,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statment_end,
    STATE(99), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1591] = 5,
    ACTIONS(271), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statment_end,
    STATE(93), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1610] = 5,
    ACTIONS(273), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statment_end,
    STATE(87), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1629] = 5,
    ACTIONS(275), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statment_end,
    STATE(72), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1648] = 5,
    ACTIONS(277), 1,
      anon_sym_LF,
    STATE(33), 1,
      sym__statment_end,
    STATE(73), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1667] = 5,
    ACTIONS(279), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statment_end,
    STATE(44), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1686] = 5,
    ACTIONS(281), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym__statment_end,
    STATE(75), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1705] = 5,
    ACTIONS(288), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(64), 1,
      sym_variable,
    ACTIONS(286), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(283), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1724] = 4,
    STATE(45), 1,
      sym_binary_comparison,
    STATE(76), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(290), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1740] = 4,
    STATE(45), 1,
      sym_binary_comparison,
    STATE(71), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(290), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1756] = 2,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(292), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1768] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(258), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1780] = 3,
    STATE(60), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(290), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1793] = 6,
    ACTIONS(296), 1,
      aux_sym_if_statement_token2,
    ACTIONS(298), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(300), 1,
      aux_sym_else_statement_token1,
    STATE(63), 1,
      aux_sym_if_statement_repeat1,
    STATE(117), 1,
      sym_elif_statement,
    STATE(123), 1,
      sym_else_statement,
  [1812] = 6,
    ACTIONS(298), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(300), 1,
      aux_sym_else_statement_token1,
    ACTIONS(302), 1,
      aux_sym_if_statement_token2,
    STATE(69), 1,
      aux_sym_if_statement_repeat1,
    STATE(117), 1,
      sym_elif_statement,
    STATE(120), 1,
      sym_else_statement,
  [1831] = 2,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(304), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [1842] = 6,
    ACTIONS(298), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(300), 1,
      aux_sym_else_statement_token1,
    ACTIONS(308), 1,
      aux_sym_if_statement_token2,
    STATE(69), 1,
      aux_sym_if_statement_repeat1,
    STATE(117), 1,
      sym_elif_statement,
    STATE(122), 1,
      sym_else_statement,
  [1861] = 2,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [1872] = 2,
    STATE(59), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1882] = 3,
    STATE(43), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(64), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1894] = 4,
    ACTIONS(312), 1,
      aux_sym_elif_statement_token1,
    STATE(69), 1,
      aux_sym_if_statement_repeat1,
    STATE(117), 1,
      sym_elif_statement,
    ACTIONS(310), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [1908] = 2,
    STATE(52), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1917] = 3,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1928] = 3,
    ACTIONS(317), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1939] = 3,
    ACTIONS(319), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1950] = 2,
    STATE(95), 1,
      sym_variable,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1959] = 3,
    ACTIONS(321), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1970] = 3,
    ACTIONS(323), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1981] = 3,
    ACTIONS(325), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1992] = 2,
    STATE(55), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2001] = 2,
    STATE(51), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2010] = 3,
    ACTIONS(327), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2021] = 3,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2032] = 2,
    STATE(94), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2041] = 2,
    STATE(125), 1,
      sym_variable,
    ACTIONS(333), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2050] = 2,
    STATE(107), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2059] = 2,
    STATE(53), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2068] = 3,
    ACTIONS(335), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2079] = 3,
    ACTIONS(337), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2090] = 2,
    STATE(68), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2099] = 2,
    STATE(79), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2108] = 2,
    STATE(103), 1,
      sym_variable,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2117] = 2,
    STATE(49), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2126] = 3,
    ACTIONS(339), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2137] = 3,
    ACTIONS(341), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2148] = 2,
    STATE(90), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2157] = 3,
    ACTIONS(343), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2168] = 2,
    STATE(91), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2177] = 2,
    STATE(89), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2186] = 2,
    STATE(86), 1,
      sym_variable,
    ACTIONS(265), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2195] = 3,
    ACTIONS(345), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2206] = 3,
    ACTIONS(347), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2217] = 3,
    ACTIONS(349), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2228] = 3,
    ACTIONS(351), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2239] = 3,
    ACTIONS(353), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2250] = 3,
    ACTIONS(355), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2261] = 3,
    ACTIONS(357), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2272] = 2,
    STATE(88), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2281] = 2,
    STATE(50), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2290] = 2,
    STATE(54), 1,
      sym_variable,
    ACTIONS(240), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2299] = 2,
    STATE(78), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2308] = 2,
    STATE(84), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2317] = 2,
    STATE(70), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2326] = 2,
    STATE(85), 1,
      sym_variable,
    ACTIONS(331), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2335] = 3,
    ACTIONS(359), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2346] = 3,
    ACTIONS(361), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [2357] = 1,
    ACTIONS(363), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [2363] = 1,
    ACTIONS(365), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2369] = 1,
    ACTIONS(367), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [2375] = 1,
    ACTIONS(43), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2381] = 1,
    ACTIONS(369), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2387] = 1,
    ACTIONS(371), 1,
      aux_sym_if_statement_token2,
  [2391] = 1,
    ACTIONS(373), 1,
      aux_sym_if_statement_token2,
  [2395] = 1,
    ACTIONS(375), 1,
      aux_sym_if_statement_token2,
  [2399] = 1,
    ACTIONS(377), 1,
      aux_sym_if_statement_token2,
  [2403] = 1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [2407] = 1,
    ACTIONS(381), 1,
      sym_type,
  [2411] = 1,
    ACTIONS(383), 1,
      aux_sym_if_statement_token2,
  [2415] = 1,
    ACTIONS(41), 1,
      sym_type,
  [2419] = 1,
    ACTIONS(385), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 309,
  [SMALL_STATE(8)] = 397,
  [SMALL_STATE(9)] = 472,
  [SMALL_STATE(10)] = 547,
  [SMALL_STATE(11)] = 622,
  [SMALL_STATE(12)] = 695,
  [SMALL_STATE(13)] = 720,
  [SMALL_STATE(14)] = 745,
  [SMALL_STATE(15)] = 770,
  [SMALL_STATE(16)] = 795,
  [SMALL_STATE(17)] = 820,
  [SMALL_STATE(18)] = 845,
  [SMALL_STATE(19)] = 870,
  [SMALL_STATE(20)] = 895,
  [SMALL_STATE(21)] = 920,
  [SMALL_STATE(22)] = 945,
  [SMALL_STATE(23)] = 970,
  [SMALL_STATE(24)] = 995,
  [SMALL_STATE(25)] = 1020,
  [SMALL_STATE(26)] = 1045,
  [SMALL_STATE(27)] = 1070,
  [SMALL_STATE(28)] = 1095,
  [SMALL_STATE(29)] = 1120,
  [SMALL_STATE(30)] = 1145,
  [SMALL_STATE(31)] = 1170,
  [SMALL_STATE(32)] = 1195,
  [SMALL_STATE(33)] = 1220,
  [SMALL_STATE(34)] = 1245,
  [SMALL_STATE(35)] = 1270,
  [SMALL_STATE(36)] = 1295,
  [SMALL_STATE(37)] = 1320,
  [SMALL_STATE(38)] = 1345,
  [SMALL_STATE(39)] = 1370,
  [SMALL_STATE(40)] = 1395,
  [SMALL_STATE(41)] = 1420,
  [SMALL_STATE(42)] = 1445,
  [SMALL_STATE(43)] = 1462,
  [SMALL_STATE(44)] = 1484,
  [SMALL_STATE(45)] = 1502,
  [SMALL_STATE(46)] = 1519,
  [SMALL_STATE(47)] = 1536,
  [SMALL_STATE(48)] = 1553,
  [SMALL_STATE(49)] = 1572,
  [SMALL_STATE(50)] = 1591,
  [SMALL_STATE(51)] = 1610,
  [SMALL_STATE(52)] = 1629,
  [SMALL_STATE(53)] = 1648,
  [SMALL_STATE(54)] = 1667,
  [SMALL_STATE(55)] = 1686,
  [SMALL_STATE(56)] = 1705,
  [SMALL_STATE(57)] = 1724,
  [SMALL_STATE(58)] = 1740,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1768,
  [SMALL_STATE(61)] = 1780,
  [SMALL_STATE(62)] = 1793,
  [SMALL_STATE(63)] = 1812,
  [SMALL_STATE(64)] = 1831,
  [SMALL_STATE(65)] = 1842,
  [SMALL_STATE(66)] = 1861,
  [SMALL_STATE(67)] = 1872,
  [SMALL_STATE(68)] = 1882,
  [SMALL_STATE(69)] = 1894,
  [SMALL_STATE(70)] = 1908,
  [SMALL_STATE(71)] = 1917,
  [SMALL_STATE(72)] = 1928,
  [SMALL_STATE(73)] = 1939,
  [SMALL_STATE(74)] = 1950,
  [SMALL_STATE(75)] = 1959,
  [SMALL_STATE(76)] = 1970,
  [SMALL_STATE(77)] = 1981,
  [SMALL_STATE(78)] = 1992,
  [SMALL_STATE(79)] = 2001,
  [SMALL_STATE(80)] = 2010,
  [SMALL_STATE(81)] = 2021,
  [SMALL_STATE(82)] = 2032,
  [SMALL_STATE(83)] = 2041,
  [SMALL_STATE(84)] = 2050,
  [SMALL_STATE(85)] = 2059,
  [SMALL_STATE(86)] = 2068,
  [SMALL_STATE(87)] = 2079,
  [SMALL_STATE(88)] = 2090,
  [SMALL_STATE(89)] = 2099,
  [SMALL_STATE(90)] = 2108,
  [SMALL_STATE(91)] = 2117,
  [SMALL_STATE(92)] = 2126,
  [SMALL_STATE(93)] = 2137,
  [SMALL_STATE(94)] = 2148,
  [SMALL_STATE(95)] = 2157,
  [SMALL_STATE(96)] = 2168,
  [SMALL_STATE(97)] = 2177,
  [SMALL_STATE(98)] = 2186,
  [SMALL_STATE(99)] = 2195,
  [SMALL_STATE(100)] = 2206,
  [SMALL_STATE(101)] = 2217,
  [SMALL_STATE(102)] = 2228,
  [SMALL_STATE(103)] = 2239,
  [SMALL_STATE(104)] = 2250,
  [SMALL_STATE(105)] = 2261,
  [SMALL_STATE(106)] = 2272,
  [SMALL_STATE(107)] = 2281,
  [SMALL_STATE(108)] = 2290,
  [SMALL_STATE(109)] = 2299,
  [SMALL_STATE(110)] = 2308,
  [SMALL_STATE(111)] = 2317,
  [SMALL_STATE(112)] = 2326,
  [SMALL_STATE(113)] = 2335,
  [SMALL_STATE(114)] = 2346,
  [SMALL_STATE(115)] = 2357,
  [SMALL_STATE(116)] = 2363,
  [SMALL_STATE(117)] = 2369,
  [SMALL_STATE(118)] = 2375,
  [SMALL_STATE(119)] = 2381,
  [SMALL_STATE(120)] = 2387,
  [SMALL_STATE(121)] = 2391,
  [SMALL_STATE(122)] = 2395,
  [SMALL_STATE(123)] = 2399,
  [SMALL_STATE(124)] = 2403,
  [SMALL_STATE(125)] = 2407,
  [SMALL_STATE(126)] = 2411,
  [SMALL_STATE(127)] = 2415,
  [SMALL_STATE(128)] = 2419,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(128),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(74),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(82),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(83),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(96),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(97),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(106),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(111),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(112),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(110),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(109),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(108),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(57),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(98),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 21),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 5, .production_id = 12),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 5, .production_id = 12),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 8),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 8),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 23),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 23),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 21),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 21),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 20),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 20),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 5, .production_id = 19),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 5, .production_id = 19),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 18),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 18),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 17),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 17),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_array_statement, 5, .production_id = 15),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_array_statement, 5, .production_id = 15),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 14),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 14),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 13),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 13),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 12),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 12),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 11),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 11),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 32),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 32),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 24),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 24),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 4, .production_id = 7),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 4, .production_id = 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 26),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 26),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 27),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 27),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 31),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 31),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 28),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 28),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 29),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 29),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 30),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 30),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 4, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 4, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(61),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 16), SHIFT_REPEAT(66),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 16),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 16),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 9),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 9),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 22),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 22), SHIFT_REPEAT(58),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 26),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 10),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 25),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [379] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_quickbms(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
