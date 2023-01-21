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
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 51

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
  aux_sym_log_statement_token1 = 92,
  aux_sym_clog_statement_token1 = 93,
  aux_sym_s_log_statement_token1 = 94,
  sym_statement_list = 95,
  sym_variable = 96,
  sym__statement = 97,
  sym__statement_end = 98,
  sym__empty_statement = 99,
  sym_version_statement = 100,
  sym_math_statement = 101,
  sym_get_statement = 102,
  sym_set_statement = 103,
  sym_put_var_chr_statement = 104,
  sym_put_array_statement = 105,
  sym_put_statement = 106,
  sym_put_d_string_statement = 107,
  sym_put_c_t_statement = 108,
  sym_put_bits_statement = 109,
  sym__put_statements = 110,
  sym_goto_statement = 111,
  sym_if_statement = 112,
  sym_elif_statement = 113,
  sym_else_statement = 114,
  sym__comparison_value = 115,
  sym_binary_comparison = 116,
  sym__binary_op = 117,
  sym_binary_expression = 118,
  sym_op_value = 119,
  sym_next_statement = 120,
  sym_prev_statement = 121,
  sym_for_statement = 122,
  sym_label_statement = 123,
  sym_break_statement = 124,
  sym_continue_statement = 125,
  sym_print_statement = 126,
  sym_log_statement = 127,
  sym_clog_statement = 128,
  sym_s_log_statement = 129,
  aux_sym_statement_list_repeat1 = 130,
  aux_sym_put_array_statement_repeat1 = 131,
  aux_sym_if_statement_repeat1 = 132,
  aux_sym_binary_expression_repeat1 = 133,
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
  [aux_sym_log_statement_token1] = "log",
  [aux_sym_clog_statement_token1] = "clog",
  [aux_sym_s_log_statement_token1] = "slog",
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
  [sym_log_statement] = "log_statement",
  [sym_clog_statement] = "clog_statement",
  [sym_s_log_statement] = "s_log_statement",
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
  [aux_sym_log_statement_token1] = aux_sym_log_statement_token1,
  [aux_sym_clog_statement_token1] = aux_sym_clog_statement_token1,
  [aux_sym_s_log_statement_token1] = aux_sym_s_log_statement_token1,
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
  [sym_log_statement] = sym_log_statement,
  [sym_clog_statement] = sym_clog_statement,
  [sym_s_log_statement] = sym_s_log_statement,
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
  [aux_sym_log_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_clog_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_s_log_statement_token1] = {
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
  [sym_log_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_clog_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_s_log_statement] = {
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
  field_compressed_size = 6,
  field_condition = 7,
  field_consequence = 8,
  field_encrypted_size = 9,
  field_file_number = 10,
  field_id = 11,
  field_index = 12,
  field_initializer = 13,
  field_left = 14,
  field_length = 15,
  field_message = 16,
  field_name = 17,
  field_offset = 18,
  field_op = 19,
  field_right = 20,
  field_size = 21,
  field_type = 22,
  field_update = 23,
  field_value = 24,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_array] = "array",
  [field_bits] = "bits",
  [field_body] = "body",
  [field_char] = "char",
  [field_compressed_size] = "compressed_size",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_encrypted_size] = "encrypted_size",
  [field_file_number] = "file_number",
  [field_id] = "id",
  [field_index] = "index",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_length] = "length",
  [field_message] = "message",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_op] = "op",
  [field_right] = "right",
  [field_size] = "size",
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
  [28] = {.index = 56, .length = 3},
  [29] = {.index = 59, .length = 4},
  [30] = {.index = 63, .length = 4},
  [31] = {.index = 67, .length = 1},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 2},
  [34] = {.index = 72, .length = 2},
  [35] = {.index = 74, .length = 3},
  [36] = {.index = 77, .length = 3},
  [37] = {.index = 80, .length = 2},
  [38] = {.index = 82, .length = 4},
  [39] = {.index = 86, .length = 4},
  [40] = {.index = 90, .length = 4},
  [41] = {.index = 94, .length = 3},
  [42] = {.index = 97, .length = 3},
  [43] = {.index = 100, .length = 3},
  [44] = {.index = 103, .length = 4},
  [45] = {.index = 107, .length = 5},
  [46] = {.index = 112, .length = 5},
  [47] = {.index = 117, .length = 5},
  [48] = {.index = 122, .length = 4},
  [49] = {.index = 126, .length = 6},
  [50] = {.index = 132, .length = 6},
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
    {field_offset, 2},
    {field_size, 3},
  [59] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
    {field_type, 4},
  [63] =
    {field_char, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [67] =
    {field_consequence, 2},
  [68] =
    {field_condition, 1},
    {field_consequence, 3},
  [70] =
    {field_alternative, 3},
    {field_condition, 1},
  [72] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [74] =
    {field_body, 4},
    {field_initializer, 2},
    {field_name, 1},
  [77] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [80] =
    {field_name, 1},
    {field_update, 2},
  [82] =
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [86] =
    {field_compressed_size, 3},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [90] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [94] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [97] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [100] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [103] =
    {field_body, 5},
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [107] =
    {field_encrypted_size, 5},
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [112] =
    {field_compressed_size, 3},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [117] =
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [122] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
  [126] =
    {field_compressed_size, 3},
    {field_encrypted_size, 6},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [132] =
    {field_file_number, 5},
    {field_id, 6},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
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
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 3,
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
  [115] = 3,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
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
  [146] = 145,
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
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 3,
  [196] = 111,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(230);
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(304);
      if (lookahead == '&') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == '0') ADVANCE(270);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '|') ADVANCE(301);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ';') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '%') ADVANCE(304);
      if (lookahead == '&') ADVANCE(292);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == '0') ADVANCE(270);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '|') ADVANCE(301);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(107);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(189);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(293);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(244);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(243);
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
      if (lookahead == 'D') ADVANCE(294);
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(264);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(263);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(260);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(218);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(262);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(261);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(302);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 50:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
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
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 91:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 92:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 93:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(307);
      END_STATE();
    case 94:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(334);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 114:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(331);
      END_STATE();
    case 117:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(218);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 128:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 129:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 130:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 131:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 132:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 135:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 136:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 137:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 155:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 158:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 161:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 162:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 163:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 164:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 165:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 166:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 167:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 168:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 169:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(218);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 170:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 171:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 172:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 196:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      END_STATE();
    case 197:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 221:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(328);
      END_STATE();
    case 222:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 223:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 224:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(274);
      END_STATE();
    case 225:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 226:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 227:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 228:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 229:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(247);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(171);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(155);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(229)
      END_STATE();
    case 230:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_put_var_chr_statement_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_put_array_statement_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_put_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(206);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_put_d_string_statement_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_put_c_t_statement_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_put_bits_statement_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(308);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '>') ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '>') ADVANCE(310);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(314);
      if (lookahead == '=') ADVANCE(280);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_next_statement_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_prev_statement_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_label_statement_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_break_statement_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_continue_statement_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_log_statement_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_clog_statement_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_s_log_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 229},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 229},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 229},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 229},
  [10] = {.lex_state = 229},
  [11] = {.lex_state = 229},
  [12] = {.lex_state = 229},
  [13] = {.lex_state = 229},
  [14] = {.lex_state = 229},
  [15] = {.lex_state = 229},
  [16] = {.lex_state = 229},
  [17] = {.lex_state = 229},
  [18] = {.lex_state = 229},
  [19] = {.lex_state = 229},
  [20] = {.lex_state = 229},
  [21] = {.lex_state = 229},
  [22] = {.lex_state = 229},
  [23] = {.lex_state = 229},
  [24] = {.lex_state = 229},
  [25] = {.lex_state = 229},
  [26] = {.lex_state = 229},
  [27] = {.lex_state = 229},
  [28] = {.lex_state = 229},
  [29] = {.lex_state = 229},
  [30] = {.lex_state = 229},
  [31] = {.lex_state = 229},
  [32] = {.lex_state = 229},
  [33] = {.lex_state = 229},
  [34] = {.lex_state = 229},
  [35] = {.lex_state = 229},
  [36] = {.lex_state = 229},
  [37] = {.lex_state = 229},
  [38] = {.lex_state = 229},
  [39] = {.lex_state = 229},
  [40] = {.lex_state = 229},
  [41] = {.lex_state = 229},
  [42] = {.lex_state = 229},
  [43] = {.lex_state = 229},
  [44] = {.lex_state = 229},
  [45] = {.lex_state = 229},
  [46] = {.lex_state = 229},
  [47] = {.lex_state = 229},
  [48] = {.lex_state = 229},
  [49] = {.lex_state = 229},
  [50] = {.lex_state = 229},
  [51] = {.lex_state = 229},
  [52] = {.lex_state = 229},
  [53] = {.lex_state = 229},
  [54] = {.lex_state = 229},
  [55] = {.lex_state = 229},
  [56] = {.lex_state = 229},
  [57] = {.lex_state = 229},
  [58] = {.lex_state = 229},
  [59] = {.lex_state = 229},
  [60] = {.lex_state = 229},
  [61] = {.lex_state = 229},
  [62] = {.lex_state = 229},
  [63] = {.lex_state = 229},
  [64] = {.lex_state = 229},
  [65] = {.lex_state = 229},
  [66] = {.lex_state = 229},
  [67] = {.lex_state = 229},
  [68] = {.lex_state = 229},
  [69] = {.lex_state = 229},
  [70] = {.lex_state = 229},
  [71] = {.lex_state = 229},
  [72] = {.lex_state = 229},
  [73] = {.lex_state = 229},
  [74] = {.lex_state = 229},
  [75] = {.lex_state = 229},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 229},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 229},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 229},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 229},
  [106] = {.lex_state = 229},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 229},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 229},
  [123] = {.lex_state = 229},
  [124] = {.lex_state = 229},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 229},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 229},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 229},
  [138] = {.lex_state = 229},
  [139] = {.lex_state = 229},
  [140] = {.lex_state = 229},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 229},
  [143] = {.lex_state = 229},
  [144] = {.lex_state = 229},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 229},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 229},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 229},
  [156] = {.lex_state = 229},
  [157] = {.lex_state = 229},
  [158] = {.lex_state = 229},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 229},
  [162] = {.lex_state = 229},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 229},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 229},
  [170] = {.lex_state = 229},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 229},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 229},
  [179] = {.lex_state = 229},
  [180] = {.lex_state = 229},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 229},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 229},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 229},
  [189] = {.lex_state = 229},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 229},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 229},
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
    [aux_sym_log_statement_token1] = ACTIONS(1),
    [aux_sym_clog_statement_token1] = ACTIONS(1),
    [aux_sym_s_log_statement_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_statement_list] = STATE(198),
    [sym__statement] = STATE(9),
    [sym__statement_end] = STATE(9),
    [sym__empty_statement] = STATE(9),
    [sym_version_statement] = STATE(9),
    [sym_math_statement] = STATE(9),
    [sym_get_statement] = STATE(9),
    [sym_set_statement] = STATE(9),
    [sym_put_var_chr_statement] = STATE(9),
    [sym_put_array_statement] = STATE(9),
    [sym_put_statement] = STATE(9),
    [sym_put_d_string_statement] = STATE(9),
    [sym_put_c_t_statement] = STATE(9),
    [sym_put_bits_statement] = STATE(9),
    [sym__put_statements] = STATE(9),
    [sym_goto_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_label_statement] = STATE(9),
    [sym_break_statement] = STATE(9),
    [sym_continue_statement] = STATE(9),
    [sym_print_statement] = STATE(9),
    [sym_log_statement] = STATE(9),
    [sym_clog_statement] = STATE(9),
    [sym_s_log_statement] = STATE(9),
    [aux_sym_statement_list_repeat1] = STATE(9),
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
    [aux_sym_log_statement_token1] = ACTIONS(41),
    [aux_sym_clog_statement_token1] = ACTIONS(43),
    [aux_sym_s_log_statement_token1] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(47), 1,
      anon_sym_u,
    ACTIONS(49), 1,
      anon_sym_0,
    STATE(119), 1,
      sym__binary_op,
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
  [68] = 2,
    ACTIONS(57), 10,
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
    ACTIONS(55), 46,
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
    ACTIONS(59), 1,
      anon_sym_0,
    ACTIONS(61), 10,
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
    ACTIONS(63), 44,
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
  [191] = 30,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(65), 1,
      aux_sym_if_statement_token2,
    ACTIONS(67), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(69), 1,
      aux_sym_else_statement_token1,
    STATE(112), 1,
      aux_sym_if_statement_repeat1,
    STATE(113), 1,
      sym_statement_list,
    STATE(194), 1,
      sym_elif_statement,
    STATE(201), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [307] = 2,
    ACTIONS(61), 10,
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
    ACTIONS(63), 44,
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
  [366] = 25,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(79), 1,
      aux_sym_version_statement_token1,
    ACTIONS(82), 1,
      aux_sym_math_statement_token1,
    ACTIONS(85), 1,
      aux_sym_get_statement_token1,
    ACTIONS(88), 1,
      aux_sym_set_statement_token1,
    ACTIONS(91), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(94), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(97), 1,
      aux_sym_put_statement_token1,
    ACTIONS(100), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(103), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(106), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(109), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(112), 1,
      aux_sym_if_statement_token1,
    ACTIONS(117), 1,
      aux_sym_for_statement_token1,
    ACTIONS(120), 1,
      aux_sym_label_statement_token1,
    ACTIONS(123), 1,
      aux_sym_break_statement_token1,
    ACTIONS(126), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(129), 1,
      aux_sym_print_statement_token1,
    ACTIONS(132), 1,
      aux_sym_log_statement_token1,
    ACTIONS(135), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(138), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(73), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(115), 5,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(7), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [471] = 2,
    ACTIONS(141), 10,
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
    ACTIONS(143), 44,
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
  [530] = 25,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(149), 5,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(7), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [635] = 27,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(151), 1,
      aux_sym_next_statement_token1,
    ACTIONS(153), 1,
      aux_sym_prev_statement_token1,
    STATE(125), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(67), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(9), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [743] = 27,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(151), 1,
      aux_sym_next_statement_token1,
    ACTIONS(153), 1,
      aux_sym_prev_statement_token1,
    STATE(176), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(35), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(9), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [851] = 27,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(151), 1,
      aux_sym_next_statement_token1,
    ACTIONS(153), 1,
      aux_sym_prev_statement_token1,
    STATE(152), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(16), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(9), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [959] = 27,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(151), 1,
      aux_sym_next_statement_token1,
    ACTIONS(153), 1,
      aux_sym_prev_statement_token1,
    STATE(141), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(66), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(9), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [1067] = 25,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    STATE(192), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(155), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [1170] = 25,
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
    ACTIONS(41), 1,
      aux_sym_log_statement_token1,
    ACTIONS(43), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(45), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(157), 1,
      aux_sym_if_statement_token2,
    STATE(200), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 25,
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
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [1271] = 2,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(161), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1305] = 2,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(165), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1339] = 2,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(169), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1373] = 2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1407] = 2,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(177), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1441] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(181), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1475] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(185), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1509] = 2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(189), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1543] = 2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(193), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1577] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(197), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1611] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(201), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1645] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(205), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1679] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(209), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1713] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(213), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1747] = 2,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(217), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1781] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(221), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1815] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(225), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1849] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(229), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1883] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(233), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1917] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(237), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1951] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(241), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [1985] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(245), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2019] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(249), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2053] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2087] = 2,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(257), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2121] = 2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(261), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2155] = 2,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(265), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2189] = 2,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(269), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2223] = 2,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(273), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2257] = 2,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(277), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2291] = 2,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(281), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2325] = 2,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(285), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2359] = 2,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(289), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2393] = 2,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(293), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2427] = 2,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(297), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2461] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(301), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2495] = 2,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(305), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2529] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(309), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2563] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(313), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2597] = 2,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(317), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2631] = 2,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2665] = 2,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(325), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2699] = 2,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(329), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2733] = 2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(333), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2767] = 2,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(337), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2801] = 2,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(341), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2835] = 2,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(345), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2869] = 2,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(349), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2903] = 2,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(353), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2937] = 2,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(357), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [2971] = 2,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(361), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3005] = 2,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(365), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3039] = 2,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(369), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3073] = 2,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(373), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3107] = 2,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(377), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3141] = 2,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(381), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3175] = 2,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(385), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3209] = 2,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(389), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3243] = 2,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(393), 27,
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
      aux_sym_log_statement_token1,
      aux_sym_clog_statement_token1,
      aux_sym_s_log_statement_token1,
  [3277] = 2,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 11,
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
  [3294] = 6,
    ACTIONS(397), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statement_end,
    STATE(128), 1,
      sym_op_value,
    STATE(145), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3316] = 6,
    ACTIONS(401), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym__statement_end,
    STATE(89), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(114), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3338] = 4,
    ACTIONS(403), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(405), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [3356] = 6,
    ACTIONS(407), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym__statement_end,
    STATE(145), 1,
      sym_variable,
    STATE(156), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3378] = 6,
    ACTIONS(409), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym__statement_end,
    STATE(145), 1,
      sym_variable,
    STATE(158), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3400] = 6,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__statement_end,
    STATE(76), 1,
      sym_op_value,
    STATE(146), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3422] = 5,
    ACTIONS(415), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym__statement_end,
    STATE(180), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3441] = 4,
    ACTIONS(419), 1,
      anon_sym_LF,
    STATE(85), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(417), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(421), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3458] = 5,
    ACTIONS(423), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__statement_end,
    STATE(157), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3477] = 4,
    ACTIONS(427), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(425), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(421), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3494] = 5,
    ACTIONS(429), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym__statement_end,
    STATE(182), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3513] = 5,
    ACTIONS(431), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__statement_end,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3532] = 5,
    ACTIONS(433), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__statement_end,
    STATE(80), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3551] = 5,
    ACTIONS(440), 1,
      anon_sym_LF,
    STATE(89), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(114), 1,
      sym_variable,
    ACTIONS(438), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(435), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3570] = 5,
    ACTIONS(442), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statement_end,
    STATE(81), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3589] = 5,
    ACTIONS(444), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym__statement_end,
    STATE(140), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3608] = 5,
    ACTIONS(446), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym__statement_end,
    STATE(139), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3627] = 5,
    ACTIONS(448), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statement_end,
    STATE(167), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3646] = 5,
    ACTIONS(450), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statement_end,
    STATE(179), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3665] = 5,
    ACTIONS(452), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statement_end,
    STATE(93), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3684] = 5,
    ACTIONS(454), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym__statement_end,
    STATE(132), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3703] = 5,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym__statement_end,
    STATE(95), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3722] = 5,
    ACTIONS(458), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statement_end,
    STATE(94), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3741] = 5,
    ACTIONS(460), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym__statement_end,
    STATE(78), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3760] = 5,
    ACTIONS(462), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym__statement_end,
    STATE(137), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3779] = 5,
    ACTIONS(464), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__statement_end,
    STATE(184), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3798] = 5,
    ACTIONS(466), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym__statement_end,
    STATE(82), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3817] = 5,
    ACTIONS(468), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__statement_end,
    STATE(162), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3836] = 5,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym__statement_end,
    STATE(161), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3855] = 4,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(472), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(476), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3872] = 2,
    ACTIONS(474), 1,
      anon_sym_LF,
    ACTIONS(472), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3884] = 4,
    STATE(83), 1,
      sym_binary_comparison,
    STATE(143), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(479), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3900] = 2,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(481), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3912] = 4,
    STATE(83), 1,
      sym_binary_comparison,
    STATE(151), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(479), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3928] = 6,
    ACTIONS(485), 1,
      aux_sym_if_statement_token2,
    ACTIONS(487), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(489), 1,
      aux_sym_else_statement_token1,
    STATE(118), 1,
      aux_sym_if_statement_repeat1,
    STATE(194), 1,
      sym_elif_statement,
    STATE(199), 1,
      sym_else_statement,
  [3947] = 2,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(491), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [3958] = 6,
    ACTIONS(487), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(489), 1,
      aux_sym_else_statement_token1,
    ACTIONS(495), 1,
      aux_sym_if_statement_token2,
    STATE(118), 1,
      aux_sym_if_statement_repeat1,
    STATE(194), 1,
      sym_elif_statement,
    STATE(202), 1,
      sym_else_statement,
  [3977] = 6,
    ACTIONS(487), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(489), 1,
      aux_sym_else_statement_token1,
    ACTIONS(497), 1,
      aux_sym_if_statement_token2,
    STATE(110), 1,
      aux_sym_if_statement_repeat1,
    STATE(194), 1,
      sym_elif_statement,
    STATE(203), 1,
      sym_else_statement,
  [3996] = 2,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(499), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4007] = 2,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4018] = 3,
    STATE(106), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(479), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4031] = 3,
    STATE(77), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(114), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4043] = 4,
    ACTIONS(505), 1,
      aux_sym_elif_statement_token1,
    STATE(118), 1,
      aux_sym_if_statement_repeat1,
    STATE(194), 1,
      sym_elif_statement,
    ACTIONS(503), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [4057] = 2,
    STATE(108), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4067] = 2,
    STATE(172), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4076] = 2,
    STATE(129), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4085] = 3,
    ACTIONS(508), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4096] = 3,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4107] = 3,
    ACTIONS(512), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4118] = 3,
    ACTIONS(514), 1,
      aux_sym_next_statement_token1,
    ACTIONS(516), 1,
      aux_sym_prev_statement_token1,
    STATE(46), 2,
      sym_next_statement,
      sym_prev_statement,
  [4129] = 2,
    STATE(165), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4138] = 2,
    STATE(178), 1,
      sym_variable,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4147] = 3,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4158] = 2,
    STATE(100), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4167] = 2,
    STATE(98), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4176] = 2,
    STATE(96), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4185] = 3,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4196] = 2,
    STATE(188), 1,
      sym_variable,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4205] = 2,
    STATE(190), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4214] = 2,
    STATE(186), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4223] = 2,
    STATE(171), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4232] = 3,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4243] = 3,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4254] = 3,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4265] = 3,
    ACTIONS(528), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4276] = 3,
    ACTIONS(514), 1,
      aux_sym_next_statement_token1,
    ACTIONS(516), 1,
      aux_sym_prev_statement_token1,
    STATE(62), 2,
      sym_next_statement,
      sym_prev_statement,
  [4287] = 3,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4298] = 3,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4309] = 3,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4320] = 2,
    STATE(196), 1,
      sym_variable,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4329] = 2,
    STATE(111), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4338] = 2,
    STATE(164), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4347] = 3,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4358] = 2,
    STATE(121), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4367] = 2,
    STATE(160), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4376] = 3,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4387] = 3,
    ACTIONS(514), 1,
      aux_sym_next_statement_token1,
    ACTIONS(516), 1,
      aux_sym_prev_statement_token1,
    STATE(36), 2,
      sym_next_statement,
      sym_prev_statement,
  [4398] = 2,
    STATE(173), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4407] = 2,
    STATE(175), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4416] = 3,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4427] = 3,
    ACTIONS(542), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4438] = 3,
    ACTIONS(544), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4449] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4460] = 2,
    STATE(168), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4469] = 2,
    STATE(84), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4478] = 3,
    ACTIONS(548), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4489] = 3,
    ACTIONS(550), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4500] = 2,
    STATE(99), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4509] = 2,
    STATE(104), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4518] = 2,
    STATE(103), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4527] = 2,
    STATE(177), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4536] = 3,
    ACTIONS(552), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4547] = 2,
    STATE(117), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4556] = 3,
    ACTIONS(554), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4567] = 3,
    ACTIONS(556), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4578] = 2,
    STATE(102), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4587] = 2,
    STATE(131), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4596] = 2,
    STATE(86), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4605] = 3,
    ACTIONS(558), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4616] = 2,
    STATE(101), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4625] = 3,
    ACTIONS(514), 1,
      aux_sym_next_statement_token1,
    ACTIONS(516), 1,
      aux_sym_prev_statement_token1,
    STATE(24), 2,
      sym_next_statement,
      sym_prev_statement,
  [4636] = 2,
    STATE(133), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4645] = 3,
    ACTIONS(560), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4656] = 3,
    ACTIONS(562), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4667] = 3,
    ACTIONS(564), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4678] = 2,
    STATE(134), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4687] = 3,
    ACTIONS(566), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4698] = 2,
    STATE(135), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4707] = 3,
    ACTIONS(568), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4718] = 2,
    STATE(136), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4727] = 2,
    STATE(130), 1,
      sym_variable,
    ACTIONS(395), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4736] = 2,
    STATE(138), 1,
      sym_variable,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4745] = 3,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4756] = 3,
    ACTIONS(572), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4767] = 2,
    STATE(97), 1,
      sym_variable,
    ACTIONS(399), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4776] = 2,
    STATE(142), 1,
      sym_variable,
    ACTIONS(413), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4785] = 1,
    ACTIONS(574), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [4791] = 1,
    ACTIONS(576), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4797] = 1,
    ACTIONS(578), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [4803] = 1,
    ACTIONS(57), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4809] = 2,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(491), 2,
      sym_comment,
      anon_sym_SEMI,
  [4817] = 1,
    ACTIONS(580), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4823] = 1,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
  [4827] = 1,
    ACTIONS(584), 1,
      aux_sym_if_statement_token2,
  [4831] = 1,
    ACTIONS(586), 1,
      aux_sym_if_statement_token2,
  [4835] = 1,
    ACTIONS(588), 1,
      aux_sym_if_statement_token2,
  [4839] = 1,
    ACTIONS(590), 1,
      aux_sym_if_statement_token2,
  [4843] = 1,
    ACTIONS(592), 1,
      aux_sym_if_statement_token2,
  [4847] = 1,
    ACTIONS(594), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 307,
  [SMALL_STATE(7)] = 366,
  [SMALL_STATE(8)] = 471,
  [SMALL_STATE(9)] = 530,
  [SMALL_STATE(10)] = 635,
  [SMALL_STATE(11)] = 743,
  [SMALL_STATE(12)] = 851,
  [SMALL_STATE(13)] = 959,
  [SMALL_STATE(14)] = 1067,
  [SMALL_STATE(15)] = 1170,
  [SMALL_STATE(16)] = 1271,
  [SMALL_STATE(17)] = 1305,
  [SMALL_STATE(18)] = 1339,
  [SMALL_STATE(19)] = 1373,
  [SMALL_STATE(20)] = 1407,
  [SMALL_STATE(21)] = 1441,
  [SMALL_STATE(22)] = 1475,
  [SMALL_STATE(23)] = 1509,
  [SMALL_STATE(24)] = 1543,
  [SMALL_STATE(25)] = 1577,
  [SMALL_STATE(26)] = 1611,
  [SMALL_STATE(27)] = 1645,
  [SMALL_STATE(28)] = 1679,
  [SMALL_STATE(29)] = 1713,
  [SMALL_STATE(30)] = 1747,
  [SMALL_STATE(31)] = 1781,
  [SMALL_STATE(32)] = 1815,
  [SMALL_STATE(33)] = 1849,
  [SMALL_STATE(34)] = 1883,
  [SMALL_STATE(35)] = 1917,
  [SMALL_STATE(36)] = 1951,
  [SMALL_STATE(37)] = 1985,
  [SMALL_STATE(38)] = 2019,
  [SMALL_STATE(39)] = 2053,
  [SMALL_STATE(40)] = 2087,
  [SMALL_STATE(41)] = 2121,
  [SMALL_STATE(42)] = 2155,
  [SMALL_STATE(43)] = 2189,
  [SMALL_STATE(44)] = 2223,
  [SMALL_STATE(45)] = 2257,
  [SMALL_STATE(46)] = 2291,
  [SMALL_STATE(47)] = 2325,
  [SMALL_STATE(48)] = 2359,
  [SMALL_STATE(49)] = 2393,
  [SMALL_STATE(50)] = 2427,
  [SMALL_STATE(51)] = 2461,
  [SMALL_STATE(52)] = 2495,
  [SMALL_STATE(53)] = 2529,
  [SMALL_STATE(54)] = 2563,
  [SMALL_STATE(55)] = 2597,
  [SMALL_STATE(56)] = 2631,
  [SMALL_STATE(57)] = 2665,
  [SMALL_STATE(58)] = 2699,
  [SMALL_STATE(59)] = 2733,
  [SMALL_STATE(60)] = 2767,
  [SMALL_STATE(61)] = 2801,
  [SMALL_STATE(62)] = 2835,
  [SMALL_STATE(63)] = 2869,
  [SMALL_STATE(64)] = 2903,
  [SMALL_STATE(65)] = 2937,
  [SMALL_STATE(66)] = 2971,
  [SMALL_STATE(67)] = 3005,
  [SMALL_STATE(68)] = 3039,
  [SMALL_STATE(69)] = 3073,
  [SMALL_STATE(70)] = 3107,
  [SMALL_STATE(71)] = 3141,
  [SMALL_STATE(72)] = 3175,
  [SMALL_STATE(73)] = 3209,
  [SMALL_STATE(74)] = 3243,
  [SMALL_STATE(75)] = 3277,
  [SMALL_STATE(76)] = 3294,
  [SMALL_STATE(77)] = 3316,
  [SMALL_STATE(78)] = 3338,
  [SMALL_STATE(79)] = 3356,
  [SMALL_STATE(80)] = 3378,
  [SMALL_STATE(81)] = 3400,
  [SMALL_STATE(82)] = 3422,
  [SMALL_STATE(83)] = 3441,
  [SMALL_STATE(84)] = 3458,
  [SMALL_STATE(85)] = 3477,
  [SMALL_STATE(86)] = 3494,
  [SMALL_STATE(87)] = 3513,
  [SMALL_STATE(88)] = 3532,
  [SMALL_STATE(89)] = 3551,
  [SMALL_STATE(90)] = 3570,
  [SMALL_STATE(91)] = 3589,
  [SMALL_STATE(92)] = 3608,
  [SMALL_STATE(93)] = 3627,
  [SMALL_STATE(94)] = 3646,
  [SMALL_STATE(95)] = 3665,
  [SMALL_STATE(96)] = 3684,
  [SMALL_STATE(97)] = 3703,
  [SMALL_STATE(98)] = 3722,
  [SMALL_STATE(99)] = 3741,
  [SMALL_STATE(100)] = 3760,
  [SMALL_STATE(101)] = 3779,
  [SMALL_STATE(102)] = 3798,
  [SMALL_STATE(103)] = 3817,
  [SMALL_STATE(104)] = 3836,
  [SMALL_STATE(105)] = 3855,
  [SMALL_STATE(106)] = 3872,
  [SMALL_STATE(107)] = 3884,
  [SMALL_STATE(108)] = 3900,
  [SMALL_STATE(109)] = 3912,
  [SMALL_STATE(110)] = 3928,
  [SMALL_STATE(111)] = 3947,
  [SMALL_STATE(112)] = 3958,
  [SMALL_STATE(113)] = 3977,
  [SMALL_STATE(114)] = 3996,
  [SMALL_STATE(115)] = 4007,
  [SMALL_STATE(116)] = 4018,
  [SMALL_STATE(117)] = 4031,
  [SMALL_STATE(118)] = 4043,
  [SMALL_STATE(119)] = 4057,
  [SMALL_STATE(120)] = 4067,
  [SMALL_STATE(121)] = 4076,
  [SMALL_STATE(122)] = 4085,
  [SMALL_STATE(123)] = 4096,
  [SMALL_STATE(124)] = 4107,
  [SMALL_STATE(125)] = 4118,
  [SMALL_STATE(126)] = 4129,
  [SMALL_STATE(127)] = 4138,
  [SMALL_STATE(128)] = 4147,
  [SMALL_STATE(129)] = 4158,
  [SMALL_STATE(130)] = 4167,
  [SMALL_STATE(131)] = 4176,
  [SMALL_STATE(132)] = 4185,
  [SMALL_STATE(133)] = 4196,
  [SMALL_STATE(134)] = 4205,
  [SMALL_STATE(135)] = 4214,
  [SMALL_STATE(136)] = 4223,
  [SMALL_STATE(137)] = 4232,
  [SMALL_STATE(138)] = 4243,
  [SMALL_STATE(139)] = 4254,
  [SMALL_STATE(140)] = 4265,
  [SMALL_STATE(141)] = 4276,
  [SMALL_STATE(142)] = 4287,
  [SMALL_STATE(143)] = 4298,
  [SMALL_STATE(144)] = 4309,
  [SMALL_STATE(145)] = 4320,
  [SMALL_STATE(146)] = 4329,
  [SMALL_STATE(147)] = 4338,
  [SMALL_STATE(148)] = 4347,
  [SMALL_STATE(149)] = 4358,
  [SMALL_STATE(150)] = 4367,
  [SMALL_STATE(151)] = 4376,
  [SMALL_STATE(152)] = 4387,
  [SMALL_STATE(153)] = 4398,
  [SMALL_STATE(154)] = 4407,
  [SMALL_STATE(155)] = 4416,
  [SMALL_STATE(156)] = 4427,
  [SMALL_STATE(157)] = 4438,
  [SMALL_STATE(158)] = 4449,
  [SMALL_STATE(159)] = 4460,
  [SMALL_STATE(160)] = 4469,
  [SMALL_STATE(161)] = 4478,
  [SMALL_STATE(162)] = 4489,
  [SMALL_STATE(163)] = 4500,
  [SMALL_STATE(164)] = 4509,
  [SMALL_STATE(165)] = 4518,
  [SMALL_STATE(166)] = 4527,
  [SMALL_STATE(167)] = 4536,
  [SMALL_STATE(168)] = 4547,
  [SMALL_STATE(169)] = 4556,
  [SMALL_STATE(170)] = 4567,
  [SMALL_STATE(171)] = 4578,
  [SMALL_STATE(172)] = 4587,
  [SMALL_STATE(173)] = 4596,
  [SMALL_STATE(174)] = 4605,
  [SMALL_STATE(175)] = 4616,
  [SMALL_STATE(176)] = 4625,
  [SMALL_STATE(177)] = 4636,
  [SMALL_STATE(178)] = 4645,
  [SMALL_STATE(179)] = 4656,
  [SMALL_STATE(180)] = 4667,
  [SMALL_STATE(181)] = 4678,
  [SMALL_STATE(182)] = 4687,
  [SMALL_STATE(183)] = 4698,
  [SMALL_STATE(184)] = 4707,
  [SMALL_STATE(185)] = 4718,
  [SMALL_STATE(186)] = 4727,
  [SMALL_STATE(187)] = 4736,
  [SMALL_STATE(188)] = 4745,
  [SMALL_STATE(189)] = 4756,
  [SMALL_STATE(190)] = 4767,
  [SMALL_STATE(191)] = 4776,
  [SMALL_STATE(192)] = 4785,
  [SMALL_STATE(193)] = 4791,
  [SMALL_STATE(194)] = 4797,
  [SMALL_STATE(195)] = 4803,
  [SMALL_STATE(196)] = 4809,
  [SMALL_STATE(197)] = 4817,
  [SMALL_STATE(198)] = 4823,
  [SMALL_STATE(199)] = 4827,
  [SMALL_STATE(200)] = 4831,
  [SMALL_STATE(201)] = 4835,
  [SMALL_STATE(202)] = 4839,
  [SMALL_STATE(203)] = 4843,
  [SMALL_STATE(204)] = 4847,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(204),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(127),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(166),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(154),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(153),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(120),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(159),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(126),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(147),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(149),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(150),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(163),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(109),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(90),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(191),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(91),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(92),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(187),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(185),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(183),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(181),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 24),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 27),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 27),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 5, .production_id = 22),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 5, .production_id = 22),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 8, .production_id = 50),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 8, .production_id = 50),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 8, .production_id = 49),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 8, .production_id = 49),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 48),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 48),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 7, .production_id = 47),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 7, .production_id = 47),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 7, .production_id = 46),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 7, .production_id = 46),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 7, .production_id = 45),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 7, .production_id = 45),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 44),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 44),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 43),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 43),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 42),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 42),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 41),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 41),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 6, .production_id = 40),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 6, .production_id = 40),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 6, .production_id = 39),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 6, .production_id = 39),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 6, .production_id = 38),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 6, .production_id = 38),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 4, .production_id = 37),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 4, .production_id = 37),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 4, .production_id = 37),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 4, .production_id = 37),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_end, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_end, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 3, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 3, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 36),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 36),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 35),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 35),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 34),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 34),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 33),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 33),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 32),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 32),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 30),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 30),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 29),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 29),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 5, .production_id = 28),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 5, .production_id = 28),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 5, .production_id = 28),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 5, .production_id = 28),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 3, .production_id = 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 3, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 3, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 3, .production_id = 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 26),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 26),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 3, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 3, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 23),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 23),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 21),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 21),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 20),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 20),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 5, .production_id = 15),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 5, .production_id = 15),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_array_statement, 5, .production_id = 18),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_array_statement, 5, .production_id = 18),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 17),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 17),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 16),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 16),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 15),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 15),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 14),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 14),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 13),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 13),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_statement, 3, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_statement, 3, .production_id = 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 9),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 7),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 4, .production_id = 8),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 4, .production_id = 8),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 19), SHIFT_REPEAT(115),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 19),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 19),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(116),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 10),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 10),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_value, 2, .production_id = 12),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_value, 2, .production_id = 12),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 6),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 6),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 25),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 25), SHIFT_REPEAT(107),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 32),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 11),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [582] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 31),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
