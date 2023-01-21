#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 175
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 42

enum {
  aux_sym_variable_token1 = 1,
  aux_sym_variable_token2 = 2,
  aux_sym_variable_token3 = 3,
  sym_comment = 4,
  anon_sym_SEMI = 5,
  anon_sym_LF = 6,
  aux_sym_version_statement_token1 = 7,
  aux_sym_math_statement_token1 = 8,
  aux_sym_get_statement_token1 = 9,
  aux_sym_set_statement_token1 = 10,
  aux_sym_put_var_chr_statement_token1 = 11,
  aux_sym_put_array_statement_token1 = 12,
  aux_sym_put_statement_token1 = 13,
  aux_sym_put_d_string_statement_token1 = 14,
  aux_sym_put_c_t_statement_token1 = 15,
  aux_sym_put_bits_statement_token1 = 16,
  aux_sym_goto_statement_token1 = 17,
  aux_sym_goto_statement_token2 = 18,
  aux_sym_goto_statement_token3 = 19,
  aux_sym_goto_statement_token4 = 20,
  aux_sym_goto_statement_token5 = 21,
  aux_sym_goto_statement_token6 = 22,
  aux_sym_if_statement_token1 = 23,
  aux_sym_if_statement_token2 = 24,
  aux_sym_elif_statement_token1 = 25,
  aux_sym_else_statement_token1 = 26,
  anon_sym_u = 27,
  anon_sym_0 = 28,
  anon_sym_LT = 29,
  aux_sym__binary_op_token1 = 30,
  aux_sym__binary_op_token2 = 31,
  aux_sym__binary_op_token3 = 32,
  anon_sym_GT = 33,
  aux_sym__binary_op_token4 = 34,
  aux_sym__binary_op_token5 = 35,
  aux_sym__binary_op_token6 = 36,
  anon_sym_LT_GT = 37,
  anon_sym_BANG_EQ = 38,
  anon_sym_BANG_EQ_EQ = 39,
  aux_sym__binary_op_token7 = 40,
  anon_sym_EQ = 41,
  anon_sym_EQ_EQ = 42,
  anon_sym_EQ_EQ_EQ = 43,
  aux_sym__binary_op_token8 = 44,
  aux_sym__binary_op_token9 = 45,
  aux_sym__binary_op_token10 = 46,
  aux_sym__binary_op_token11 = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_AMP = 50,
  anon_sym_AMP_AMP = 51,
  aux_sym__binary_op_token12 = 52,
  aux_sym__binary_op_token13 = 53,
  aux_sym__binary_op_token14 = 54,
  aux_sym__binary_op_token15 = 55,
  anon_sym_CARET = 56,
  anon_sym_CARET_CARET = 57,
  aux_sym__binary_op_token16 = 58,
  anon_sym_PIPE = 59,
  anon_sym_PIPE_PIPE = 60,
  aux_sym__binary_op_token17 = 61,
  anon_sym_PERCENT = 62,
  aux_sym__binary_op_token18 = 63,
  anon_sym_SLASH = 64,
  aux_sym__binary_op_token19 = 65,
  anon_sym_LT_LT = 66,
  aux_sym__binary_op_token20 = 67,
  anon_sym_GT_GT = 68,
  aux_sym__binary_op_token21 = 69,
  anon_sym_BANG = 70,
  aux_sym__binary_op_token22 = 71,
  anon_sym_BANG_BANG = 72,
  anon_sym_TILDE = 73,
  aux_sym__binary_op_token23 = 74,
  aux_sym__binary_op_token24 = 75,
  aux_sym__binary_op_token25 = 76,
  aux_sym__binary_op_token26 = 77,
  aux_sym__binary_op_token27 = 78,
  aux_sym__binary_op_token28 = 79,
  aux_sym__binary_op_token29 = 80,
  aux_sym__binary_op_token30 = 81,
  aux_sym__binary_op_token31 = 82,
  anon_sym_and = 83,
  anon_sym_or = 84,
  aux_sym_next_statement_token1 = 85,
  aux_sym_prev_statement_token1 = 86,
  aux_sym_for_statement_token1 = 87,
  aux_sym_label_statement_token1 = 88,
  aux_sym_break_statement_token1 = 89,
  aux_sym_continue_statement_token1 = 90,
  aux_sym_print_statement_token1 = 91,
  sym_statement_list = 92,
  sym_variable = 93,
  sym__statement = 94,
  sym__statement_end = 95,
  sym__empty_statement = 96,
  sym_version_statement = 97,
  sym_math_statement = 98,
  sym_get_statement = 99,
  sym_set_statement = 100,
  sym_put_var_chr_statement = 101,
  sym_put_array_statement = 102,
  sym_put_statement = 103,
  sym_put_d_string_statement = 104,
  sym_put_c_t_statement = 105,
  sym_put_bits_statement = 106,
  sym__put_statements = 107,
  sym_goto_statement = 108,
  sym_if_statement = 109,
  sym_elif_statement = 110,
  sym_else_statement = 111,
  sym__comparison_value = 112,
  sym_binary_comparison = 113,
  sym__binary_op = 114,
  sym_binary_expression = 115,
  sym_op_value = 116,
  sym_next_statement = 117,
  sym_prev_statement = 118,
  sym_for_statement = 119,
  sym_label_statement = 120,
  sym_break_statement = 121,
  sym_continue_statement = 122,
  sym_print_statement = 123,
  aux_sym_statement_list_repeat1 = 124,
  aux_sym_put_array_statement_repeat1 = 125,
  aux_sym_if_statement_repeat1 = 126,
  aux_sym_binary_expression_repeat1 = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_variable_token2] = "variable_token2",
  [aux_sym_variable_token3] = "variable_token3",
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
  [aux_sym_next_statement_token1] = "next",
  [aux_sym_prev_statement_token1] = "prev",
  [aux_sym_for_statement_token1] = "for",
  [aux_sym_label_statement_token1] = "label",
  [aux_sym_break_statement_token1] = "break",
  [aux_sym_continue_statement_token1] = "continue",
  [aux_sym_print_statement_token1] = "print",
  [sym_statement_list] = "statement_list",
  [sym_variable] = "variable",
  [sym__statement] = "_statement",
  [sym__statement_end] = "_statement_end",
  [sym__empty_statement] = "_empty_statement",
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
  [sym_op_value] = "op_value",
  [sym_next_statement] = "next_statement",
  [sym_prev_statement] = "prev_statement",
  [sym_for_statement] = "for_statement",
  [sym_label_statement] = "label_statement",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
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
  [aux_sym_next_statement_token1] = aux_sym_next_statement_token1,
  [aux_sym_prev_statement_token1] = aux_sym_prev_statement_token1,
  [aux_sym_for_statement_token1] = aux_sym_for_statement_token1,
  [aux_sym_label_statement_token1] = aux_sym_label_statement_token1,
  [aux_sym_break_statement_token1] = aux_sym_break_statement_token1,
  [aux_sym_continue_statement_token1] = aux_sym_continue_statement_token1,
  [aux_sym_print_statement_token1] = aux_sym_print_statement_token1,
  [sym_statement_list] = sym_statement_list,
  [sym_variable] = sym_variable,
  [sym__statement] = sym__statement,
  [sym__statement_end] = sym__statement_end,
  [sym__empty_statement] = sym__empty_statement,
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
  [sym_op_value] = sym_op_value,
  [sym_next_statement] = sym_next_statement,
  [sym_prev_statement] = sym_prev_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_label_statement] = sym_label_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
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
  [aux_sym_next_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prev_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_break_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_continue_statement_token1] = {
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
  [sym__statement_end] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_statement] = {
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
  [sym_op_value] = {
    .visible = true,
    .named = true,
  },
  [sym_next_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_prev_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_label_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
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
  field_body = 4,
  field_char = 5,
  field_condition = 6,
  field_consequence = 7,
  field_file_number = 8,
  field_index = 9,
  field_initializer = 10,
  field_left = 11,
  field_length = 12,
  field_message = 13,
  field_name = 14,
  field_offset = 15,
  field_op = 16,
  field_right = 17,
  field_type = 18,
  field_update = 19,
  field_value = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_array] = "array",
  [field_bits] = "bits",
  [field_body] = "body",
  [field_char] = "char",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_file_number] = "file_number",
  [field_index] = "index",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_length] = "length",
  [field_message] = "message",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_op] = "op",
  [field_right] = "right",
  [field_type] = "type",
  [field_update] = "update",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 3},
  [21] = {.index = 40, .length = 3},
  [22] = {.index = 43, .length = 3},
  [23] = {.index = 46, .length = 3},
  [24] = {.index = 49, .length = 1},
  [25] = {.index = 50, .length = 2},
  [26] = {.index = 52, .length = 2},
  [27] = {.index = 54, .length = 2},
  [28] = {.index = 56, .length = 4},
  [29] = {.index = 60, .length = 4},
  [30] = {.index = 64, .length = 1},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 2},
  [33] = {.index = 69, .length = 2},
  [34] = {.index = 71, .length = 3},
  [35] = {.index = 74, .length = 3},
  [36] = {.index = 77, .length = 2},
  [37] = {.index = 79, .length = 3},
  [38] = {.index = 82, .length = 3},
  [39] = {.index = 85, .length = 3},
  [40] = {.index = 88, .length = 4},
  [41] = {.index = 92, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_offset, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_message, 1},
  [3] =
    {field_name, 1},
    {field_type, 2},
  [5] =
    {field_name, 1},
    {field_value, 2},
  [7] =
    {field_name, 0},
  [8] =
    {field_length, 2},
    {field_name, 1},
  [10] =
    {field_bits, 2},
    {field_name, 1},
  [12] =
    {field_file_number, 2},
    {field_offset, 1},
  [14] =
    {field_left, 0},
    {field_right, 2},
  [16] =
    {field_alternative, 0},
  [17] =
    {field_op, 0},
    {field_value, 1},
  [19] =
    {field_body, 2},
  [20] =
    {field_left, 1},
    {field_op, 2},
    {field_right, 3},
  [23] =
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [26] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [29] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
  [32] =
    {field_array, 1},
    {field_index, 2},
    {field_name, 3, .inherited = true},
  [35] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [37] =
    {field_file_number, 3},
    {field_length, 2},
    {field_name, 1},
  [40] =
    {field_char, 3},
    {field_name, 1},
    {field_type, 2},
  [43] =
    {field_bits, 2},
    {field_file_number, 3},
    {field_name, 1},
  [46] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [49] =
    {field_condition, 1},
  [50] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [52] =
    {field_body, 3},
    {field_name, 1},
  [54] =
    {field_initializer, 2},
    {field_name, 1},
  [56] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
    {field_type, 4},
  [60] =
    {field_char, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [64] =
    {field_consequence, 2},
  [65] =
    {field_condition, 1},
    {field_consequence, 3},
  [67] =
    {field_alternative, 3},
    {field_condition, 1},
  [69] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [71] =
    {field_body, 4},
    {field_initializer, 2},
    {field_name, 1},
  [74] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [77] =
    {field_name, 1},
    {field_update, 2},
  [79] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [82] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [85] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [88] =
    {field_body, 5},
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [92] =
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
  [42] = 42,
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
  [65] = 3,
  [66] = 66,
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
  [97] = 3,
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
  [118] = 118,
  [119] = 119,
  [120] = 116,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 3,
  [167] = 96,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(224);
      if (lookahead == '!') ADVANCE(306);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '/') ADVANCE(300);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(269);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == '^') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead == '~') ADVANCE(309);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(104);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(306);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '/') ADVANCE(300);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(269);
      if (lookahead == '^') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead == '~') ADVANCE(309);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(183);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(287);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(227);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(238);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(237);
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
      if (lookahead == 'D') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(258);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(257);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(254);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(256);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(296);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 52:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 91:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 92:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 93:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(301);
      END_STATE();
    case 94:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 110:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(152);
      END_STATE();
    case 111:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(152);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 113:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 123:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 129:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 144:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 157:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 158:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 159:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 160:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 161:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 162:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 163:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 170:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 171:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 172:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 212:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 213:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 214:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 215:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(322);
      END_STATE();
    case 216:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 217:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 218:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 219:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 220:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 221:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 223:
      if (eof) ADVANCE(224);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(165);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(148);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(223)
      END_STATE();
    case 224:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_put_var_chr_statement_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_put_array_statement_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_put_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(109);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(200);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_put_d_string_statement_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_put_c_t_statement_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_put_bits_statement_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '>') ADVANCE(273);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '>') ADVANCE(304);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(308);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_next_statement_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_prev_statement_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_label_statement_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_break_statement_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_continue_statement_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 223},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 223},
  [8] = {.lex_state = 223},
  [9] = {.lex_state = 223},
  [10] = {.lex_state = 223},
  [11] = {.lex_state = 223},
  [12] = {.lex_state = 223},
  [13] = {.lex_state = 223},
  [14] = {.lex_state = 223},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 223},
  [17] = {.lex_state = 223},
  [18] = {.lex_state = 223},
  [19] = {.lex_state = 223},
  [20] = {.lex_state = 223},
  [21] = {.lex_state = 223},
  [22] = {.lex_state = 223},
  [23] = {.lex_state = 223},
  [24] = {.lex_state = 223},
  [25] = {.lex_state = 223},
  [26] = {.lex_state = 223},
  [27] = {.lex_state = 223},
  [28] = {.lex_state = 223},
  [29] = {.lex_state = 223},
  [30] = {.lex_state = 223},
  [31] = {.lex_state = 223},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 223},
  [35] = {.lex_state = 223},
  [36] = {.lex_state = 223},
  [37] = {.lex_state = 223},
  [38] = {.lex_state = 223},
  [39] = {.lex_state = 223},
  [40] = {.lex_state = 223},
  [41] = {.lex_state = 223},
  [42] = {.lex_state = 223},
  [43] = {.lex_state = 223},
  [44] = {.lex_state = 223},
  [45] = {.lex_state = 223},
  [46] = {.lex_state = 223},
  [47] = {.lex_state = 223},
  [48] = {.lex_state = 223},
  [49] = {.lex_state = 223},
  [50] = {.lex_state = 223},
  [51] = {.lex_state = 223},
  [52] = {.lex_state = 223},
  [53] = {.lex_state = 223},
  [54] = {.lex_state = 223},
  [55] = {.lex_state = 223},
  [56] = {.lex_state = 223},
  [57] = {.lex_state = 223},
  [58] = {.lex_state = 223},
  [59] = {.lex_state = 223},
  [60] = {.lex_state = 223},
  [61] = {.lex_state = 223},
  [62] = {.lex_state = 223},
  [63] = {.lex_state = 223},
  [64] = {.lex_state = 223},
  [65] = {.lex_state = 223},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 223},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 223},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 223},
  [81] = {.lex_state = 223},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 223},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 223},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 223},
  [104] = {.lex_state = 223},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 223},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 223},
  [112] = {.lex_state = 223},
  [113] = {.lex_state = 223},
  [114] = {.lex_state = 223},
  [115] = {.lex_state = 223},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 223},
  [118] = {.lex_state = 223},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 223},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 223},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 223},
  [130] = {.lex_state = 223},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 223},
  [133] = {.lex_state = 223},
  [134] = {.lex_state = 223},
  [135] = {.lex_state = 223},
  [136] = {.lex_state = 223},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 223},
  [139] = {.lex_state = 223},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 223},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 223},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 223},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 223},
  [153] = {.lex_state = 223},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 223},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 223},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 223},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 223},
  [174] = {.lex_state = 0},
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
    [aux_sym_next_statement_token1] = ACTIONS(1),
    [aux_sym_prev_statement_token1] = ACTIONS(1),
    [aux_sym_for_statement_token1] = ACTIONS(1),
    [aux_sym_label_statement_token1] = ACTIONS(1),
    [aux_sym_break_statement_token1] = ACTIONS(1),
    [aux_sym_continue_statement_token1] = ACTIONS(1),
    [aux_sym_print_statement_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_statement_list] = STATE(168),
    [sym__statement] = STATE(8),
    [sym__statement_end] = STATE(8),
    [sym__empty_statement] = STATE(8),
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
    [sym_for_statement] = STATE(8),
    [sym_label_statement] = STATE(8),
    [sym_break_statement] = STATE(8),
    [sym_continue_statement] = STATE(8),
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
    [aux_sym_for_statement_token1] = ACTIONS(31),
    [aux_sym_label_statement_token1] = ACTIONS(33),
    [aux_sym_break_statement_token1] = ACTIONS(35),
    [aux_sym_continue_statement_token1] = ACTIONS(37),
    [aux_sym_print_statement_token1] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(41), 1,
      anon_sym_u,
    ACTIONS(43), 1,
      anon_sym_0,
    STATE(101), 1,
      sym__binary_op,
    ACTIONS(45), 10,
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
    ACTIONS(47), 44,
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
    ACTIONS(49), 46,
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
    ACTIONS(53), 1,
      anon_sym_0,
    ACTIONS(55), 10,
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
    ACTIONS(57), 44,
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
    ACTIONS(59), 10,
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
    ACTIONS(61), 44,
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
    ACTIONS(55), 10,
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
    ACTIONS(57), 44,
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
  [309] = 27,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    ACTIONS(63), 1,
      aux_sym_if_statement_token2,
    ACTIONS(65), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(67), 1,
      aux_sym_else_statement_token1,
    STATE(98), 1,
      aux_sym_if_statement_repeat1,
    STATE(99), 1,
      sym_statement_list,
    STATE(165), 1,
      sym_elif_statement,
    STATE(172), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(8), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [413] = 22,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(73), 5,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(9), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [506] = 22,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      aux_sym_version_statement_token1,
    ACTIONS(86), 1,
      aux_sym_math_statement_token1,
    ACTIONS(89), 1,
      aux_sym_get_statement_token1,
    ACTIONS(92), 1,
      aux_sym_set_statement_token1,
    ACTIONS(95), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(98), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(101), 1,
      aux_sym_put_statement_token1,
    ACTIONS(104), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(107), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(110), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(113), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(116), 1,
      aux_sym_if_statement_token1,
    ACTIONS(121), 1,
      aux_sym_for_statement_token1,
    ACTIONS(124), 1,
      aux_sym_label_statement_token1,
    ACTIONS(127), 1,
      aux_sym_break_statement_token1,
    ACTIONS(130), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(133), 1,
      aux_sym_print_statement_token1,
    ACTIONS(77), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(119), 5,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(9), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [599] = 24,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    ACTIONS(136), 1,
      aux_sym_next_statement_token1,
    ACTIONS(138), 1,
      aux_sym_prev_statement_token1,
    STATE(159), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(32), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(8), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [695] = 24,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    ACTIONS(136), 1,
      aux_sym_next_statement_token1,
    ACTIONS(138), 1,
      aux_sym_prev_statement_token1,
    STATE(140), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(41), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(8), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [791] = 24,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    ACTIONS(136), 1,
      aux_sym_next_statement_token1,
    ACTIONS(138), 1,
      aux_sym_prev_statement_token1,
    STATE(106), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(23), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(8), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [887] = 24,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    ACTIONS(136), 1,
      aux_sym_next_statement_token1,
    ACTIONS(138), 1,
      aux_sym_prev_statement_token1,
    STATE(119), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(60), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(8), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [983] = 22,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    STATE(162), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(140), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(8), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [1074] = 22,
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
      aux_sym_for_statement_token1,
    ACTIONS(33), 1,
      aux_sym_label_statement_token1,
    ACTIONS(35), 1,
      aux_sym_break_statement_token1,
    ACTIONS(37), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(39), 1,
      aux_sym_print_statement_token1,
    ACTIONS(142), 1,
      aux_sym_if_statement_token2,
    STATE(170), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(8), 22,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
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
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [1163] = 2,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(146), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1194] = 2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(150), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1225] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(154), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1256] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(158), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1287] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(162), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1318] = 2,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(166), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1349] = 2,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(170), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1380] = 2,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(174), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1411] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(178), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1442] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(182), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1473] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(186), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1504] = 2,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(190), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1535] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(194), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1566] = 2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(198), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1597] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(202), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1628] = 2,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(206), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1659] = 2,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1690] = 2,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(214), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1721] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(218), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1752] = 2,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(222), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1783] = 2,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(226), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1814] = 2,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(230), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1845] = 2,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(234), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1876] = 2,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(238), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1907] = 2,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(242), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1938] = 2,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(246), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [1969] = 2,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(250), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2000] = 2,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(254), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2031] = 2,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(258), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2062] = 2,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(262), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2093] = 2,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(266), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2124] = 2,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2155] = 2,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(274), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2186] = 2,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(278), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2217] = 2,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(282), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2248] = 2,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(286), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2279] = 2,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(290), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2310] = 2,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(294), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2341] = 2,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(298), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2372] = 2,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(302), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2403] = 2,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(306), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2434] = 2,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(310), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2465] = 2,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(314), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2496] = 2,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(318), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2527] = 2,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(322), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2558] = 2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(326), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2589] = 2,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(330), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2620] = 2,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(334), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2651] = 2,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(338), 24,
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
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
      aux_sym_for_statement_token1,
      aux_sym_label_statement_token1,
      aux_sym_break_statement_token1,
      aux_sym_continue_statement_token1,
      aux_sym_print_statement_token1,
  [2682] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 11,
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
  [2699] = 6,
    ACTIONS(342), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statement_end,
    STATE(69), 1,
      sym_op_value,
    STATE(120), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2721] = 6,
    ACTIONS(344), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statement_end,
    STATE(116), 1,
      sym_variable,
    STATE(144), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2743] = 4,
    ACTIONS(346), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(348), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [2761] = 6,
    ACTIONS(350), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statement_end,
    STATE(109), 1,
      sym_op_value,
    STATE(116), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2783] = 6,
    ACTIONS(352), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym__statement_end,
    STATE(116), 1,
      sym_variable,
    STATE(146), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2805] = 6,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym__statement_end,
    STATE(84), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(94), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2827] = 5,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__statement_end,
    STATE(129), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2846] = 5,
    ACTIONS(362), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statement_end,
    STATE(67), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2865] = 5,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statement_end,
    STATE(139), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2884] = 5,
    ACTIONS(366), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statement_end,
    STATE(114), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2903] = 4,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(76), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(368), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(372), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [2920] = 5,
    ACTIONS(375), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym__statement_end,
    STATE(115), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2939] = 5,
    ACTIONS(377), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym__statement_end,
    STATE(104), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2958] = 5,
    ACTIONS(379), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statement_end,
    STATE(66), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [2977] = 4,
    ACTIONS(383), 1,
      anon_sym_LF,
    STATE(76), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(381), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(385), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [2994] = 4,
    ACTIONS(389), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(387), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(385), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3011] = 5,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym__statement_end,
    STATE(118), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3030] = 5,
    ACTIONS(393), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym__statement_end,
    STATE(134), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3049] = 5,
    ACTIONS(400), 1,
      anon_sym_LF,
    STATE(84), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(94), 1,
      sym_variable,
    ACTIONS(398), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3068] = 5,
    ACTIONS(402), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__statement_end,
    STATE(68), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3087] = 5,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statement_end,
    STATE(112), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3106] = 5,
    ACTIONS(406), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym__statement_end,
    STATE(70), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3125] = 5,
    ACTIONS(408), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym__statement_end,
    STATE(124), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3144] = 2,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(410), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3156] = 4,
    STATE(81), 1,
      sym_binary_comparison,
    STATE(141), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(414), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3172] = 2,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(368), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3184] = 4,
    STATE(81), 1,
      sym_binary_comparison,
    STATE(130), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(414), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3200] = 3,
    STATE(91), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(414), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3213] = 2,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(416), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [3224] = 6,
    ACTIONS(420), 1,
      aux_sym_if_statement_token2,
    ACTIONS(422), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(424), 1,
      aux_sym_else_statement_token1,
    STATE(102), 1,
      aux_sym_if_statement_repeat1,
    STATE(165), 1,
      sym_elif_statement,
    STATE(169), 1,
      sym_else_statement,
  [3243] = 2,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(426), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [3254] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [3265] = 6,
    ACTIONS(422), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(424), 1,
      aux_sym_else_statement_token1,
    ACTIONS(430), 1,
      aux_sym_if_statement_token2,
    STATE(102), 1,
      aux_sym_if_statement_repeat1,
    STATE(165), 1,
      sym_elif_statement,
    STATE(174), 1,
      sym_else_statement,
  [3284] = 6,
    ACTIONS(422), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(424), 1,
      aux_sym_else_statement_token1,
    ACTIONS(432), 1,
      aux_sym_if_statement_token2,
    STATE(95), 1,
      aux_sym_if_statement_repeat1,
    STATE(165), 1,
      sym_elif_statement,
    STATE(171), 1,
      sym_else_statement,
  [3303] = 3,
    STATE(71), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(94), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3315] = 2,
    STATE(89), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3325] = 4,
    ACTIONS(436), 1,
      aux_sym_elif_statement_token1,
    STATE(102), 1,
      aux_sym_if_statement_repeat1,
    STATE(165), 1,
      sym_elif_statement,
    ACTIONS(434), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [3339] = 3,
    ACTIONS(439), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3350] = 3,
    ACTIONS(441), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3361] = 2,
    STATE(148), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3370] = 3,
    ACTIONS(443), 1,
      aux_sym_next_statement_token1,
    ACTIONS(445), 1,
      aux_sym_prev_statement_token1,
    STATE(44), 2,
      sym_next_statement,
      sym_prev_statement,
  [3381] = 2,
    STATE(82), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3390] = 2,
    STATE(161), 1,
      sym_variable,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3399] = 3,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3410] = 2,
    STATE(147), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3419] = 3,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3430] = 3,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3441] = 3,
    ACTIONS(453), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3452] = 3,
    ACTIONS(455), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3463] = 3,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3474] = 2,
    STATE(167), 1,
      sym_variable,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3483] = 3,
    ACTIONS(459), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3494] = 3,
    ACTIONS(461), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3505] = 3,
    ACTIONS(443), 1,
      aux_sym_next_statement_token1,
    ACTIONS(445), 1,
      aux_sym_prev_statement_token1,
    STATE(45), 2,
      sym_next_statement,
      sym_prev_statement,
  [3516] = 2,
    STATE(96), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3525] = 2,
    STATE(145), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3534] = 2,
    STATE(88), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3543] = 2,
    STATE(151), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3552] = 3,
    ACTIONS(463), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3563] = 2,
    STATE(143), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3572] = 2,
    STATE(117), 1,
      sym_variable,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3581] = 3,
    ACTIONS(465), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3592] = 2,
    STATE(85), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3601] = 3,
    ACTIONS(467), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3612] = 3,
    ACTIONS(469), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3623] = 2,
    STATE(156), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3632] = 3,
    ACTIONS(471), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3643] = 3,
    ACTIONS(473), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3654] = 3,
    ACTIONS(475), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3665] = 3,
    ACTIONS(477), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3676] = 3,
    ACTIONS(479), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3687] = 2,
    STATE(155), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3696] = 3,
    ACTIONS(481), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3707] = 3,
    ACTIONS(483), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3718] = 3,
    ACTIONS(443), 1,
      aux_sym_next_statement_token1,
    ACTIONS(445), 1,
      aux_sym_prev_statement_token1,
    STATE(33), 2,
      sym_next_statement,
      sym_prev_statement,
  [3729] = 3,
    ACTIONS(485), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3740] = 2,
    STATE(158), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3749] = 2,
    STATE(86), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3758] = 3,
    ACTIONS(487), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3769] = 2,
    STATE(122), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3778] = 3,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3789] = 2,
    STATE(74), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3798] = 2,
    STATE(75), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3807] = 2,
    STATE(160), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3816] = 2,
    STATE(113), 1,
      sym_variable,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3825] = 2,
    STATE(100), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3834] = 3,
    ACTIONS(491), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3845] = 3,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3856] = 2,
    STATE(127), 1,
      sym_variable,
    ACTIONS(358), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3865] = 2,
    STATE(107), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3874] = 2,
    STATE(77), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3883] = 3,
    ACTIONS(495), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3894] = 2,
    STATE(78), 1,
      sym_variable,
    ACTIONS(354), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3903] = 3,
    ACTIONS(443), 1,
      aux_sym_next_statement_token1,
    ACTIONS(445), 1,
      aux_sym_prev_statement_token1,
    STATE(20), 2,
      sym_next_statement,
      sym_prev_statement,
  [3914] = 2,
    STATE(126), 1,
      sym_variable,
    ACTIONS(340), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3923] = 3,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [3934] = 1,
    ACTIONS(499), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [3940] = 1,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3946] = 1,
    ACTIONS(503), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3952] = 1,
    ACTIONS(505), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [3958] = 1,
    ACTIONS(51), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3964] = 2,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(426), 2,
      sym_comment,
      anon_sym_SEMI,
  [3972] = 1,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
  [3976] = 1,
    ACTIONS(509), 1,
      aux_sym_if_statement_token2,
  [3980] = 1,
    ACTIONS(511), 1,
      aux_sym_if_statement_token2,
  [3984] = 1,
    ACTIONS(513), 1,
      aux_sym_if_statement_token2,
  [3988] = 1,
    ACTIONS(515), 1,
      aux_sym_if_statement_token2,
  [3992] = 1,
    ACTIONS(517), 1,
      anon_sym_LF,
  [3996] = 1,
    ACTIONS(519), 1,
      aux_sym_if_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 309,
  [SMALL_STATE(8)] = 413,
  [SMALL_STATE(9)] = 506,
  [SMALL_STATE(10)] = 599,
  [SMALL_STATE(11)] = 695,
  [SMALL_STATE(12)] = 791,
  [SMALL_STATE(13)] = 887,
  [SMALL_STATE(14)] = 983,
  [SMALL_STATE(15)] = 1074,
  [SMALL_STATE(16)] = 1163,
  [SMALL_STATE(17)] = 1194,
  [SMALL_STATE(18)] = 1225,
  [SMALL_STATE(19)] = 1256,
  [SMALL_STATE(20)] = 1287,
  [SMALL_STATE(21)] = 1318,
  [SMALL_STATE(22)] = 1349,
  [SMALL_STATE(23)] = 1380,
  [SMALL_STATE(24)] = 1411,
  [SMALL_STATE(25)] = 1442,
  [SMALL_STATE(26)] = 1473,
  [SMALL_STATE(27)] = 1504,
  [SMALL_STATE(28)] = 1535,
  [SMALL_STATE(29)] = 1566,
  [SMALL_STATE(30)] = 1597,
  [SMALL_STATE(31)] = 1628,
  [SMALL_STATE(32)] = 1659,
  [SMALL_STATE(33)] = 1690,
  [SMALL_STATE(34)] = 1721,
  [SMALL_STATE(35)] = 1752,
  [SMALL_STATE(36)] = 1783,
  [SMALL_STATE(37)] = 1814,
  [SMALL_STATE(38)] = 1845,
  [SMALL_STATE(39)] = 1876,
  [SMALL_STATE(40)] = 1907,
  [SMALL_STATE(41)] = 1938,
  [SMALL_STATE(42)] = 1969,
  [SMALL_STATE(43)] = 2000,
  [SMALL_STATE(44)] = 2031,
  [SMALL_STATE(45)] = 2062,
  [SMALL_STATE(46)] = 2093,
  [SMALL_STATE(47)] = 2124,
  [SMALL_STATE(48)] = 2155,
  [SMALL_STATE(49)] = 2186,
  [SMALL_STATE(50)] = 2217,
  [SMALL_STATE(51)] = 2248,
  [SMALL_STATE(52)] = 2279,
  [SMALL_STATE(53)] = 2310,
  [SMALL_STATE(54)] = 2341,
  [SMALL_STATE(55)] = 2372,
  [SMALL_STATE(56)] = 2403,
  [SMALL_STATE(57)] = 2434,
  [SMALL_STATE(58)] = 2465,
  [SMALL_STATE(59)] = 2496,
  [SMALL_STATE(60)] = 2527,
  [SMALL_STATE(61)] = 2558,
  [SMALL_STATE(62)] = 2589,
  [SMALL_STATE(63)] = 2620,
  [SMALL_STATE(64)] = 2651,
  [SMALL_STATE(65)] = 2682,
  [SMALL_STATE(66)] = 2699,
  [SMALL_STATE(67)] = 2721,
  [SMALL_STATE(68)] = 2743,
  [SMALL_STATE(69)] = 2761,
  [SMALL_STATE(70)] = 2783,
  [SMALL_STATE(71)] = 2805,
  [SMALL_STATE(72)] = 2827,
  [SMALL_STATE(73)] = 2846,
  [SMALL_STATE(74)] = 2865,
  [SMALL_STATE(75)] = 2884,
  [SMALL_STATE(76)] = 2903,
  [SMALL_STATE(77)] = 2920,
  [SMALL_STATE(78)] = 2939,
  [SMALL_STATE(79)] = 2958,
  [SMALL_STATE(80)] = 2977,
  [SMALL_STATE(81)] = 2994,
  [SMALL_STATE(82)] = 3011,
  [SMALL_STATE(83)] = 3030,
  [SMALL_STATE(84)] = 3049,
  [SMALL_STATE(85)] = 3068,
  [SMALL_STATE(86)] = 3087,
  [SMALL_STATE(87)] = 3106,
  [SMALL_STATE(88)] = 3125,
  [SMALL_STATE(89)] = 3144,
  [SMALL_STATE(90)] = 3156,
  [SMALL_STATE(91)] = 3172,
  [SMALL_STATE(92)] = 3184,
  [SMALL_STATE(93)] = 3200,
  [SMALL_STATE(94)] = 3213,
  [SMALL_STATE(95)] = 3224,
  [SMALL_STATE(96)] = 3243,
  [SMALL_STATE(97)] = 3254,
  [SMALL_STATE(98)] = 3265,
  [SMALL_STATE(99)] = 3284,
  [SMALL_STATE(100)] = 3303,
  [SMALL_STATE(101)] = 3315,
  [SMALL_STATE(102)] = 3325,
  [SMALL_STATE(103)] = 3339,
  [SMALL_STATE(104)] = 3350,
  [SMALL_STATE(105)] = 3361,
  [SMALL_STATE(106)] = 3370,
  [SMALL_STATE(107)] = 3381,
  [SMALL_STATE(108)] = 3390,
  [SMALL_STATE(109)] = 3399,
  [SMALL_STATE(110)] = 3410,
  [SMALL_STATE(111)] = 3419,
  [SMALL_STATE(112)] = 3430,
  [SMALL_STATE(113)] = 3441,
  [SMALL_STATE(114)] = 3452,
  [SMALL_STATE(115)] = 3463,
  [SMALL_STATE(116)] = 3474,
  [SMALL_STATE(117)] = 3483,
  [SMALL_STATE(118)] = 3494,
  [SMALL_STATE(119)] = 3505,
  [SMALL_STATE(120)] = 3516,
  [SMALL_STATE(121)] = 3525,
  [SMALL_STATE(122)] = 3534,
  [SMALL_STATE(123)] = 3543,
  [SMALL_STATE(124)] = 3552,
  [SMALL_STATE(125)] = 3563,
  [SMALL_STATE(126)] = 3572,
  [SMALL_STATE(127)] = 3581,
  [SMALL_STATE(128)] = 3592,
  [SMALL_STATE(129)] = 3601,
  [SMALL_STATE(130)] = 3612,
  [SMALL_STATE(131)] = 3623,
  [SMALL_STATE(132)] = 3632,
  [SMALL_STATE(133)] = 3643,
  [SMALL_STATE(134)] = 3654,
  [SMALL_STATE(135)] = 3665,
  [SMALL_STATE(136)] = 3676,
  [SMALL_STATE(137)] = 3687,
  [SMALL_STATE(138)] = 3696,
  [SMALL_STATE(139)] = 3707,
  [SMALL_STATE(140)] = 3718,
  [SMALL_STATE(141)] = 3729,
  [SMALL_STATE(142)] = 3740,
  [SMALL_STATE(143)] = 3749,
  [SMALL_STATE(144)] = 3758,
  [SMALL_STATE(145)] = 3769,
  [SMALL_STATE(146)] = 3778,
  [SMALL_STATE(147)] = 3789,
  [SMALL_STATE(148)] = 3798,
  [SMALL_STATE(149)] = 3807,
  [SMALL_STATE(150)] = 3816,
  [SMALL_STATE(151)] = 3825,
  [SMALL_STATE(152)] = 3834,
  [SMALL_STATE(153)] = 3845,
  [SMALL_STATE(154)] = 3856,
  [SMALL_STATE(155)] = 3865,
  [SMALL_STATE(156)] = 3874,
  [SMALL_STATE(157)] = 3883,
  [SMALL_STATE(158)] = 3894,
  [SMALL_STATE(159)] = 3903,
  [SMALL_STATE(160)] = 3914,
  [SMALL_STATE(161)] = 3923,
  [SMALL_STATE(162)] = 3934,
  [SMALL_STATE(163)] = 3940,
  [SMALL_STATE(164)] = 3946,
  [SMALL_STATE(165)] = 3952,
  [SMALL_STATE(166)] = 3958,
  [SMALL_STATE(167)] = 3964,
  [SMALL_STATE(168)] = 3972,
  [SMALL_STATE(169)] = 3976,
  [SMALL_STATE(170)] = 3980,
  [SMALL_STATE(171)] = 3984,
  [SMALL_STATE(172)] = 3988,
  [SMALL_STATE(173)] = 3992,
  [SMALL_STATE(174)] = 3996,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(173),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(108),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(149),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(142),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(131),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(137),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(123),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(105),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(110),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(121),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(125),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(128),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(90),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(79),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(150),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(83),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(72),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(154),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 24),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 5, .production_id = 15),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 5, .production_id = 15),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_statement, 3, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_statement, 3, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 41),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 41),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 40),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 40),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 39),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 39),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 38),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 38),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 37),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 37),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 4, .production_id = 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 4, .production_id = 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 4, .production_id = 36),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 4, .production_id = 36),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 4, .production_id = 36),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 4, .production_id = 36),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_end, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_end, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 35),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 35),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 34),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 34),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 33),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 33),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 32),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 32),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 31),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 31),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 29),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 29),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 28),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 28),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 3, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 3, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 3, .production_id = 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 3, .production_id = 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 27),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 27),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 26),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 26),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 13),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 13),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 23),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 23),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 5, .production_id = 22),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 5, .production_id = 22),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 21),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 21),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 14),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 14),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 15),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 15),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 20),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 20),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 3, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 3, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 3, .production_id = 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 3, .production_id = 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 16),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 16),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 17),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 17),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_array_statement, 5, .production_id = 18),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_array_statement, 5, .production_id = 18),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(93),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 19), SHIFT_REPEAT(97),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 19),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 19),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 10),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 10),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_value, 2, .production_id = 12),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_value, 2, .production_id = 12),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 25),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 25), SHIFT_REPEAT(92),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 31),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 11),
  [507] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 30),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
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
