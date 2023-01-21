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
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 55

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
  aux_sym_call_function_statement_token1 = 85,
  aux_sym_start_function_statement_token1 = 86,
  aux_sym_start_function_statement_token2 = 87,
  aux_sym_next_statement_token1 = 88,
  aux_sym_prev_statement_token1 = 89,
  aux_sym_for_statement_token1 = 90,
  aux_sym_label_statement_token1 = 91,
  aux_sym_break_statement_token1 = 92,
  aux_sym_continue_statement_token1 = 93,
  aux_sym_print_statement_token1 = 94,
  aux_sym_log_statement_token1 = 95,
  aux_sym_clog_statement_token1 = 96,
  aux_sym_s_log_statement_token1 = 97,
  sym_statement_list = 98,
  sym_variable = 99,
  sym__statement = 100,
  sym__statement_end = 101,
  sym__empty_statement = 102,
  sym_version_statement = 103,
  sym_math_statement = 104,
  sym_get_statement = 105,
  sym_set_statement = 106,
  sym_put_var_chr_statement = 107,
  sym_put_array_statement = 108,
  sym_put_statement = 109,
  sym_put_d_string_statement = 110,
  sym_put_c_t_statement = 111,
  sym_put_bits_statement = 112,
  sym__put_statements = 113,
  sym_goto_statement = 114,
  sym_if_statement = 115,
  sym_elif_statement = 116,
  sym_else_statement = 117,
  sym__comparison_value = 118,
  sym_binary_comparison = 119,
  sym__binary_op = 120,
  sym_binary_expression = 121,
  sym_op_value = 122,
  sym_call_function_statement = 123,
  sym_start_function_statement = 124,
  sym_next_statement = 125,
  sym_prev_statement = 126,
  sym_for_statement = 127,
  sym_label_statement = 128,
  sym_break_statement = 129,
  sym_continue_statement = 130,
  sym_print_statement = 131,
  sym_log_statement = 132,
  sym_clog_statement = 133,
  sym_s_log_statement = 134,
  aux_sym_statement_list_repeat1 = 135,
  aux_sym_put_array_statement_repeat1 = 136,
  aux_sym_if_statement_repeat1 = 137,
  aux_sym_binary_expression_repeat1 = 138,
  aux_sym_call_function_statement_repeat1 = 139,
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
  [aux_sym_call_function_statement_token1] = "callfunction",
  [aux_sym_start_function_statement_token1] = "startfunction",
  [aux_sym_start_function_statement_token2] = "endfunction",
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
  [sym_call_function_statement] = "call_function_statement",
  [sym_start_function_statement] = "start_function_statement",
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
  [aux_sym_call_function_statement_repeat1] = "call_function_statement_repeat1",
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
  [aux_sym_call_function_statement_token1] = aux_sym_call_function_statement_token1,
  [aux_sym_start_function_statement_token1] = aux_sym_start_function_statement_token1,
  [aux_sym_start_function_statement_token2] = aux_sym_start_function_statement_token2,
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
  [sym_call_function_statement] = sym_call_function_statement,
  [sym_start_function_statement] = sym_start_function_statement,
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
  [aux_sym_call_function_statement_repeat1] = aux_sym_call_function_statement_repeat1,
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
  [aux_sym_call_function_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_start_function_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_start_function_statement_token2] = {
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
  [sym_call_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_start_function_statement] = {
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
  [aux_sym_call_function_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_array = 3,
  field_bits = 4,
  field_body = 5,
  field_char = 6,
  field_compressed_size = 7,
  field_condition = 8,
  field_consequence = 9,
  field_encrypted_size = 10,
  field_file_number = 11,
  field_id = 12,
  field_index = 13,
  field_initializer = 14,
  field_left = 15,
  field_length = 16,
  field_message = 17,
  field_name = 18,
  field_offset = 19,
  field_op = 20,
  field_right = 21,
  field_save_variables = 22,
  field_size = 23,
  field_type = 24,
  field_update = 25,
  field_value = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
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
  [field_save_variables] = "save_variables",
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
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 3},
  [17] = {.index = 26, .length = 3},
  [18] = {.index = 29, .length = 3},
  [19] = {.index = 32, .length = 3},
  [20] = {.index = 35, .length = 3},
  [21] = {.index = 38, .length = 2},
  [22] = {.index = 40, .length = 3},
  [23] = {.index = 43, .length = 3},
  [24] = {.index = 46, .length = 3},
  [25] = {.index = 49, .length = 3},
  [26] = {.index = 52, .length = 1},
  [27] = {.index = 53, .length = 2},
  [28] = {.index = 55, .length = 3},
  [29] = {.index = 58, .length = 2},
  [30] = {.index = 60, .length = 2},
  [31] = {.index = 62, .length = 2},
  [32] = {.index = 64, .length = 3},
  [33] = {.index = 67, .length = 4},
  [34] = {.index = 71, .length = 4},
  [35] = {.index = 75, .length = 1},
  [36] = {.index = 76, .length = 2},
  [37] = {.index = 78, .length = 2},
  [38] = {.index = 80, .length = 2},
  [39] = {.index = 82, .length = 3},
  [40] = {.index = 85, .length = 3},
  [41] = {.index = 88, .length = 2},
  [42] = {.index = 90, .length = 4},
  [43] = {.index = 94, .length = 4},
  [44] = {.index = 98, .length = 4},
  [45] = {.index = 102, .length = 3},
  [46] = {.index = 105, .length = 3},
  [47] = {.index = 108, .length = 3},
  [48] = {.index = 111, .length = 4},
  [49] = {.index = 115, .length = 5},
  [50] = {.index = 120, .length = 5},
  [51] = {.index = 125, .length = 5},
  [52] = {.index = 130, .length = 4},
  [53] = {.index = 134, .length = 6},
  [54] = {.index = 140, .length = 6},
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
    {field_argument, 0},
  [18] =
    {field_name, 1},
    {field_save_variables, 2},
  [20] =
    {field_op, 0},
    {field_value, 1},
  [22] =
    {field_body, 2},
  [23] =
    {field_left, 1},
    {field_op, 2},
    {field_right, 3},
  [26] =
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [29] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [32] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
  [35] =
    {field_array, 1},
    {field_index, 2},
    {field_name, 3, .inherited = true},
  [38] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [40] =
    {field_file_number, 3},
    {field_length, 2},
    {field_name, 1},
  [43] =
    {field_char, 3},
    {field_name, 1},
    {field_type, 2},
  [46] =
    {field_bits, 2},
    {field_file_number, 3},
    {field_name, 1},
  [49] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [52] =
    {field_condition, 1},
  [53] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [55] =
    {field_argument, 3, .inherited = true},
    {field_name, 1},
    {field_save_variables, 2},
  [58] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [60] =
    {field_body, 3},
    {field_name, 1},
  [62] =
    {field_initializer, 2},
    {field_name, 1},
  [64] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [67] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
    {field_type, 4},
  [71] =
    {field_char, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [75] =
    {field_consequence, 2},
  [76] =
    {field_condition, 1},
    {field_consequence, 3},
  [78] =
    {field_alternative, 3},
    {field_condition, 1},
  [80] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [82] =
    {field_body, 4},
    {field_initializer, 2},
    {field_name, 1},
  [85] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [88] =
    {field_name, 1},
    {field_update, 2},
  [90] =
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [94] =
    {field_compressed_size, 3},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [98] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [102] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [105] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [108] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [111] =
    {field_body, 5},
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [115] =
    {field_encrypted_size, 5},
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [120] =
    {field_compressed_size, 3},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [125] =
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [130] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
  [134] =
    {field_compressed_size, 3},
    {field_encrypted_size, 6},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [140] =
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 10,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 10,
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
  [153] = 137,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 10,
  [212] = 124,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(259);
      if (lookahead == '!') ADVANCE(341);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(333);
      if (lookahead == '&') ADVANCE(321);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '|') ADVANCE(330);
      if (lookahead == '~') ADVANCE(344);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(118);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(245);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(341);
      if (lookahead == '%') ADVANCE(333);
      if (lookahead == '&') ADVANCE(321);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '|') ADVANCE(330);
      if (lookahead == '~') ADVANCE(344);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(322);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(262);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(273);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(272);
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
      if (lookahead == 'D') ADVANCE(323);
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(293);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(132);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(292);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(289);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(244);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(332);
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(290);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(331);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(167);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 56:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(132);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 97:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(294);
      END_STATE();
    case 98:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(296);
      END_STATE();
    case 99:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(295);
      END_STATE();
    case 100:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 101:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(246);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 102:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(249);
      END_STATE();
    case 105:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(366);
      END_STATE();
    case 106:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(366);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 108:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      END_STATE();
    case 109:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 112:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 113:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 126:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(177);
      END_STATE();
    case 127:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 128:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(363);
      END_STATE();
    case 129:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(244);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 140:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 148:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 149:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 185:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 186:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 187:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 188:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 189:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 190:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(244);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 213:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 214:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      END_STATE();
    case 215:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 244:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 245:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 246:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 247:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 248:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 249:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 250:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(360);
      END_STATE();
    case 251:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 252:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 253:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(303);
      END_STATE();
    case 254:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 255:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(226);
      END_STATE();
    case 256:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 258:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(276);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(171);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(258)
      END_STATE();
    case 259:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(271);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '/') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_put_var_chr_statement_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_put_array_statement_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_put_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(122);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_put_d_string_statement_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_put_c_t_statement_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_put_bits_statement_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(337);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead == '>') ADVANCE(308);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '>') ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(343);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_call_function_statement_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token2);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_next_statement_token1);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_prev_statement_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_label_statement_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_break_statement_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_continue_statement_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_log_statement_token1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_clog_statement_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_s_log_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 258},
  [2] = {.lex_state = 258},
  [3] = {.lex_state = 258},
  [4] = {.lex_state = 258},
  [5] = {.lex_state = 258},
  [6] = {.lex_state = 258},
  [7] = {.lex_state = 258},
  [8] = {.lex_state = 258},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 258},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 258},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 258},
  [17] = {.lex_state = 258},
  [18] = {.lex_state = 258},
  [19] = {.lex_state = 258},
  [20] = {.lex_state = 258},
  [21] = {.lex_state = 258},
  [22] = {.lex_state = 258},
  [23] = {.lex_state = 258},
  [24] = {.lex_state = 258},
  [25] = {.lex_state = 258},
  [26] = {.lex_state = 258},
  [27] = {.lex_state = 258},
  [28] = {.lex_state = 258},
  [29] = {.lex_state = 258},
  [30] = {.lex_state = 258},
  [31] = {.lex_state = 258},
  [32] = {.lex_state = 258},
  [33] = {.lex_state = 258},
  [34] = {.lex_state = 258},
  [35] = {.lex_state = 258},
  [36] = {.lex_state = 258},
  [37] = {.lex_state = 258},
  [38] = {.lex_state = 258},
  [39] = {.lex_state = 258},
  [40] = {.lex_state = 258},
  [41] = {.lex_state = 258},
  [42] = {.lex_state = 258},
  [43] = {.lex_state = 258},
  [44] = {.lex_state = 258},
  [45] = {.lex_state = 258},
  [46] = {.lex_state = 258},
  [47] = {.lex_state = 258},
  [48] = {.lex_state = 258},
  [49] = {.lex_state = 258},
  [50] = {.lex_state = 258},
  [51] = {.lex_state = 258},
  [52] = {.lex_state = 258},
  [53] = {.lex_state = 258},
  [54] = {.lex_state = 258},
  [55] = {.lex_state = 258},
  [56] = {.lex_state = 258},
  [57] = {.lex_state = 258},
  [58] = {.lex_state = 258},
  [59] = {.lex_state = 258},
  [60] = {.lex_state = 258},
  [61] = {.lex_state = 258},
  [62] = {.lex_state = 258},
  [63] = {.lex_state = 258},
  [64] = {.lex_state = 258},
  [65] = {.lex_state = 258},
  [66] = {.lex_state = 258},
  [67] = {.lex_state = 258},
  [68] = {.lex_state = 258},
  [69] = {.lex_state = 258},
  [70] = {.lex_state = 258},
  [71] = {.lex_state = 258},
  [72] = {.lex_state = 258},
  [73] = {.lex_state = 258},
  [74] = {.lex_state = 258},
  [75] = {.lex_state = 258},
  [76] = {.lex_state = 258},
  [77] = {.lex_state = 258},
  [78] = {.lex_state = 258},
  [79] = {.lex_state = 258},
  [80] = {.lex_state = 258},
  [81] = {.lex_state = 258},
  [82] = {.lex_state = 258},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 258},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 258},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 258},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 258},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 258},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 258},
  [132] = {.lex_state = 258},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 258},
  [135] = {.lex_state = 258},
  [136] = {.lex_state = 258},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 258},
  [141] = {.lex_state = 258},
  [142] = {.lex_state = 258},
  [143] = {.lex_state = 258},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 258},
  [146] = {.lex_state = 258},
  [147] = {.lex_state = 258},
  [148] = {.lex_state = 258},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 258},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 258},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 258},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 258},
  [162] = {.lex_state = 258},
  [163] = {.lex_state = 258},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 258},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 258},
  [171] = {.lex_state = 258},
  [172] = {.lex_state = 258},
  [173] = {.lex_state = 258},
  [174] = {.lex_state = 258},
  [175] = {.lex_state = 258},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 258},
  [186] = {.lex_state = 258},
  [187] = {.lex_state = 258},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 258},
  [191] = {.lex_state = 258},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 258},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 258},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 258},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 258},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 258},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
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
    [aux_sym_call_function_statement_token1] = ACTIONS(1),
    [aux_sym_start_function_statement_token1] = ACTIONS(1),
    [aux_sym_start_function_statement_token2] = ACTIONS(1),
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
    [sym_statement_list] = STATE(214),
    [sym__statement] = STATE(3),
    [sym__statement_end] = STATE(3),
    [sym__empty_statement] = STATE(3),
    [sym_version_statement] = STATE(3),
    [sym_math_statement] = STATE(3),
    [sym_get_statement] = STATE(3),
    [sym_set_statement] = STATE(3),
    [sym_put_var_chr_statement] = STATE(3),
    [sym_put_array_statement] = STATE(3),
    [sym_put_statement] = STATE(3),
    [sym_put_d_string_statement] = STATE(3),
    [sym_put_c_t_statement] = STATE(3),
    [sym_put_bits_statement] = STATE(3),
    [sym__put_statements] = STATE(3),
    [sym_goto_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_call_function_statement] = STATE(3),
    [sym_start_function_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_label_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_continue_statement] = STATE(3),
    [sym_print_statement] = STATE(3),
    [sym_log_statement] = STATE(3),
    [sym_clog_statement] = STATE(3),
    [sym_s_log_statement] = STATE(3),
    [aux_sym_statement_list_repeat1] = STATE(3),
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
    [aux_sym_call_function_statement_token1] = ACTIONS(31),
    [aux_sym_start_function_statement_token1] = ACTIONS(33),
    [aux_sym_for_statement_token1] = ACTIONS(35),
    [aux_sym_label_statement_token1] = ACTIONS(37),
    [aux_sym_break_statement_token1] = ACTIONS(39),
    [aux_sym_continue_statement_token1] = ACTIONS(41),
    [aux_sym_print_statement_token1] = ACTIONS(43),
    [aux_sym_log_statement_token1] = ACTIONS(45),
    [aux_sym_clog_statement_token1] = ACTIONS(47),
    [aux_sym_s_log_statement_token1] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(51), 1,
      aux_sym_if_statement_token2,
    ACTIONS(53), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(55), 1,
      aux_sym_else_statement_token1,
    STATE(121), 1,
      sym_statement_list,
    STATE(122), 1,
      aux_sym_if_statement_repeat1,
    STATE(213), 1,
      sym_elif_statement,
    STATE(221), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [124] = 27,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(61), 6,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_start_function_statement_token2,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(4), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [238] = 27,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      aux_sym_version_statement_token1,
    ACTIONS(74), 1,
      aux_sym_math_statement_token1,
    ACTIONS(77), 1,
      aux_sym_get_statement_token1,
    ACTIONS(80), 1,
      aux_sym_set_statement_token1,
    ACTIONS(83), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(86), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(89), 1,
      aux_sym_put_statement_token1,
    ACTIONS(92), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(95), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(98), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(101), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(104), 1,
      aux_sym_if_statement_token1,
    ACTIONS(109), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(112), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(115), 1,
      aux_sym_for_statement_token1,
    ACTIONS(118), 1,
      aux_sym_label_statement_token1,
    ACTIONS(121), 1,
      aux_sym_break_statement_token1,
    ACTIONS(124), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(127), 1,
      aux_sym_print_statement_token1,
    ACTIONS(130), 1,
      aux_sym_log_statement_token1,
    ACTIONS(133), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(136), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(65), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(107), 6,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_start_function_statement_token2,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(4), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [352] = 29,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(139), 1,
      aux_sym_next_statement_token1,
    ACTIONS(141), 1,
      aux_sym_prev_statement_token1,
    STATE(193), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(29), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [468] = 29,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(139), 1,
      aux_sym_next_statement_token1,
    ACTIONS(141), 1,
      aux_sym_prev_statement_token1,
    STATE(176), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(20), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [584] = 29,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(139), 1,
      aux_sym_next_statement_token1,
    ACTIONS(141), 1,
      aux_sym_prev_statement_token1,
    STATE(169), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(51), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [700] = 29,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(139), 1,
      aux_sym_next_statement_token1,
    ACTIONS(141), 1,
      aux_sym_prev_statement_token1,
    STATE(152), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(78), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [816] = 5,
    ACTIONS(143), 1,
      anon_sym_u,
    ACTIONS(145), 1,
      anon_sym_0,
    STATE(130), 1,
      sym__binary_op,
    ACTIONS(147), 10,
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
    ACTIONS(149), 44,
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
  [884] = 2,
    ACTIONS(153), 10,
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
    ACTIONS(151), 46,
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
  [945] = 27,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    STATE(208), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(155), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [1056] = 3,
    ACTIONS(157), 1,
      anon_sym_0,
    ACTIONS(159), 10,
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
    ACTIONS(161), 44,
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
  [1118] = 2,
    ACTIONS(163), 10,
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
    ACTIONS(165), 44,
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
  [1177] = 27,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(167), 1,
      aux_sym_start_function_statement_token2,
    STATE(220), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [1286] = 2,
    ACTIONS(159), 10,
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
    ACTIONS(161), 44,
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
  [1345] = 27,
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
      aux_sym_call_function_statement_token1,
    ACTIONS(33), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_for_statement_token1,
    ACTIONS(37), 1,
      aux_sym_label_statement_token1,
    ACTIONS(39), 1,
      aux_sym_break_statement_token1,
    ACTIONS(41), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(43), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      aux_sym_log_statement_token1,
    ACTIONS(47), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(49), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(169), 1,
      aux_sym_if_statement_token2,
    STATE(216), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(3), 27,
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
      sym_call_function_statement,
      sym_start_function_statement,
      sym_for_statement,
      sym_label_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_print_statement,
      sym_log_statement,
      sym_clog_statement,
      sym_s_log_statement,
      aux_sym_statement_list_repeat1,
  [1454] = 2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1491] = 2,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(177), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1528] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(181), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1565] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(185), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1602] = 2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(189), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1639] = 2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(193), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1676] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(197), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(201), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1750] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(205), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1787] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(209), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1824] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(213), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1861] = 2,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(217), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1898] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(221), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1935] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(225), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [1972] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(229), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2009] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(233), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2046] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(237), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2083] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(241), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2120] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(245), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2157] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(249), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2194] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2231] = 2,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(257), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2268] = 2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(261), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2305] = 2,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(265), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2342] = 2,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(269), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2379] = 2,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(273), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2416] = 2,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(277), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2453] = 2,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(281), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2490] = 2,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(285), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2527] = 2,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(289), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2564] = 2,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(293), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2601] = 2,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(297), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2638] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(301), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2675] = 2,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(305), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2712] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(309), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2749] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(313), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2786] = 2,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(317), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2823] = 2,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2860] = 2,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(325), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2897] = 2,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(329), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [2934] = 2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(333), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(337), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3008] = 2,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(341), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3045] = 2,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(345), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3082] = 2,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(349), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3119] = 2,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(353), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3156] = 2,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(357), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3193] = 2,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(361), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3230] = 2,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(365), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3267] = 2,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(369), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3304] = 2,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(373), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3341] = 2,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(377), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3378] = 2,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(381), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3415] = 2,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(385), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3452] = 2,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(389), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3489] = 2,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(393), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3526] = 2,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(397), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3563] = 2,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(401), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3600] = 2,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(405), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3637] = 2,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(409), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3674] = 2,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(413), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3711] = 2,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(417), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3748] = 2,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(421), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3785] = 2,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(425), 30,
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
      aux_sym_call_function_statement_token1,
      aux_sym_start_function_statement_token1,
      aux_sym_start_function_statement_token2,
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
  [3822] = 2,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 11,
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
  [3839] = 4,
    ACTIONS(427), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(429), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [3857] = 6,
    ACTIONS(433), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym__statement_end,
    STATE(103), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(120), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3879] = 6,
    ACTIONS(435), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym__statement_end,
    STATE(96), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(123), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3901] = 6,
    ACTIONS(437), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statement_end,
    STATE(84), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(123), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3923] = 6,
    ACTIONS(441), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statement_end,
    STATE(135), 1,
      sym_op_value,
    STATE(137), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3945] = 6,
    ACTIONS(443), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym__statement_end,
    STATE(137), 1,
      sym_variable,
    STATE(172), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3967] = 6,
    ACTIONS(445), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym__statement_end,
    STATE(137), 1,
      sym_variable,
    STATE(174), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3989] = 6,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym__statement_end,
    STATE(86), 1,
      sym_op_value,
    STATE(153), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4011] = 5,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym__statement_end,
    STATE(142), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4030] = 4,
    ACTIONS(455), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(453), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(457), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4047] = 5,
    ACTIONS(459), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym__statement_end,
    STATE(143), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4066] = 5,
    ACTIONS(461), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym__statement_end,
    STATE(145), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4085] = 5,
    ACTIONS(463), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym__statement_end,
    STATE(146), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4104] = 5,
    ACTIONS(465), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym__statement_end,
    STATE(108), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4123] = 5,
    ACTIONS(472), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(123), 1,
      sym_variable,
    ACTIONS(470), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(467), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4142] = 5,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym__statement_end,
    STATE(148), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4161] = 5,
    ACTIONS(476), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym__statement_end,
    STATE(102), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4180] = 4,
    ACTIONS(480), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(478), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(457), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4197] = 5,
    ACTIONS(482), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym__statement_end,
    STATE(141), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4216] = 5,
    ACTIONS(484), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__statement_end,
    STATE(85), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4235] = 5,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statement_end,
    STATE(197), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4254] = 5,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(120), 1,
      sym_variable,
    ACTIONS(491), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(488), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4273] = 5,
    ACTIONS(495), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym__statement_end,
    STATE(154), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4292] = 5,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym__statement_end,
    STATE(163), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4311] = 5,
    ACTIONS(499), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__statement_end,
    STATE(82), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4330] = 5,
    ACTIONS(501), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statement_end,
    STATE(115), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4349] = 5,
    ACTIONS(503), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statement_end,
    STATE(105), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4368] = 5,
    ACTIONS(505), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym__statement_end,
    STATE(170), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4387] = 5,
    ACTIONS(507), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym__statement_end,
    STATE(88), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4406] = 5,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statement_end,
    STATE(171), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4425] = 4,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(511), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(515), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4442] = 5,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statement_end,
    STATE(89), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4461] = 5,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statement_end,
    STATE(87), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4480] = 5,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym__statement_end,
    STATE(187), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4499] = 2,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(524), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4511] = 4,
    STATE(91), 1,
      sym_binary_comparison,
    STATE(132), 1,
      sym_binary_expression,
    STATE(9), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(528), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4527] = 2,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(511), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4539] = 4,
    STATE(91), 1,
      sym_binary_comparison,
    STATE(157), 1,
      sym_binary_expression,
    STATE(9), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(528), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4555] = 2,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(530), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4566] = 6,
    ACTIONS(534), 1,
      aux_sym_if_statement_token2,
    ACTIONS(536), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(538), 1,
      aux_sym_else_statement_token1,
    STATE(126), 1,
      aux_sym_if_statement_repeat1,
    STATE(213), 1,
      sym_elif_statement,
    STATE(218), 1,
      sym_else_statement,
  [4585] = 6,
    ACTIONS(536), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(538), 1,
      aux_sym_else_statement_token1,
    ACTIONS(540), 1,
      aux_sym_if_statement_token2,
    STATE(129), 1,
      aux_sym_if_statement_repeat1,
    STATE(213), 1,
      sym_elif_statement,
    STATE(217), 1,
      sym_else_statement,
  [4604] = 2,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(542), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4615] = 2,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(546), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4626] = 2,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4637] = 6,
    ACTIONS(536), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(538), 1,
      aux_sym_else_statement_token1,
    ACTIONS(550), 1,
      aux_sym_if_statement_token2,
    STATE(129), 1,
      aux_sym_if_statement_repeat1,
    STATE(213), 1,
      sym_elif_statement,
    STATE(215), 1,
      sym_else_statement,
  [4656] = 3,
    STATE(118), 1,
      sym_binary_comparison,
    STATE(9), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(528), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4669] = 3,
    STATE(83), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(120), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4681] = 4,
    ACTIONS(554), 1,
      aux_sym_elif_statement_token1,
    STATE(129), 1,
      aux_sym_if_statement_repeat1,
    STATE(213), 1,
      sym_elif_statement,
    ACTIONS(552), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [4695] = 2,
    STATE(116), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4705] = 3,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4716] = 3,
    ACTIONS(559), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4727] = 2,
    STATE(191), 1,
      sym_variable,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4736] = 3,
    ACTIONS(561), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4747] = 3,
    ACTIONS(563), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4758] = 3,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4769] = 2,
    STATE(212), 1,
      sym_variable,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4778] = 2,
    STATE(189), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4787] = 2,
    STATE(188), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4796] = 3,
    ACTIONS(567), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4807] = 3,
    ACTIONS(569), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4818] = 3,
    ACTIONS(571), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4829] = 3,
    ACTIONS(573), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4840] = 2,
    STATE(107), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4849] = 3,
    ACTIONS(575), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4860] = 3,
    ACTIONS(577), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4871] = 3,
    ACTIONS(579), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4882] = 3,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4893] = 2,
    STATE(95), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4902] = 2,
    STATE(144), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4911] = 2,
    STATE(98), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4920] = 3,
    ACTIONS(583), 1,
      aux_sym_next_statement_token1,
    ACTIONS(585), 1,
      aux_sym_prev_statement_token1,
    STATE(46), 2,
      sym_next_statement,
      sym_prev_statement,
  [4931] = 2,
    STATE(124), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4940] = 3,
    ACTIONS(587), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4951] = 2,
    STATE(104), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4960] = 2,
    STATE(184), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4969] = 3,
    ACTIONS(589), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4980] = 2,
    STATE(97), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4989] = 3,
    ACTIONS(591), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5000] = 2,
    STATE(182), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5009] = 3,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5020] = 3,
    ACTIONS(595), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5031] = 3,
    ACTIONS(597), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5042] = 2,
    STATE(147), 1,
      sym_variable,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5051] = 2,
    STATE(149), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5060] = 2,
    STATE(150), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5069] = 3,
    ACTIONS(599), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5080] = 2,
    STATE(151), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5089] = 3,
    ACTIONS(583), 1,
      aux_sym_next_statement_token1,
    ACTIONS(585), 1,
      aux_sym_prev_statement_token1,
    STATE(30), 2,
      sym_next_statement,
      sym_prev_statement,
  [5100] = 3,
    ACTIONS(601), 1,
      anon_sym_LF,
    STATE(33), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5111] = 3,
    ACTIONS(603), 1,
      anon_sym_LF,
    STATE(80), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5122] = 3,
    ACTIONS(605), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5133] = 3,
    ACTIONS(607), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5144] = 3,
    ACTIONS(609), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5155] = 3,
    ACTIONS(611), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5166] = 3,
    ACTIONS(583), 1,
      aux_sym_next_statement_token1,
    ACTIONS(585), 1,
      aux_sym_prev_statement_token1,
    STATE(53), 2,
      sym_next_statement,
      sym_prev_statement,
  [5177] = 2,
    STATE(100), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5186] = 2,
    STATE(155), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5195] = 2,
    STATE(90), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5204] = 2,
    STATE(92), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5213] = 2,
    STATE(128), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5222] = 2,
    STATE(158), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5231] = 2,
    STATE(181), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5240] = 2,
    STATE(93), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5249] = 3,
    ACTIONS(613), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5260] = 3,
    ACTIONS(615), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5271] = 3,
    ACTIONS(617), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5282] = 2,
    STATE(94), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5291] = 2,
    STATE(164), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5300] = 3,
    ACTIONS(619), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5311] = 3,
    ACTIONS(621), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5322] = 2,
    STATE(180), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5331] = 3,
    ACTIONS(583), 1,
      aux_sym_next_statement_token1,
    ACTIONS(585), 1,
      aux_sym_prev_statement_token1,
    STATE(70), 2,
      sym_next_statement,
      sym_prev_statement,
  [5342] = 2,
    STATE(165), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5351] = 2,
    STATE(166), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5360] = 2,
    STATE(168), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5369] = 3,
    ACTIONS(623), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5380] = 2,
    STATE(131), 1,
      sym_variable,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5389] = 2,
    STATE(173), 1,
      sym_variable,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5398] = 2,
    STATE(175), 1,
      sym_variable,
    ACTIONS(449), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5407] = 2,
    STATE(101), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5416] = 3,
    ACTIONS(625), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5427] = 2,
    STATE(179), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5436] = 2,
    STATE(106), 1,
      sym_variable,
    ACTIONS(431), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5445] = 2,
    STATE(177), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5454] = 3,
    ACTIONS(627), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5465] = 2,
    STATE(178), 1,
      sym_variable,
    ACTIONS(439), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5474] = 1,
    ACTIONS(629), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5480] = 1,
    ACTIONS(631), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5486] = 1,
    ACTIONS(633), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5492] = 1,
    ACTIONS(153), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5498] = 2,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(546), 2,
      sym_comment,
      anon_sym_SEMI,
  [5506] = 1,
    ACTIONS(635), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5512] = 1,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
  [5516] = 1,
    ACTIONS(639), 1,
      aux_sym_if_statement_token2,
  [5520] = 1,
    ACTIONS(641), 1,
      aux_sym_if_statement_token2,
  [5524] = 1,
    ACTIONS(643), 1,
      aux_sym_if_statement_token2,
  [5528] = 1,
    ACTIONS(645), 1,
      aux_sym_if_statement_token2,
  [5532] = 1,
    ACTIONS(647), 1,
      anon_sym_LF,
  [5536] = 1,
    ACTIONS(649), 1,
      aux_sym_start_function_statement_token2,
  [5540] = 1,
    ACTIONS(651), 1,
      aux_sym_if_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 124,
  [SMALL_STATE(4)] = 238,
  [SMALL_STATE(5)] = 352,
  [SMALL_STATE(6)] = 468,
  [SMALL_STATE(7)] = 584,
  [SMALL_STATE(8)] = 700,
  [SMALL_STATE(9)] = 816,
  [SMALL_STATE(10)] = 884,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1056,
  [SMALL_STATE(13)] = 1118,
  [SMALL_STATE(14)] = 1177,
  [SMALL_STATE(15)] = 1286,
  [SMALL_STATE(16)] = 1345,
  [SMALL_STATE(17)] = 1454,
  [SMALL_STATE(18)] = 1491,
  [SMALL_STATE(19)] = 1528,
  [SMALL_STATE(20)] = 1565,
  [SMALL_STATE(21)] = 1602,
  [SMALL_STATE(22)] = 1639,
  [SMALL_STATE(23)] = 1676,
  [SMALL_STATE(24)] = 1713,
  [SMALL_STATE(25)] = 1750,
  [SMALL_STATE(26)] = 1787,
  [SMALL_STATE(27)] = 1824,
  [SMALL_STATE(28)] = 1861,
  [SMALL_STATE(29)] = 1898,
  [SMALL_STATE(30)] = 1935,
  [SMALL_STATE(31)] = 1972,
  [SMALL_STATE(32)] = 2009,
  [SMALL_STATE(33)] = 2046,
  [SMALL_STATE(34)] = 2083,
  [SMALL_STATE(35)] = 2120,
  [SMALL_STATE(36)] = 2157,
  [SMALL_STATE(37)] = 2194,
  [SMALL_STATE(38)] = 2231,
  [SMALL_STATE(39)] = 2268,
  [SMALL_STATE(40)] = 2305,
  [SMALL_STATE(41)] = 2342,
  [SMALL_STATE(42)] = 2379,
  [SMALL_STATE(43)] = 2416,
  [SMALL_STATE(44)] = 2453,
  [SMALL_STATE(45)] = 2490,
  [SMALL_STATE(46)] = 2527,
  [SMALL_STATE(47)] = 2564,
  [SMALL_STATE(48)] = 2601,
  [SMALL_STATE(49)] = 2638,
  [SMALL_STATE(50)] = 2675,
  [SMALL_STATE(51)] = 2712,
  [SMALL_STATE(52)] = 2749,
  [SMALL_STATE(53)] = 2786,
  [SMALL_STATE(54)] = 2823,
  [SMALL_STATE(55)] = 2860,
  [SMALL_STATE(56)] = 2897,
  [SMALL_STATE(57)] = 2934,
  [SMALL_STATE(58)] = 2971,
  [SMALL_STATE(59)] = 3008,
  [SMALL_STATE(60)] = 3045,
  [SMALL_STATE(61)] = 3082,
  [SMALL_STATE(62)] = 3119,
  [SMALL_STATE(63)] = 3156,
  [SMALL_STATE(64)] = 3193,
  [SMALL_STATE(65)] = 3230,
  [SMALL_STATE(66)] = 3267,
  [SMALL_STATE(67)] = 3304,
  [SMALL_STATE(68)] = 3341,
  [SMALL_STATE(69)] = 3378,
  [SMALL_STATE(70)] = 3415,
  [SMALL_STATE(71)] = 3452,
  [SMALL_STATE(72)] = 3489,
  [SMALL_STATE(73)] = 3526,
  [SMALL_STATE(74)] = 3563,
  [SMALL_STATE(75)] = 3600,
  [SMALL_STATE(76)] = 3637,
  [SMALL_STATE(77)] = 3674,
  [SMALL_STATE(78)] = 3711,
  [SMALL_STATE(79)] = 3748,
  [SMALL_STATE(80)] = 3785,
  [SMALL_STATE(81)] = 3822,
  [SMALL_STATE(82)] = 3839,
  [SMALL_STATE(83)] = 3857,
  [SMALL_STATE(84)] = 3879,
  [SMALL_STATE(85)] = 3901,
  [SMALL_STATE(86)] = 3923,
  [SMALL_STATE(87)] = 3945,
  [SMALL_STATE(88)] = 3967,
  [SMALL_STATE(89)] = 3989,
  [SMALL_STATE(90)] = 4011,
  [SMALL_STATE(91)] = 4030,
  [SMALL_STATE(92)] = 4047,
  [SMALL_STATE(93)] = 4066,
  [SMALL_STATE(94)] = 4085,
  [SMALL_STATE(95)] = 4104,
  [SMALL_STATE(96)] = 4123,
  [SMALL_STATE(97)] = 4142,
  [SMALL_STATE(98)] = 4161,
  [SMALL_STATE(99)] = 4180,
  [SMALL_STATE(100)] = 4197,
  [SMALL_STATE(101)] = 4216,
  [SMALL_STATE(102)] = 4235,
  [SMALL_STATE(103)] = 4254,
  [SMALL_STATE(104)] = 4273,
  [SMALL_STATE(105)] = 4292,
  [SMALL_STATE(106)] = 4311,
  [SMALL_STATE(107)] = 4330,
  [SMALL_STATE(108)] = 4349,
  [SMALL_STATE(109)] = 4368,
  [SMALL_STATE(110)] = 4387,
  [SMALL_STATE(111)] = 4406,
  [SMALL_STATE(112)] = 4425,
  [SMALL_STATE(113)] = 4442,
  [SMALL_STATE(114)] = 4461,
  [SMALL_STATE(115)] = 4480,
  [SMALL_STATE(116)] = 4499,
  [SMALL_STATE(117)] = 4511,
  [SMALL_STATE(118)] = 4527,
  [SMALL_STATE(119)] = 4539,
  [SMALL_STATE(120)] = 4555,
  [SMALL_STATE(121)] = 4566,
  [SMALL_STATE(122)] = 4585,
  [SMALL_STATE(123)] = 4604,
  [SMALL_STATE(124)] = 4615,
  [SMALL_STATE(125)] = 4626,
  [SMALL_STATE(126)] = 4637,
  [SMALL_STATE(127)] = 4656,
  [SMALL_STATE(128)] = 4669,
  [SMALL_STATE(129)] = 4681,
  [SMALL_STATE(130)] = 4695,
  [SMALL_STATE(131)] = 4705,
  [SMALL_STATE(132)] = 4716,
  [SMALL_STATE(133)] = 4727,
  [SMALL_STATE(134)] = 4736,
  [SMALL_STATE(135)] = 4747,
  [SMALL_STATE(136)] = 4758,
  [SMALL_STATE(137)] = 4769,
  [SMALL_STATE(138)] = 4778,
  [SMALL_STATE(139)] = 4787,
  [SMALL_STATE(140)] = 4796,
  [SMALL_STATE(141)] = 4807,
  [SMALL_STATE(142)] = 4818,
  [SMALL_STATE(143)] = 4829,
  [SMALL_STATE(144)] = 4840,
  [SMALL_STATE(145)] = 4849,
  [SMALL_STATE(146)] = 4860,
  [SMALL_STATE(147)] = 4871,
  [SMALL_STATE(148)] = 4882,
  [SMALL_STATE(149)] = 4893,
  [SMALL_STATE(150)] = 4902,
  [SMALL_STATE(151)] = 4911,
  [SMALL_STATE(152)] = 4920,
  [SMALL_STATE(153)] = 4931,
  [SMALL_STATE(154)] = 4940,
  [SMALL_STATE(155)] = 4951,
  [SMALL_STATE(156)] = 4960,
  [SMALL_STATE(157)] = 4969,
  [SMALL_STATE(158)] = 4980,
  [SMALL_STATE(159)] = 4989,
  [SMALL_STATE(160)] = 5000,
  [SMALL_STATE(161)] = 5009,
  [SMALL_STATE(162)] = 5020,
  [SMALL_STATE(163)] = 5031,
  [SMALL_STATE(164)] = 5042,
  [SMALL_STATE(165)] = 5051,
  [SMALL_STATE(166)] = 5060,
  [SMALL_STATE(167)] = 5069,
  [SMALL_STATE(168)] = 5080,
  [SMALL_STATE(169)] = 5089,
  [SMALL_STATE(170)] = 5100,
  [SMALL_STATE(171)] = 5111,
  [SMALL_STATE(172)] = 5122,
  [SMALL_STATE(173)] = 5133,
  [SMALL_STATE(174)] = 5144,
  [SMALL_STATE(175)] = 5155,
  [SMALL_STATE(176)] = 5166,
  [SMALL_STATE(177)] = 5177,
  [SMALL_STATE(178)] = 5186,
  [SMALL_STATE(179)] = 5195,
  [SMALL_STATE(180)] = 5204,
  [SMALL_STATE(181)] = 5213,
  [SMALL_STATE(182)] = 5222,
  [SMALL_STATE(183)] = 5231,
  [SMALL_STATE(184)] = 5240,
  [SMALL_STATE(185)] = 5249,
  [SMALL_STATE(186)] = 5260,
  [SMALL_STATE(187)] = 5271,
  [SMALL_STATE(188)] = 5282,
  [SMALL_STATE(189)] = 5291,
  [SMALL_STATE(190)] = 5300,
  [SMALL_STATE(191)] = 5311,
  [SMALL_STATE(192)] = 5322,
  [SMALL_STATE(193)] = 5331,
  [SMALL_STATE(194)] = 5342,
  [SMALL_STATE(195)] = 5351,
  [SMALL_STATE(196)] = 5360,
  [SMALL_STATE(197)] = 5369,
  [SMALL_STATE(198)] = 5380,
  [SMALL_STATE(199)] = 5389,
  [SMALL_STATE(200)] = 5398,
  [SMALL_STATE(201)] = 5407,
  [SMALL_STATE(202)] = 5416,
  [SMALL_STATE(203)] = 5427,
  [SMALL_STATE(204)] = 5436,
  [SMALL_STATE(205)] = 5445,
  [SMALL_STATE(206)] = 5454,
  [SMALL_STATE(207)] = 5465,
  [SMALL_STATE(208)] = 5474,
  [SMALL_STATE(209)] = 5480,
  [SMALL_STATE(210)] = 5486,
  [SMALL_STATE(211)] = 5492,
  [SMALL_STATE(212)] = 5498,
  [SMALL_STATE(213)] = 5506,
  [SMALL_STATE(214)] = 5512,
  [SMALL_STATE(215)] = 5516,
  [SMALL_STATE(216)] = 5520,
  [SMALL_STATE(217)] = 5524,
  [SMALL_STATE(218)] = 5528,
  [SMALL_STATE(219)] = 5532,
  [SMALL_STATE(220)] = 5536,
  [SMALL_STATE(221)] = 5540,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(219),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(4),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(133),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(138),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(139),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(156),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(160),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(183),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(192),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(203),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(207),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(205),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(204),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(117),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(201),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(200),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(113),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(199),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(111),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(109),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(198),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(196),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(195),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(194),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 6, .production_id = 44),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 6, .production_id = 44),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 6, .production_id = 43),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 6, .production_id = 43),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 4, .production_id = 13),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 4, .production_id = 13),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 8, .production_id = 53),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 8, .production_id = 53),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 6, .production_id = 42),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 6, .production_id = 42),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 52),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 52),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 9),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 4, .production_id = 41),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 4, .production_id = 41),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 4, .production_id = 41),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 4, .production_id = 41),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 40),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 40),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 39),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 39),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 6, .production_id = 30),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 6, .production_id = 30),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_end, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_end, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 3, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 3, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 38),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 38),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 37),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 37),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 36),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 36),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 34),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 34),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 33),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 33),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 5, .production_id = 32),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 5, .production_id = 32),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 4, .production_id = 8),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 4, .production_id = 8),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 5, .production_id = 32),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 5, .production_id = 32),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 7),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 15),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 15),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 3, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 3, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 3, .production_id = 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 3, .production_id = 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 31),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 31),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 30),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 30),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 5, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 5, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 5, .production_id = 28),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 5, .production_id = 28),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 8, .production_id = 54),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 8, .production_id = 54),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 46),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 46),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 16),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 16),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 17),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 17),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 26),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 26),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 25),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 25),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 18),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 18),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 19),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 19),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 5, .production_id = 24),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 5, .production_id = 24),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_array_statement, 5, .production_id = 20),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_array_statement, 5, .production_id = 20),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 45),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 45),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 47),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 47),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 48),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 48),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 23),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 23),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 22),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 22),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 7, .production_id = 49),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 7, .production_id = 49),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 3, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 7, .production_id = 50),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 7, .production_id = 50),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 5, .production_id = 17),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 5, .production_id = 17),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 7, .production_id = 51),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 7, .production_id = 51),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_statement, 3, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_statement, 3, .production_id = 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 3, .production_id = 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 3, .production_id = 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 29), SHIFT_REPEAT(125),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 29),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 29),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 21), SHIFT_REPEAT(125),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 21),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 21),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(127),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 10),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 10),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 12),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 12),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_value, 2, .production_id = 14),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_value, 2, .production_id = 14),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 27),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 27), SHIFT_REPEAT(119),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 36),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 11),
  [637] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 35),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
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
