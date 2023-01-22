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
#define STATE_COUNT 259
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 61

enum {
  aux_sym_variable_token1 = 1,
  aux_sym_variable_token2 = 2,
  aux_sym_variable_token3 = 3,
  sym_comment = 4,
  anon_sym_SEMI = 5,
  anon_sym_LF = 6,
  aux_sym_version_statement_token1 = 7,
  aux_sym_math_statement_token1 = 8,
  aux_sym_get_var_chr_statement_token1 = 9,
  aux_sym_get_array_statement_token1 = 10,
  aux_sym_get_statement_token1 = 11,
  aux_sym_get_d_string_statement_token1 = 12,
  aux_sym_get_c_t_statement_token1 = 13,
  aux_sym_get_bits_statement_token1 = 14,
  aux_sym_save_pos_statement_token1 = 15,
  aux_sym_set_statement_token1 = 16,
  aux_sym_put_var_chr_statement_token1 = 17,
  aux_sym_put_array_statement_token1 = 18,
  aux_sym_put_statement_token1 = 19,
  aux_sym_put_d_string_statement_token1 = 20,
  aux_sym_put_c_t_statement_token1 = 21,
  aux_sym_put_bits_statement_token1 = 22,
  aux_sym_goto_statement_token1 = 23,
  aux_sym_goto_statement_token2 = 24,
  aux_sym_goto_statement_token3 = 25,
  aux_sym_goto_statement_token4 = 26,
  aux_sym_goto_statement_token5 = 27,
  aux_sym_goto_statement_token6 = 28,
  aux_sym_if_statement_token1 = 29,
  aux_sym_if_statement_token2 = 30,
  aux_sym_elif_statement_token1 = 31,
  aux_sym_else_statement_token1 = 32,
  anon_sym_u = 33,
  anon_sym_0 = 34,
  anon_sym_LT = 35,
  aux_sym_binary_op_token1 = 36,
  aux_sym_binary_op_token2 = 37,
  aux_sym_binary_op_token3 = 38,
  anon_sym_GT = 39,
  aux_sym_binary_op_token4 = 40,
  aux_sym_binary_op_token5 = 41,
  aux_sym_binary_op_token6 = 42,
  anon_sym_LT_GT = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_BANG_EQ_EQ = 45,
  aux_sym_binary_op_token7 = 46,
  anon_sym_EQ = 47,
  anon_sym_EQ_EQ = 48,
  anon_sym_EQ_EQ_EQ = 49,
  aux_sym_binary_op_token8 = 50,
  aux_sym_binary_op_token9 = 51,
  aux_sym_binary_op_token10 = 52,
  aux_sym_binary_op_token11 = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_LT_EQ = 55,
  anon_sym_AMP = 56,
  anon_sym_AMP_AMP = 57,
  aux_sym_binary_op_token12 = 58,
  aux_sym_binary_op_token13 = 59,
  aux_sym_binary_op_token14 = 60,
  aux_sym_binary_op_token15 = 61,
  anon_sym_CARET = 62,
  anon_sym_CARET_CARET = 63,
  aux_sym_binary_op_token16 = 64,
  anon_sym_PIPE = 65,
  anon_sym_PIPE_PIPE = 66,
  aux_sym_binary_op_token17 = 67,
  anon_sym_PERCENT = 68,
  aux_sym_binary_op_token18 = 69,
  anon_sym_SLASH = 70,
  aux_sym_binary_op_token19 = 71,
  anon_sym_LT_LT = 72,
  aux_sym_binary_op_token20 = 73,
  anon_sym_GT_GT = 74,
  aux_sym_binary_op_token21 = 75,
  anon_sym_BANG = 76,
  aux_sym_binary_op_token22 = 77,
  anon_sym_BANG_BANG = 78,
  anon_sym_TILDE = 79,
  aux_sym_binary_op_token23 = 80,
  aux_sym_binary_op_token24 = 81,
  aux_sym_binary_op_token25 = 82,
  aux_sym_binary_op_token26 = 83,
  aux_sym_binary_op_token27 = 84,
  aux_sym_binary_op_token28 = 85,
  aux_sym_binary_op_token29 = 86,
  aux_sym_binary_op_token30 = 87,
  aux_sym_binary_op_token31 = 88,
  anon_sym_and = 89,
  anon_sym_or = 90,
  aux_sym_call_function_statement_token1 = 91,
  aux_sym_start_function_statement_token1 = 92,
  aux_sym_start_function_statement_token2 = 93,
  aux_sym_next_statement_token1 = 94,
  aux_sym_prev_statement_token1 = 95,
  aux_sym_for_statement_token1 = 96,
  aux_sym_label_statement_token1 = 97,
  aux_sym_break_statement_token1 = 98,
  aux_sym_continue_statement_token1 = 99,
  aux_sym_print_statement_token1 = 100,
  aux_sym_log_statement_token1 = 101,
  aux_sym_clog_statement_token1 = 102,
  aux_sym_s_log_statement_token1 = 103,
  sym_statement_list = 104,
  sym_variable = 105,
  sym__statement = 106,
  sym__statement_end = 107,
  sym__empty_statement = 108,
  sym_version_statement = 109,
  sym_math_statement = 110,
  sym_get_var_chr_statement = 111,
  sym_get_array_statement = 112,
  sym_get_statement = 113,
  sym_get_d_string_statement = 114,
  sym_get_c_t_statement = 115,
  sym_get_bits_statement = 116,
  sym__get_statements = 117,
  sym_save_pos_statement = 118,
  sym_set_statement = 119,
  sym_put_var_chr_statement = 120,
  sym_put_array_statement = 121,
  sym_put_statement = 122,
  sym_put_d_string_statement = 123,
  sym_put_c_t_statement = 124,
  sym_put_bits_statement = 125,
  sym__put_statements = 126,
  sym_goto_statement = 127,
  sym_if_statement = 128,
  sym_elif_statement = 129,
  sym_else_statement = 130,
  sym__comparison_value = 131,
  sym_binary_comparison = 132,
  sym_binary_op = 133,
  sym_binary_expression = 134,
  sym_op_value = 135,
  sym_call_function_statement = 136,
  sym_start_function_statement = 137,
  sym_next_statement = 138,
  sym_prev_statement = 139,
  sym_for_statement = 140,
  sym_label_statement = 141,
  sym_break_statement = 142,
  sym_continue_statement = 143,
  sym_print_statement = 144,
  sym_log_statement = 145,
  sym_clog_statement = 146,
  sym_s_log_statement = 147,
  aux_sym_statement_list_repeat1 = 148,
  aux_sym_put_array_statement_repeat1 = 149,
  aux_sym_if_statement_repeat1 = 150,
  aux_sym_binary_expression_repeat1 = 151,
  aux_sym_call_function_statement_repeat1 = 152,
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
  [aux_sym_get_var_chr_statement_token1] = "getvarchr",
  [aux_sym_get_array_statement_token1] = "getarray",
  [aux_sym_get_statement_token1] = "get",
  [aux_sym_get_d_string_statement_token1] = "getdstring",
  [aux_sym_get_c_t_statement_token1] = "getct",
  [aux_sym_get_bits_statement_token1] = "getbits",
  [aux_sym_save_pos_statement_token1] = "savepos",
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
  [aux_sym_binary_op_token1] = "minor",
  [aux_sym_binary_op_token2] = "lower",
  [aux_sym_binary_op_token3] = "below",
  [anon_sym_GT] = ">",
  [aux_sym_binary_op_token4] = "major",
  [aux_sym_binary_op_token5] = "greater",
  [aux_sym_binary_op_token6] = "above",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [aux_sym_binary_op_token7] = "different",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [aux_sym_binary_op_token8] = "equal",
  [aux_sym_binary_op_token9] = "strcmp",
  [aux_sym_binary_op_token10] = "stricmp",
  [aux_sym_binary_op_token11] = "strcasecmp",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_AMP] = "&&",
  [aux_sym_binary_op_token12] = "and",
  [aux_sym_binary_op_token13] = "strstr",
  [aux_sym_binary_op_token14] = "stristr",
  [aux_sym_binary_op_token15] = "strcasestr",
  [anon_sym_CARET] = "^",
  [anon_sym_CARET_CARET] = "^^",
  [aux_sym_binary_op_token16] = "xor",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_PIPE] = "||",
  [aux_sym_binary_op_token17] = "or",
  [anon_sym_PERCENT] = "%",
  [aux_sym_binary_op_token18] = "mod",
  [anon_sym_SLASH] = "/",
  [aux_sym_binary_op_token19] = "div",
  [anon_sym_LT_LT] = "<<",
  [aux_sym_binary_op_token20] = "shl",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_binary_op_token21] = "shr",
  [anon_sym_BANG] = "!",
  [aux_sym_binary_op_token22] = "not",
  [anon_sym_BANG_BANG] = "!!",
  [anon_sym_TILDE] = "~",
  [aux_sym_binary_op_token23] = "complement",
  [aux_sym_binary_op_token24] = "strncmp",
  [aux_sym_binary_op_token25] = "strnicmp",
  [aux_sym_binary_op_token26] = "strncasecmp",
  [aux_sym_binary_op_token27] = "ext",
  [aux_sym_binary_op_token28] = "extension",
  [aux_sym_binary_op_token29] = "basename",
  [aux_sym_binary_op_token30] = "filepath",
  [aux_sym_binary_op_token31] = "filename",
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
  [sym_get_var_chr_statement] = "get_var_chr_statement",
  [sym_get_array_statement] = "get_array_statement",
  [sym_get_statement] = "get_statement",
  [sym_get_d_string_statement] = "get_d_string_statement",
  [sym_get_c_t_statement] = "get_c_t_statement",
  [sym_get_bits_statement] = "get_bits_statement",
  [sym__get_statements] = "_get_statements",
  [sym_save_pos_statement] = "save_pos_statement",
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
  [sym_binary_op] = "binary_op",
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
  [aux_sym_get_var_chr_statement_token1] = aux_sym_get_var_chr_statement_token1,
  [aux_sym_get_array_statement_token1] = aux_sym_get_array_statement_token1,
  [aux_sym_get_statement_token1] = aux_sym_get_statement_token1,
  [aux_sym_get_d_string_statement_token1] = aux_sym_get_d_string_statement_token1,
  [aux_sym_get_c_t_statement_token1] = aux_sym_get_c_t_statement_token1,
  [aux_sym_get_bits_statement_token1] = aux_sym_get_bits_statement_token1,
  [aux_sym_save_pos_statement_token1] = aux_sym_save_pos_statement_token1,
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
  [aux_sym_binary_op_token1] = aux_sym_binary_op_token1,
  [aux_sym_binary_op_token2] = aux_sym_binary_op_token2,
  [aux_sym_binary_op_token3] = aux_sym_binary_op_token3,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_binary_op_token4] = aux_sym_binary_op_token4,
  [aux_sym_binary_op_token5] = aux_sym_binary_op_token5,
  [aux_sym_binary_op_token6] = aux_sym_binary_op_token6,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_BANG_EQ_EQ] = anon_sym_BANG_EQ_EQ,
  [aux_sym_binary_op_token7] = aux_sym_binary_op_token7,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [aux_sym_binary_op_token8] = aux_sym_binary_op_token8,
  [aux_sym_binary_op_token9] = aux_sym_binary_op_token9,
  [aux_sym_binary_op_token10] = aux_sym_binary_op_token10,
  [aux_sym_binary_op_token11] = aux_sym_binary_op_token11,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [aux_sym_binary_op_token12] = anon_sym_and,
  [aux_sym_binary_op_token13] = aux_sym_binary_op_token13,
  [aux_sym_binary_op_token14] = aux_sym_binary_op_token14,
  [aux_sym_binary_op_token15] = aux_sym_binary_op_token15,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [aux_sym_binary_op_token16] = aux_sym_binary_op_token16,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [aux_sym_binary_op_token17] = anon_sym_or,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_binary_op_token18] = aux_sym_binary_op_token18,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_binary_op_token19] = aux_sym_binary_op_token19,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [aux_sym_binary_op_token20] = aux_sym_binary_op_token20,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_binary_op_token21] = aux_sym_binary_op_token21,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_binary_op_token22] = aux_sym_binary_op_token22,
  [anon_sym_BANG_BANG] = anon_sym_BANG_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_binary_op_token23] = aux_sym_binary_op_token23,
  [aux_sym_binary_op_token24] = aux_sym_binary_op_token24,
  [aux_sym_binary_op_token25] = aux_sym_binary_op_token25,
  [aux_sym_binary_op_token26] = aux_sym_binary_op_token26,
  [aux_sym_binary_op_token27] = aux_sym_binary_op_token27,
  [aux_sym_binary_op_token28] = aux_sym_binary_op_token28,
  [aux_sym_binary_op_token29] = aux_sym_binary_op_token29,
  [aux_sym_binary_op_token30] = aux_sym_binary_op_token30,
  [aux_sym_binary_op_token31] = aux_sym_binary_op_token31,
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
  [sym_get_var_chr_statement] = sym_get_var_chr_statement,
  [sym_get_array_statement] = sym_get_array_statement,
  [sym_get_statement] = sym_get_statement,
  [sym_get_d_string_statement] = sym_get_d_string_statement,
  [sym_get_c_t_statement] = sym_get_c_t_statement,
  [sym_get_bits_statement] = sym_get_bits_statement,
  [sym__get_statements] = sym__get_statements,
  [sym_save_pos_statement] = sym_save_pos_statement,
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
  [sym_binary_op] = sym_binary_op,
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
  [aux_sym_get_var_chr_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_get_array_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_get_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_get_d_string_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_get_c_t_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_get_bits_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_save_pos_statement_token1] = {
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
  [aux_sym_binary_op_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token6] = {
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
  [aux_sym_binary_op_token7] = {
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
  [aux_sym_binary_op_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token11] = {
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
  [aux_sym_binary_op_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token15] = {
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
  [aux_sym_binary_op_token16] = {
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
  [aux_sym_binary_op_token17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token22] = {
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
  [aux_sym_binary_op_token23] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token24] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token25] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token26] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token27] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token28] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token29] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token30] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_op_token31] = {
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
  [sym_get_var_chr_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_get_array_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_get_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_get_d_string_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_get_c_t_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_get_bits_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__get_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_save_pos_statement] = {
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
  [sym_binary_op] = {
    .visible = true,
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
  field_delimiter = 10,
  field_encrypted_size = 11,
  field_file_num = 12,
  field_file_number = 13,
  field_id = 14,
  field_index = 15,
  field_initializer = 16,
  field_left = 17,
  field_length = 18,
  field_message = 19,
  field_name = 20,
  field_offset = 21,
  field_op = 22,
  field_right = 23,
  field_save_variables = 24,
  field_size = 25,
  field_type = 26,
  field_update = 27,
  field_value = 28,
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
  [field_delimiter] = "delimiter",
  [field_encrypted_size] = "encrypted_size",
  [field_file_num] = "file_num",
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
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 3},
  [18] = {.index = 29, .length = 3},
  [19] = {.index = 32, .length = 3},
  [20] = {.index = 35, .length = 3},
  [21] = {.index = 38, .length = 3},
  [22] = {.index = 41, .length = 3},
  [23] = {.index = 44, .length = 3},
  [24] = {.index = 47, .length = 3},
  [25] = {.index = 50, .length = 3},
  [26] = {.index = 53, .length = 3},
  [27] = {.index = 56, .length = 2},
  [28] = {.index = 58, .length = 3},
  [29] = {.index = 61, .length = 3},
  [30] = {.index = 64, .length = 1},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 3},
  [33] = {.index = 70, .length = 2},
  [34] = {.index = 72, .length = 2},
  [35] = {.index = 74, .length = 2},
  [36] = {.index = 76, .length = 3},
  [37] = {.index = 79, .length = 4},
  [38] = {.index = 83, .length = 4},
  [39] = {.index = 87, .length = 4},
  [40] = {.index = 91, .length = 4},
  [41] = {.index = 95, .length = 1},
  [42] = {.index = 96, .length = 2},
  [43] = {.index = 98, .length = 2},
  [44] = {.index = 100, .length = 2},
  [45] = {.index = 102, .length = 3},
  [46] = {.index = 105, .length = 3},
  [47] = {.index = 108, .length = 2},
  [48] = {.index = 110, .length = 4},
  [49] = {.index = 114, .length = 4},
  [50] = {.index = 118, .length = 4},
  [51] = {.index = 122, .length = 3},
  [52] = {.index = 125, .length = 3},
  [53] = {.index = 128, .length = 3},
  [54] = {.index = 131, .length = 4},
  [55] = {.index = 135, .length = 5},
  [56] = {.index = 140, .length = 5},
  [57] = {.index = 145, .length = 5},
  [58] = {.index = 150, .length = 4},
  [59] = {.index = 154, .length = 6},
  [60] = {.index = 160, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_offset, 1},
  [2] =
    {field_message, 1},
  [3] =
    {field_name, 1},
    {field_type, 2},
  [5] =
    {field_length, 2},
    {field_name, 1},
  [7] =
    {field_bits, 2},
    {field_name, 1},
  [9] =
    {field_file_num, 2},
    {field_name, 1},
  [11] =
    {field_name, 1},
    {field_value, 2},
  [13] =
    {field_name, 0},
  [14] =
    {field_file_number, 2},
    {field_offset, 1},
  [16] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
  [19] =
    {field_alternative, 0},
  [20] =
    {field_argument, 0},
  [21] =
    {field_name, 1},
    {field_save_variables, 2},
  [23] =
    {field_op, 0},
    {field_value, 1},
  [25] =
    {field_body, 2},
  [26] =
    {field_left, 1},
    {field_op, 2},
    {field_right, 3},
  [29] =
    {field_file_number, 2},
    {field_name, 1},
    {field_offset, 3},
  [32] =
    {field_array, 3},
    {field_index, 2},
    {field_name, 1},
  [35] =
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [38] =
    {field_file_number, 3},
    {field_length, 2},
    {field_name, 1},
  [41] =
    {field_delimiter, 3},
    {field_name, 1},
    {field_type, 2},
  [44] =
    {field_bits, 2},
    {field_file_number, 3},
    {field_name, 1},
  [47] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [50] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
  [53] =
    {field_array, 1},
    {field_index, 2},
    {field_name, 3, .inherited = true},
  [56] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [58] =
    {field_char, 3},
    {field_name, 1},
    {field_type, 2},
  [61] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [64] =
    {field_condition, 1},
  [65] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [67] =
    {field_argument, 3, .inherited = true},
    {field_name, 1},
    {field_save_variables, 2},
  [70] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [72] =
    {field_body, 3},
    {field_name, 1},
  [74] =
    {field_initializer, 2},
    {field_name, 1},
  [76] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [79] =
    {field_file_number, 2},
    {field_name, 1},
    {field_offset, 3},
    {field_type, 4},
  [83] =
    {field_delimiter, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [87] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
    {field_type, 4},
  [91] =
    {field_char, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [95] =
    {field_consequence, 2},
  [96] =
    {field_condition, 1},
    {field_consequence, 3},
  [98] =
    {field_alternative, 3},
    {field_condition, 1},
  [100] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [102] =
    {field_body, 4},
    {field_initializer, 2},
    {field_name, 1},
  [105] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [108] =
    {field_name, 1},
    {field_update, 2},
  [110] =
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [114] =
    {field_compressed_size, 3},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [118] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [122] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [125] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [128] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [131] =
    {field_body, 5},
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [135] =
    {field_encrypted_size, 5},
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [140] =
    {field_compressed_size, 3},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [145] =
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [150] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
  [154] =
    {field_compressed_size, 3},
    {field_encrypted_size, 6},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [160] =
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
  [92] = 13,
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
  [138] = 13,
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
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 158,
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
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 13,
  [248] = 143,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(283);
      if (lookahead == '!') ADVANCE(371);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(363);
      if (lookahead == '&') ADVANCE(351);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '>') ADVANCE(334);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == '^') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == '|') ADVANCE(360);
      if (lookahead == '~') ADVANCE(374);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(267);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == ';') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(371);
      if (lookahead == '%') ADVANCE(363);
      if (lookahead == '&') ADVANCE(351);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '>') ADVANCE(334);
      if (lookahead == '^') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == '|') ADVANCE(360);
      if (lookahead == '~') ADVANCE(374);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(225);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(352);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(286);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(297);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(296);
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
      if (lookahead == 'D') ADVANCE(353);
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(323);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(322);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(319);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(266);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(320);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(361);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 58:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 60:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(324);
      END_STATE();
    case 102:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 103:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(106);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(366);
      END_STATE();
    case 105:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 106:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 107:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(270);
      END_STATE();
    case 108:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 109:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(396);
      END_STATE();
    case 110:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(396);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 111:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 112:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 113:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 114:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 115:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      END_STATE();
    case 116:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 117:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 134:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(186);
      END_STATE();
    case 135:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(393);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(266);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 148:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 149:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(200);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 153:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 193:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 194:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 195:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 196:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      END_STATE();
    case 197:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 199:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 200:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 201:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(266);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 266:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 267:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 268:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 269:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 270:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 271:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 272:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(390);
      END_STATE();
    case 273:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 274:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 275:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 276:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(333);
      END_STATE();
    case 277:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 278:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 279:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 280:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 281:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 282:
      if (eof) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(179);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      END_STATE();
    case 283:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_get_var_chr_statement_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_get_array_statement_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_get_d_string_statement_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_get_c_t_statement_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_get_bits_statement_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_save_pos_statement_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_put_var_chr_statement_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_put_array_statement_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_put_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_put_d_string_statement_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_put_c_t_statement_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_put_bits_statement_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(367);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_binary_op_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_binary_op_token2);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_binary_op_token3);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(369);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_binary_op_token4);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_binary_op_token5);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_binary_op_token6);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_binary_op_token7);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_binary_op_token8);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_binary_op_token9);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_binary_op_token10);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_binary_op_token11);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_binary_op_token12);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_binary_op_token13);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_binary_op_token14);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_binary_op_token15);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_binary_op_token16);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_binary_op_token17);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_binary_op_token18);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_binary_op_token19);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_binary_op_token20);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_binary_op_token21);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(373);
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_binary_op_token22);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_binary_op_token23);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_binary_op_token24);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_binary_op_token25);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_binary_op_token26);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_binary_op_token28);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_binary_op_token29);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_binary_op_token30);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_binary_op_token31);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_call_function_statement_token1);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token2);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_next_statement_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_prev_statement_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_label_statement_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_break_statement_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_continue_statement_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_log_statement_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_clog_statement_token1);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_s_log_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 282},
  [2] = {.lex_state = 282},
  [3] = {.lex_state = 282},
  [4] = {.lex_state = 282},
  [5] = {.lex_state = 282},
  [6] = {.lex_state = 282},
  [7] = {.lex_state = 282},
  [8] = {.lex_state = 282},
  [9] = {.lex_state = 282},
  [10] = {.lex_state = 282},
  [11] = {.lex_state = 282},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 282},
  [18] = {.lex_state = 282},
  [19] = {.lex_state = 282},
  [20] = {.lex_state = 282},
  [21] = {.lex_state = 282},
  [22] = {.lex_state = 282},
  [23] = {.lex_state = 282},
  [24] = {.lex_state = 282},
  [25] = {.lex_state = 282},
  [26] = {.lex_state = 282},
  [27] = {.lex_state = 282},
  [28] = {.lex_state = 282},
  [29] = {.lex_state = 282},
  [30] = {.lex_state = 282},
  [31] = {.lex_state = 282},
  [32] = {.lex_state = 282},
  [33] = {.lex_state = 282},
  [34] = {.lex_state = 282},
  [35] = {.lex_state = 282},
  [36] = {.lex_state = 282},
  [37] = {.lex_state = 282},
  [38] = {.lex_state = 282},
  [39] = {.lex_state = 282},
  [40] = {.lex_state = 282},
  [41] = {.lex_state = 282},
  [42] = {.lex_state = 282},
  [43] = {.lex_state = 282},
  [44] = {.lex_state = 282},
  [45] = {.lex_state = 282},
  [46] = {.lex_state = 282},
  [47] = {.lex_state = 282},
  [48] = {.lex_state = 282},
  [49] = {.lex_state = 282},
  [50] = {.lex_state = 282},
  [51] = {.lex_state = 282},
  [52] = {.lex_state = 282},
  [53] = {.lex_state = 282},
  [54] = {.lex_state = 282},
  [55] = {.lex_state = 282},
  [56] = {.lex_state = 282},
  [57] = {.lex_state = 282},
  [58] = {.lex_state = 282},
  [59] = {.lex_state = 282},
  [60] = {.lex_state = 282},
  [61] = {.lex_state = 282},
  [62] = {.lex_state = 282},
  [63] = {.lex_state = 282},
  [64] = {.lex_state = 282},
  [65] = {.lex_state = 282},
  [66] = {.lex_state = 282},
  [67] = {.lex_state = 282},
  [68] = {.lex_state = 282},
  [69] = {.lex_state = 282},
  [70] = {.lex_state = 282},
  [71] = {.lex_state = 282},
  [72] = {.lex_state = 282},
  [73] = {.lex_state = 282},
  [74] = {.lex_state = 282},
  [75] = {.lex_state = 282},
  [76] = {.lex_state = 282},
  [77] = {.lex_state = 282},
  [78] = {.lex_state = 282},
  [79] = {.lex_state = 282},
  [80] = {.lex_state = 282},
  [81] = {.lex_state = 282},
  [82] = {.lex_state = 282},
  [83] = {.lex_state = 282},
  [84] = {.lex_state = 282},
  [85] = {.lex_state = 282},
  [86] = {.lex_state = 282},
  [87] = {.lex_state = 282},
  [88] = {.lex_state = 282},
  [89] = {.lex_state = 282},
  [90] = {.lex_state = 282},
  [91] = {.lex_state = 282},
  [92] = {.lex_state = 282},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 282},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 282},
  [103] = {.lex_state = 282},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 282},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 282},
  [133] = {.lex_state = 282},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 282},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 282},
  [150] = {.lex_state = 282},
  [151] = {.lex_state = 282},
  [152] = {.lex_state = 282},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 282},
  [155] = {.lex_state = 282},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 282},
  [162] = {.lex_state = 282},
  [163] = {.lex_state = 282},
  [164] = {.lex_state = 282},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 282},
  [167] = {.lex_state = 282},
  [168] = {.lex_state = 282},
  [169] = {.lex_state = 282},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 282},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 282},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 282},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 282},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 282},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 282},
  [192] = {.lex_state = 282},
  [193] = {.lex_state = 282},
  [194] = {.lex_state = 282},
  [195] = {.lex_state = 282},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 282},
  [198] = {.lex_state = 282},
  [199] = {.lex_state = 282},
  [200] = {.lex_state = 282},
  [201] = {.lex_state = 282},
  [202] = {.lex_state = 282},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 282},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 282},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 282},
  [220] = {.lex_state = 282},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 282},
  [223] = {.lex_state = 282},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 282},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 282},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 282},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 282},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 282},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_variable_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_version_statement_token1] = ACTIONS(1),
    [aux_sym_math_statement_token1] = ACTIONS(1),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(1),
    [aux_sym_get_array_statement_token1] = ACTIONS(1),
    [aux_sym_get_statement_token1] = ACTIONS(1),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(1),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(1),
    [aux_sym_get_bits_statement_token1] = ACTIONS(1),
    [aux_sym_save_pos_statement_token1] = ACTIONS(1),
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
    [aux_sym_binary_op_token1] = ACTIONS(1),
    [aux_sym_binary_op_token2] = ACTIONS(1),
    [aux_sym_binary_op_token3] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_binary_op_token4] = ACTIONS(1),
    [aux_sym_binary_op_token5] = ACTIONS(1),
    [aux_sym_binary_op_token6] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [aux_sym_binary_op_token7] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [aux_sym_binary_op_token8] = ACTIONS(1),
    [aux_sym_binary_op_token9] = ACTIONS(1),
    [aux_sym_binary_op_token10] = ACTIONS(1),
    [aux_sym_binary_op_token11] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [aux_sym_binary_op_token12] = ACTIONS(1),
    [aux_sym_binary_op_token13] = ACTIONS(1),
    [aux_sym_binary_op_token14] = ACTIONS(1),
    [aux_sym_binary_op_token15] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [aux_sym_binary_op_token16] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [aux_sym_binary_op_token17] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_binary_op_token18] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_binary_op_token19] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym_binary_op_token20] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym_binary_op_token21] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_binary_op_token22] = ACTIONS(1),
    [anon_sym_BANG_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_binary_op_token23] = ACTIONS(1),
    [aux_sym_binary_op_token24] = ACTIONS(1),
    [aux_sym_binary_op_token25] = ACTIONS(1),
    [aux_sym_binary_op_token26] = ACTIONS(1),
    [aux_sym_binary_op_token27] = ACTIONS(1),
    [aux_sym_binary_op_token28] = ACTIONS(1),
    [aux_sym_binary_op_token29] = ACTIONS(1),
    [aux_sym_binary_op_token30] = ACTIONS(1),
    [aux_sym_binary_op_token31] = ACTIONS(1),
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
    [sym_statement_list] = STATE(252),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__statement_end] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_version_statement] = STATE(2),
    [sym_math_statement] = STATE(2),
    [sym_get_var_chr_statement] = STATE(2),
    [sym_get_array_statement] = STATE(2),
    [sym_get_statement] = STATE(2),
    [sym_get_d_string_statement] = STATE(2),
    [sym_get_c_t_statement] = STATE(2),
    [sym_get_bits_statement] = STATE(2),
    [sym__get_statements] = STATE(2),
    [sym_save_pos_statement] = STATE(2),
    [sym_set_statement] = STATE(2),
    [sym_put_var_chr_statement] = STATE(2),
    [sym_put_array_statement] = STATE(2),
    [sym_put_statement] = STATE(2),
    [sym_put_d_string_statement] = STATE(2),
    [sym_put_c_t_statement] = STATE(2),
    [sym_put_bits_statement] = STATE(2),
    [sym__put_statements] = STATE(2),
    [sym_goto_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_call_function_statement] = STATE(2),
    [sym_start_function_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_label_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_print_statement] = STATE(2),
    [sym_log_statement] = STATE(2),
    [sym_clog_statement] = STATE(2),
    [sym_s_log_statement] = STATE(2),
    [aux_sym_statement_list_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(68),
    [aux_sym_version_statement_token1] = ACTIONS(71),
    [aux_sym_math_statement_token1] = ACTIONS(74),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(77),
    [aux_sym_get_array_statement_token1] = ACTIONS(80),
    [aux_sym_get_statement_token1] = ACTIONS(83),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(86),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(89),
    [aux_sym_get_bits_statement_token1] = ACTIONS(92),
    [aux_sym_save_pos_statement_token1] = ACTIONS(95),
    [aux_sym_set_statement_token1] = ACTIONS(98),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(101),
    [aux_sym_put_array_statement_token1] = ACTIONS(104),
    [aux_sym_put_statement_token1] = ACTIONS(107),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(110),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(113),
    [aux_sym_put_bits_statement_token1] = ACTIONS(116),
    [aux_sym_goto_statement_token1] = ACTIONS(119),
    [aux_sym_if_statement_token1] = ACTIONS(122),
    [aux_sym_if_statement_token2] = ACTIONS(125),
    [aux_sym_elif_statement_token1] = ACTIONS(125),
    [aux_sym_else_statement_token1] = ACTIONS(125),
    [aux_sym_call_function_statement_token1] = ACTIONS(127),
    [aux_sym_start_function_statement_token1] = ACTIONS(130),
    [aux_sym_start_function_statement_token2] = ACTIONS(125),
    [aux_sym_next_statement_token1] = ACTIONS(125),
    [aux_sym_prev_statement_token1] = ACTIONS(125),
    [aux_sym_for_statement_token1] = ACTIONS(133),
    [aux_sym_label_statement_token1] = ACTIONS(136),
    [aux_sym_break_statement_token1] = ACTIONS(139),
    [aux_sym_continue_statement_token1] = ACTIONS(142),
    [aux_sym_print_statement_token1] = ACTIONS(145),
    [aux_sym_log_statement_token1] = ACTIONS(148),
    [aux_sym_clog_statement_token1] = ACTIONS(151),
    [aux_sym_s_log_statement_token1] = ACTIONS(154),
  },
  [3] = {
    [sym_statement_list] = STATE(139),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_elif_statement] = STATE(249),
    [sym_else_statement] = STATE(257),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [aux_sym_if_statement_repeat1] = STATE(140),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_if_statement_token2] = ACTIONS(157),
    [aux_sym_elif_statement_token1] = ACTIONS(159),
    [aux_sym_else_statement_token1] = ACTIONS(161),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym__statement_end] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_version_statement] = STATE(2),
    [sym_math_statement] = STATE(2),
    [sym_get_var_chr_statement] = STATE(2),
    [sym_get_array_statement] = STATE(2),
    [sym_get_statement] = STATE(2),
    [sym_get_d_string_statement] = STATE(2),
    [sym_get_c_t_statement] = STATE(2),
    [sym_get_bits_statement] = STATE(2),
    [sym__get_statements] = STATE(2),
    [sym_save_pos_statement] = STATE(2),
    [sym_set_statement] = STATE(2),
    [sym_put_var_chr_statement] = STATE(2),
    [sym_put_array_statement] = STATE(2),
    [sym_put_statement] = STATE(2),
    [sym_put_d_string_statement] = STATE(2),
    [sym_put_c_t_statement] = STATE(2),
    [sym_put_bits_statement] = STATE(2),
    [sym__put_statements] = STATE(2),
    [sym_goto_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_call_function_statement] = STATE(2),
    [sym_start_function_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_label_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_print_statement] = STATE(2),
    [sym_log_statement] = STATE(2),
    [sym_clog_statement] = STATE(2),
    [sym_s_log_statement] = STATE(2),
    [aux_sym_statement_list_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(165),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_if_statement_token2] = ACTIONS(167),
    [aux_sym_elif_statement_token1] = ACTIONS(167),
    [aux_sym_else_statement_token1] = ACTIONS(167),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_start_function_statement_token2] = ACTIONS(167),
    [aux_sym_next_statement_token1] = ACTIONS(167),
    [aux_sym_prev_statement_token1] = ACTIONS(167),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [5] = {
    [sym_statement_list] = STATE(153),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_next_statement] = STATE(23),
    [sym_prev_statement] = STATE(23),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_next_statement_token1] = ACTIONS(169),
    [aux_sym_prev_statement_token1] = ACTIONS(171),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [6] = {
    [sym_statement_list] = STATE(203),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_next_statement] = STATE(53),
    [sym_prev_statement] = STATE(53),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_next_statement_token1] = ACTIONS(169),
    [aux_sym_prev_statement_token1] = ACTIONS(171),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [7] = {
    [sym_statement_list] = STATE(230),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_next_statement] = STATE(30),
    [sym_prev_statement] = STATE(30),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_next_statement_token1] = ACTIONS(169),
    [aux_sym_prev_statement_token1] = ACTIONS(171),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [8] = {
    [sym_statement_list] = STATE(174),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_next_statement] = STATE(42),
    [sym_prev_statement] = STATE(42),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_next_statement_token1] = ACTIONS(169),
    [aux_sym_prev_statement_token1] = ACTIONS(171),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [9] = {
    [sym_statement_list] = STATE(244),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_if_statement_token2] = ACTIONS(173),
    [aux_sym_elif_statement_token1] = ACTIONS(173),
    [aux_sym_else_statement_token1] = ACTIONS(173),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [10] = {
    [sym_statement_list] = STATE(258),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_start_function_statement_token2] = ACTIONS(175),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
  [11] = {
    [sym_statement_list] = STATE(253),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_var_chr_statement] = STATE(4),
    [sym_get_array_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
    [sym_get_d_string_statement] = STATE(4),
    [sym_get_c_t_statement] = STATE(4),
    [sym_get_bits_statement] = STATE(4),
    [sym__get_statements] = STATE(4),
    [sym_save_pos_statement] = STATE(4),
    [sym_set_statement] = STATE(4),
    [sym_put_var_chr_statement] = STATE(4),
    [sym_put_array_statement] = STATE(4),
    [sym_put_statement] = STATE(4),
    [sym_put_d_string_statement] = STATE(4),
    [sym_put_c_t_statement] = STATE(4),
    [sym_put_bits_statement] = STATE(4),
    [sym__put_statements] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_call_function_statement] = STATE(4),
    [sym_start_function_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_label_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_print_statement] = STATE(4),
    [sym_log_statement] = STATE(4),
    [sym_clog_statement] = STATE(4),
    [sym_s_log_statement] = STATE(4),
    [aux_sym_statement_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_var_chr_statement_token1] = ACTIONS(11),
    [aux_sym_get_array_statement_token1] = ACTIONS(13),
    [aux_sym_get_statement_token1] = ACTIONS(15),
    [aux_sym_get_d_string_statement_token1] = ACTIONS(17),
    [aux_sym_get_c_t_statement_token1] = ACTIONS(19),
    [aux_sym_get_bits_statement_token1] = ACTIONS(21),
    [aux_sym_save_pos_statement_token1] = ACTIONS(23),
    [aux_sym_set_statement_token1] = ACTIONS(25),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(27),
    [aux_sym_put_array_statement_token1] = ACTIONS(29),
    [aux_sym_put_statement_token1] = ACTIONS(31),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(33),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(35),
    [aux_sym_put_bits_statement_token1] = ACTIONS(37),
    [aux_sym_goto_statement_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [aux_sym_if_statement_token2] = ACTIONS(177),
    [aux_sym_call_function_statement_token1] = ACTIONS(43),
    [aux_sym_start_function_statement_token1] = ACTIONS(45),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_label_statement_token1] = ACTIONS(49),
    [aux_sym_break_statement_token1] = ACTIONS(51),
    [aux_sym_continue_statement_token1] = ACTIONS(53),
    [aux_sym_print_statement_token1] = ACTIONS(55),
    [aux_sym_log_statement_token1] = ACTIONS(57),
    [aux_sym_clog_statement_token1] = ACTIONS(59),
    [aux_sym_s_log_statement_token1] = ACTIONS(61),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(179), 1,
      anon_sym_u,
    ACTIONS(181), 1,
      anon_sym_0,
    STATE(146), 1,
      sym_binary_op,
    ACTIONS(183), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym_binary_op_token27,
    ACTIONS(185), 44,
      aux_sym_binary_op_token1,
      aux_sym_binary_op_token2,
      aux_sym_binary_op_token3,
      aux_sym_binary_op_token4,
      aux_sym_binary_op_token5,
      aux_sym_binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym_binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym_binary_op_token8,
      aux_sym_binary_op_token9,
      aux_sym_binary_op_token10,
      aux_sym_binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym_binary_op_token12,
      aux_sym_binary_op_token13,
      aux_sym_binary_op_token14,
      aux_sym_binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym_binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym_binary_op_token17,
      anon_sym_PERCENT,
      aux_sym_binary_op_token18,
      anon_sym_SLASH,
      aux_sym_binary_op_token19,
      anon_sym_LT_LT,
      aux_sym_binary_op_token20,
      anon_sym_GT_GT,
      aux_sym_binary_op_token21,
      aux_sym_binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym_binary_op_token23,
      aux_sym_binary_op_token24,
      aux_sym_binary_op_token25,
      aux_sym_binary_op_token26,
      aux_sym_binary_op_token28,
      aux_sym_binary_op_token29,
      aux_sym_binary_op_token30,
      aux_sym_binary_op_token31,
  [68] = 2,
    ACTIONS(189), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym_binary_op_token27,
    ACTIONS(187), 46,
      anon_sym_u,
      anon_sym_0,
      aux_sym_binary_op_token1,
      aux_sym_binary_op_token2,
      aux_sym_binary_op_token3,
      aux_sym_binary_op_token4,
      aux_sym_binary_op_token5,
      aux_sym_binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym_binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym_binary_op_token8,
      aux_sym_binary_op_token9,
      aux_sym_binary_op_token10,
      aux_sym_binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym_binary_op_token12,
      aux_sym_binary_op_token13,
      aux_sym_binary_op_token14,
      aux_sym_binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym_binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym_binary_op_token17,
      anon_sym_PERCENT,
      aux_sym_binary_op_token18,
      anon_sym_SLASH,
      aux_sym_binary_op_token19,
      anon_sym_LT_LT,
      aux_sym_binary_op_token20,
      anon_sym_GT_GT,
      aux_sym_binary_op_token21,
      aux_sym_binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym_binary_op_token23,
      aux_sym_binary_op_token24,
      aux_sym_binary_op_token25,
      aux_sym_binary_op_token26,
      aux_sym_binary_op_token28,
      aux_sym_binary_op_token29,
      aux_sym_binary_op_token30,
      aux_sym_binary_op_token31,
  [129] = 3,
    ACTIONS(191), 1,
      anon_sym_0,
    ACTIONS(193), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym_binary_op_token27,
    ACTIONS(195), 44,
      aux_sym_binary_op_token1,
      aux_sym_binary_op_token2,
      aux_sym_binary_op_token3,
      aux_sym_binary_op_token4,
      aux_sym_binary_op_token5,
      aux_sym_binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym_binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym_binary_op_token8,
      aux_sym_binary_op_token9,
      aux_sym_binary_op_token10,
      aux_sym_binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym_binary_op_token12,
      aux_sym_binary_op_token13,
      aux_sym_binary_op_token14,
      aux_sym_binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym_binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym_binary_op_token17,
      anon_sym_PERCENT,
      aux_sym_binary_op_token18,
      anon_sym_SLASH,
      aux_sym_binary_op_token19,
      anon_sym_LT_LT,
      aux_sym_binary_op_token20,
      anon_sym_GT_GT,
      aux_sym_binary_op_token21,
      aux_sym_binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym_binary_op_token23,
      aux_sym_binary_op_token24,
      aux_sym_binary_op_token25,
      aux_sym_binary_op_token26,
      aux_sym_binary_op_token28,
      aux_sym_binary_op_token29,
      aux_sym_binary_op_token30,
      aux_sym_binary_op_token31,
  [191] = 2,
    ACTIONS(197), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym_binary_op_token27,
    ACTIONS(199), 44,
      aux_sym_binary_op_token1,
      aux_sym_binary_op_token2,
      aux_sym_binary_op_token3,
      aux_sym_binary_op_token4,
      aux_sym_binary_op_token5,
      aux_sym_binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym_binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym_binary_op_token8,
      aux_sym_binary_op_token9,
      aux_sym_binary_op_token10,
      aux_sym_binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym_binary_op_token12,
      aux_sym_binary_op_token13,
      aux_sym_binary_op_token14,
      aux_sym_binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym_binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym_binary_op_token17,
      anon_sym_PERCENT,
      aux_sym_binary_op_token18,
      anon_sym_SLASH,
      aux_sym_binary_op_token19,
      anon_sym_LT_LT,
      aux_sym_binary_op_token20,
      anon_sym_GT_GT,
      aux_sym_binary_op_token21,
      aux_sym_binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym_binary_op_token23,
      aux_sym_binary_op_token24,
      aux_sym_binary_op_token25,
      aux_sym_binary_op_token26,
      aux_sym_binary_op_token28,
      aux_sym_binary_op_token29,
      aux_sym_binary_op_token30,
      aux_sym_binary_op_token31,
  [250] = 2,
    ACTIONS(193), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym_binary_op_token27,
    ACTIONS(195), 44,
      aux_sym_binary_op_token1,
      aux_sym_binary_op_token2,
      aux_sym_binary_op_token3,
      aux_sym_binary_op_token4,
      aux_sym_binary_op_token5,
      aux_sym_binary_op_token6,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ_EQ,
      aux_sym_binary_op_token7,
      anon_sym_EQ_EQ_EQ,
      aux_sym_binary_op_token8,
      aux_sym_binary_op_token9,
      aux_sym_binary_op_token10,
      aux_sym_binary_op_token11,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      aux_sym_binary_op_token12,
      aux_sym_binary_op_token13,
      aux_sym_binary_op_token14,
      aux_sym_binary_op_token15,
      anon_sym_CARET_CARET,
      aux_sym_binary_op_token16,
      anon_sym_PIPE_PIPE,
      aux_sym_binary_op_token17,
      anon_sym_PERCENT,
      aux_sym_binary_op_token18,
      anon_sym_SLASH,
      aux_sym_binary_op_token19,
      anon_sym_LT_LT,
      aux_sym_binary_op_token20,
      anon_sym_GT_GT,
      aux_sym_binary_op_token21,
      aux_sym_binary_op_token22,
      anon_sym_BANG_BANG,
      anon_sym_TILDE,
      aux_sym_binary_op_token23,
      aux_sym_binary_op_token24,
      aux_sym_binary_op_token25,
      aux_sym_binary_op_token26,
      aux_sym_binary_op_token28,
      aux_sym_binary_op_token29,
      aux_sym_binary_op_token30,
      aux_sym_binary_op_token31,
  [309] = 2,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(203), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [352] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(207), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [395] = 2,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(211), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [438] = 2,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(215), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [481] = 2,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(219), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [524] = 2,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(223), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [567] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(227), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [610] = 2,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(231), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [653] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(235), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [696] = 2,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(239), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [739] = 2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(243), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [782] = 2,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(247), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [825] = 2,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(251), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [868] = 2,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(255), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [911] = 2,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(259), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [954] = 2,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(263), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [997] = 2,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(267), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1040] = 2,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(271), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1083] = 2,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(275), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1126] = 2,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(279), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1169] = 2,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(283), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1212] = 2,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(287), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1255] = 2,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(291), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1298] = 2,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(295), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1341] = 2,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(299), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1384] = 2,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(303), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1427] = 2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(307), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1470] = 2,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(311), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1513] = 2,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(315), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1556] = 2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(319), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1599] = 2,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(323), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1642] = 2,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(327), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1685] = 2,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(331), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1728] = 2,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(335), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1771] = 2,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(339), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1814] = 2,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(343), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1857] = 2,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(347), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1900] = 2,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(351), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1943] = 2,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(355), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [1986] = 2,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(359), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2029] = 2,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(363), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2072] = 2,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(367), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2115] = 2,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(371), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2158] = 2,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(375), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2201] = 2,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(379), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2244] = 2,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(383), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2287] = 2,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(387), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2330] = 2,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(391), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2373] = 2,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(395), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(399), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2459] = 2,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(403), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2502] = 2,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(407), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2545] = 2,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(411), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2588] = 2,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(415), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2631] = 2,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(419), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2674] = 2,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(423), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2717] = 2,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(427), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2760] = 2,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(431), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2803] = 2,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(435), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2846] = 2,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(439), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2889] = 2,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(443), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2932] = 2,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(447), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [2975] = 2,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(451), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3018] = 2,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(455), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3061] = 2,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(459), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3104] = 2,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(463), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3147] = 2,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(467), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3190] = 2,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(471), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3233] = 2,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(475), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3276] = 2,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(479), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3319] = 2,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(483), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3362] = 2,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(487), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3405] = 2,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(491), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3448] = 2,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(495), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3491] = 2,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(499), 36,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_var_chr_statement_token1,
      aux_sym_get_array_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_get_d_string_statement_token1,
      aux_sym_get_c_t_statement_token1,
      aux_sym_get_bits_statement_token1,
      aux_sym_save_pos_statement_token1,
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
  [3534] = 2,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 11,
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
  [3551] = 6,
    ACTIONS(503), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statement_end,
    STATE(100), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(141), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3573] = 4,
    ACTIONS(505), 1,
      anon_sym_LF,
    STATE(33), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(507), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [3591] = 6,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym__statement_end,
    STATE(97), 1,
      sym_op_value,
    STATE(175), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3613] = 6,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym__statement_end,
    STATE(158), 1,
      sym_variable,
    STATE(209), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3635] = 6,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym__statement_end,
    STATE(154), 1,
      sym_op_value,
    STATE(158), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3657] = 6,
    ACTIONS(517), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym__statement_end,
    STATE(112), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(136), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3679] = 6,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym__statement_end,
    STATE(158), 1,
      sym_variable,
    STATE(207), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3701] = 6,
    ACTIONS(521), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym__statement_end,
    STATE(123), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(141), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3723] = 5,
    ACTIONS(525), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym__statement_end,
    STATE(180), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3742] = 4,
    ACTIONS(529), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(527), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(531), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3759] = 4,
    ACTIONS(535), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(533), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(531), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3776] = 5,
    ACTIONS(537), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statement_end,
    STATE(149), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3795] = 5,
    ACTIONS(539), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym__statement_end,
    STATE(220), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3814] = 5,
    ACTIONS(541), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statement_end,
    STATE(95), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3833] = 5,
    ACTIONS(543), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym__statement_end,
    STATE(99), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3852] = 5,
    ACTIONS(545), 1,
      anon_sym_LF,
    STATE(90), 1,
      sym__statement_end,
    STATE(192), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3871] = 5,
    ACTIONS(547), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym__statement_end,
    STATE(162), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3890] = 5,
    ACTIONS(549), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym__statement_end,
    STATE(161), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3909] = 5,
    ACTIONS(551), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statement_end,
    STATE(163), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3928] = 5,
    ACTIONS(558), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(136), 1,
      sym_variable,
    ACTIONS(556), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(553), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3947] = 5,
    ACTIONS(560), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym__statement_end,
    STATE(168), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3966] = 5,
    ACTIONS(562), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym__statement_end,
    STATE(130), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3985] = 5,
    ACTIONS(564), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym__statement_end,
    STATE(128), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4004] = 5,
    ACTIONS(566), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__statement_end,
    STATE(164), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4023] = 5,
    ACTIONS(568), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__statement_end,
    STATE(166), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4042] = 4,
    ACTIONS(572), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(570), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(574), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4059] = 5,
    ACTIONS(577), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym__statement_end,
    STATE(173), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4078] = 5,
    ACTIONS(579), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym__statement_end,
    STATE(197), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4097] = 5,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__statement_end,
    STATE(193), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4116] = 5,
    ACTIONS(583), 1,
      anon_sym_LF,
    STATE(91), 1,
      sym__statement_end,
    STATE(93), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4135] = 5,
    ACTIONS(590), 1,
      anon_sym_LF,
    STATE(123), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(141), 1,
      sym_variable,
    ACTIONS(588), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(585), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4154] = 5,
    ACTIONS(592), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym__statement_end,
    STATE(96), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4173] = 5,
    ACTIONS(594), 1,
      anon_sym_LF,
    STATE(80), 1,
      sym__statement_end,
    STATE(177), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4192] = 5,
    ACTIONS(596), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym__statement_end,
    STATE(183), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4211] = 5,
    ACTIONS(598), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym__statement_end,
    STATE(94), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4230] = 5,
    ACTIONS(600), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statement_end,
    STATE(234), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4249] = 5,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statement_end,
    STATE(105), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4268] = 5,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statement_end,
    STATE(108), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4287] = 5,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym__statement_end,
    STATE(155), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4306] = 2,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(608), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4318] = 2,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(570), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4330] = 4,
    STATE(102), 1,
      sym_binary_comparison,
    STATE(189), 1,
      sym_binary_expression,
    STATE(12), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(612), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4346] = 4,
    STATE(102), 1,
      sym_binary_comparison,
    STATE(200), 1,
      sym_binary_expression,
    STATE(12), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(612), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4362] = 2,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(614), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4373] = 6,
    ACTIONS(618), 1,
      aux_sym_if_statement_token2,
    ACTIONS(620), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(622), 1,
      aux_sym_else_statement_token1,
    STATE(145), 1,
      aux_sym_if_statement_repeat1,
    STATE(249), 1,
      sym_elif_statement,
    STATE(251), 1,
      sym_else_statement,
  [4392] = 2,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4403] = 6,
    ACTIONS(620), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(622), 1,
      aux_sym_else_statement_token1,
    ACTIONS(624), 1,
      aux_sym_if_statement_token2,
    STATE(137), 1,
      aux_sym_if_statement_repeat1,
    STATE(249), 1,
      sym_elif_statement,
    STATE(255), 1,
      sym_else_statement,
  [4422] = 6,
    ACTIONS(620), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(622), 1,
      aux_sym_else_statement_token1,
    ACTIONS(626), 1,
      aux_sym_if_statement_token2,
    STATE(145), 1,
      aux_sym_if_statement_repeat1,
    STATE(249), 1,
      sym_elif_statement,
    STATE(254), 1,
      sym_else_statement,
  [4441] = 2,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(628), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4452] = 3,
    STATE(133), 1,
      sym_binary_comparison,
    STATE(12), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(612), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4465] = 2,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(632), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4476] = 3,
    STATE(98), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(136), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4488] = 4,
    ACTIONS(638), 1,
      aux_sym_elif_statement_token1,
    STATE(145), 1,
      aux_sym_if_statement_repeat1,
    STATE(249), 1,
      sym_elif_statement,
    ACTIONS(636), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [4502] = 2,
    STATE(132), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4512] = 3,
    ACTIONS(641), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4523] = 2,
    STATE(104), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4532] = 3,
    ACTIONS(643), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4543] = 3,
    ACTIONS(645), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4554] = 3,
    ACTIONS(647), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4565] = 3,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4576] = 3,
    ACTIONS(651), 1,
      aux_sym_next_statement_token1,
    ACTIONS(653), 1,
      aux_sym_prev_statement_token1,
    STATE(54), 2,
      sym_next_statement,
      sym_prev_statement,
  [4587] = 3,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4598] = 3,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4609] = 2,
    STATE(219), 1,
      sym_variable,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4618] = 2,
    STATE(218), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4627] = 2,
    STATE(248), 1,
      sym_variable,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4636] = 2,
    STATE(217), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4645] = 2,
    STATE(216), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4654] = 3,
    ACTIONS(659), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4665] = 3,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4676] = 3,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(89), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4687] = 3,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4698] = 2,
    STATE(129), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4707] = 3,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4718] = 3,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4729] = 3,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4740] = 3,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4751] = 2,
    STATE(114), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4760] = 2,
    STATE(165), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4769] = 2,
    STATE(115), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4778] = 3,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4789] = 3,
    ACTIONS(651), 1,
      aux_sym_next_statement_token1,
    ACTIONS(653), 1,
      aux_sym_prev_statement_token1,
    STATE(72), 2,
      sym_next_statement,
      sym_prev_statement,
  [4800] = 2,
    STATE(143), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4809] = 2,
    STATE(215), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4818] = 3,
    ACTIONS(677), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4829] = 2,
    STATE(126), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4838] = 2,
    STATE(125), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4847] = 3,
    ACTIONS(679), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4858] = 2,
    STATE(119), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4867] = 2,
    STATE(167), 1,
      sym_variable,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4876] = 3,
    ACTIONS(681), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4887] = 2,
    STATE(113), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4896] = 2,
    STATE(169), 1,
      sym_variable,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4905] = 2,
    STATE(170), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4914] = 2,
    STATE(214), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4923] = 2,
    STATE(171), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4932] = 3,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4943] = 2,
    STATE(172), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4952] = 3,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4963] = 3,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4974] = 3,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4985] = 3,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4996] = 3,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5007] = 2,
    STATE(213), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5016] = 3,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5027] = 3,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5038] = 3,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5049] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(3), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5060] = 3,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5071] = 3,
    ACTIONS(705), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5082] = 3,
    ACTIONS(651), 1,
      aux_sym_next_statement_token1,
    ACTIONS(653), 1,
      aux_sym_prev_statement_token1,
    STATE(32), 2,
      sym_next_statement,
      sym_prev_statement,
  [5093] = 2,
    STATE(178), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5102] = 2,
    STATE(131), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5111] = 2,
    STATE(110), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5120] = 3,
    ACTIONS(707), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5131] = 2,
    STATE(144), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5140] = 3,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5151] = 2,
    STATE(179), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5160] = 2,
    STATE(109), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5169] = 2,
    STATE(111), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5178] = 2,
    STATE(181), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5187] = 2,
    STATE(116), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5196] = 2,
    STATE(117), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5205] = 2,
    STATE(182), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5214] = 2,
    STATE(184), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5223] = 2,
    STATE(185), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5232] = 3,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5243] = 3,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5254] = 2,
    STATE(212), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5263] = 3,
    ACTIONS(715), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5274] = 3,
    ACTIONS(717), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5285] = 2,
    STATE(101), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5294] = 2,
    STATE(186), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5303] = 2,
    STATE(188), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5312] = 3,
    ACTIONS(719), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5323] = 2,
    STATE(190), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5332] = 2,
    STATE(147), 1,
      sym_variable,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5341] = 3,
    ACTIONS(651), 1,
      aux_sym_next_statement_token1,
    ACTIONS(653), 1,
      aux_sym_prev_statement_token1,
    STATE(49), 2,
      sym_next_statement,
      sym_prev_statement,
  [5352] = 2,
    STATE(198), 1,
      sym_variable,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5361] = 2,
    STATE(199), 1,
      sym_variable,
    ACTIONS(523), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5370] = 2,
    STATE(122), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5379] = 3,
    ACTIONS(721), 1,
      anon_sym_LF,
    STATE(87), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5390] = 2,
    STATE(127), 1,
      sym_variable,
    ACTIONS(501), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5399] = 2,
    STATE(148), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5408] = 2,
    STATE(204), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5417] = 2,
    STATE(205), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5426] = 2,
    STATE(206), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5435] = 2,
    STATE(211), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5444] = 2,
    STATE(208), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5453] = 2,
    STATE(210), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5462] = 3,
    ACTIONS(723), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5473] = 1,
    ACTIONS(725), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5479] = 1,
    ACTIONS(727), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5485] = 1,
    ACTIONS(729), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5491] = 1,
    ACTIONS(189), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5497] = 2,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(632), 2,
      sym_comment,
      anon_sym_SEMI,
  [5505] = 1,
    ACTIONS(731), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5511] = 1,
    ACTIONS(733), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5517] = 1,
    ACTIONS(735), 1,
      aux_sym_if_statement_token2,
  [5521] = 1,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
  [5525] = 1,
    ACTIONS(739), 1,
      aux_sym_if_statement_token2,
  [5529] = 1,
    ACTIONS(741), 1,
      aux_sym_if_statement_token2,
  [5533] = 1,
    ACTIONS(743), 1,
      aux_sym_if_statement_token2,
  [5537] = 1,
    ACTIONS(745), 1,
      anon_sym_LF,
  [5541] = 1,
    ACTIONS(747), 1,
      aux_sym_if_statement_token2,
  [5545] = 1,
    ACTIONS(749), 1,
      aux_sym_start_function_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 191,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 309,
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 524,
  [SMALL_STATE(23)] = 567,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 653,
  [SMALL_STATE(26)] = 696,
  [SMALL_STATE(27)] = 739,
  [SMALL_STATE(28)] = 782,
  [SMALL_STATE(29)] = 825,
  [SMALL_STATE(30)] = 868,
  [SMALL_STATE(31)] = 911,
  [SMALL_STATE(32)] = 954,
  [SMALL_STATE(33)] = 997,
  [SMALL_STATE(34)] = 1040,
  [SMALL_STATE(35)] = 1083,
  [SMALL_STATE(36)] = 1126,
  [SMALL_STATE(37)] = 1169,
  [SMALL_STATE(38)] = 1212,
  [SMALL_STATE(39)] = 1255,
  [SMALL_STATE(40)] = 1298,
  [SMALL_STATE(41)] = 1341,
  [SMALL_STATE(42)] = 1384,
  [SMALL_STATE(43)] = 1427,
  [SMALL_STATE(44)] = 1470,
  [SMALL_STATE(45)] = 1513,
  [SMALL_STATE(46)] = 1556,
  [SMALL_STATE(47)] = 1599,
  [SMALL_STATE(48)] = 1642,
  [SMALL_STATE(49)] = 1685,
  [SMALL_STATE(50)] = 1728,
  [SMALL_STATE(51)] = 1771,
  [SMALL_STATE(52)] = 1814,
  [SMALL_STATE(53)] = 1857,
  [SMALL_STATE(54)] = 1900,
  [SMALL_STATE(55)] = 1943,
  [SMALL_STATE(56)] = 1986,
  [SMALL_STATE(57)] = 2029,
  [SMALL_STATE(58)] = 2072,
  [SMALL_STATE(59)] = 2115,
  [SMALL_STATE(60)] = 2158,
  [SMALL_STATE(61)] = 2201,
  [SMALL_STATE(62)] = 2244,
  [SMALL_STATE(63)] = 2287,
  [SMALL_STATE(64)] = 2330,
  [SMALL_STATE(65)] = 2373,
  [SMALL_STATE(66)] = 2416,
  [SMALL_STATE(67)] = 2459,
  [SMALL_STATE(68)] = 2502,
  [SMALL_STATE(69)] = 2545,
  [SMALL_STATE(70)] = 2588,
  [SMALL_STATE(71)] = 2631,
  [SMALL_STATE(72)] = 2674,
  [SMALL_STATE(73)] = 2717,
  [SMALL_STATE(74)] = 2760,
  [SMALL_STATE(75)] = 2803,
  [SMALL_STATE(76)] = 2846,
  [SMALL_STATE(77)] = 2889,
  [SMALL_STATE(78)] = 2932,
  [SMALL_STATE(79)] = 2975,
  [SMALL_STATE(80)] = 3018,
  [SMALL_STATE(81)] = 3061,
  [SMALL_STATE(82)] = 3104,
  [SMALL_STATE(83)] = 3147,
  [SMALL_STATE(84)] = 3190,
  [SMALL_STATE(85)] = 3233,
  [SMALL_STATE(86)] = 3276,
  [SMALL_STATE(87)] = 3319,
  [SMALL_STATE(88)] = 3362,
  [SMALL_STATE(89)] = 3405,
  [SMALL_STATE(90)] = 3448,
  [SMALL_STATE(91)] = 3491,
  [SMALL_STATE(92)] = 3534,
  [SMALL_STATE(93)] = 3551,
  [SMALL_STATE(94)] = 3573,
  [SMALL_STATE(95)] = 3591,
  [SMALL_STATE(96)] = 3613,
  [SMALL_STATE(97)] = 3635,
  [SMALL_STATE(98)] = 3657,
  [SMALL_STATE(99)] = 3679,
  [SMALL_STATE(100)] = 3701,
  [SMALL_STATE(101)] = 3723,
  [SMALL_STATE(102)] = 3742,
  [SMALL_STATE(103)] = 3759,
  [SMALL_STATE(104)] = 3776,
  [SMALL_STATE(105)] = 3795,
  [SMALL_STATE(106)] = 3814,
  [SMALL_STATE(107)] = 3833,
  [SMALL_STATE(108)] = 3852,
  [SMALL_STATE(109)] = 3871,
  [SMALL_STATE(110)] = 3890,
  [SMALL_STATE(111)] = 3909,
  [SMALL_STATE(112)] = 3928,
  [SMALL_STATE(113)] = 3947,
  [SMALL_STATE(114)] = 3966,
  [SMALL_STATE(115)] = 3985,
  [SMALL_STATE(116)] = 4004,
  [SMALL_STATE(117)] = 4023,
  [SMALL_STATE(118)] = 4042,
  [SMALL_STATE(119)] = 4059,
  [SMALL_STATE(120)] = 4078,
  [SMALL_STATE(121)] = 4097,
  [SMALL_STATE(122)] = 4116,
  [SMALL_STATE(123)] = 4135,
  [SMALL_STATE(124)] = 4154,
  [SMALL_STATE(125)] = 4173,
  [SMALL_STATE(126)] = 4192,
  [SMALL_STATE(127)] = 4211,
  [SMALL_STATE(128)] = 4230,
  [SMALL_STATE(129)] = 4249,
  [SMALL_STATE(130)] = 4268,
  [SMALL_STATE(131)] = 4287,
  [SMALL_STATE(132)] = 4306,
  [SMALL_STATE(133)] = 4318,
  [SMALL_STATE(134)] = 4330,
  [SMALL_STATE(135)] = 4346,
  [SMALL_STATE(136)] = 4362,
  [SMALL_STATE(137)] = 4373,
  [SMALL_STATE(138)] = 4392,
  [SMALL_STATE(139)] = 4403,
  [SMALL_STATE(140)] = 4422,
  [SMALL_STATE(141)] = 4441,
  [SMALL_STATE(142)] = 4452,
  [SMALL_STATE(143)] = 4465,
  [SMALL_STATE(144)] = 4476,
  [SMALL_STATE(145)] = 4488,
  [SMALL_STATE(146)] = 4502,
  [SMALL_STATE(147)] = 4512,
  [SMALL_STATE(148)] = 4523,
  [SMALL_STATE(149)] = 4532,
  [SMALL_STATE(150)] = 4543,
  [SMALL_STATE(151)] = 4554,
  [SMALL_STATE(152)] = 4565,
  [SMALL_STATE(153)] = 4576,
  [SMALL_STATE(154)] = 4587,
  [SMALL_STATE(155)] = 4598,
  [SMALL_STATE(156)] = 4609,
  [SMALL_STATE(157)] = 4618,
  [SMALL_STATE(158)] = 4627,
  [SMALL_STATE(159)] = 4636,
  [SMALL_STATE(160)] = 4645,
  [SMALL_STATE(161)] = 4654,
  [SMALL_STATE(162)] = 4665,
  [SMALL_STATE(163)] = 4676,
  [SMALL_STATE(164)] = 4687,
  [SMALL_STATE(165)] = 4698,
  [SMALL_STATE(166)] = 4707,
  [SMALL_STATE(167)] = 4718,
  [SMALL_STATE(168)] = 4729,
  [SMALL_STATE(169)] = 4740,
  [SMALL_STATE(170)] = 4751,
  [SMALL_STATE(171)] = 4760,
  [SMALL_STATE(172)] = 4769,
  [SMALL_STATE(173)] = 4778,
  [SMALL_STATE(174)] = 4789,
  [SMALL_STATE(175)] = 4800,
  [SMALL_STATE(176)] = 4809,
  [SMALL_STATE(177)] = 4818,
  [SMALL_STATE(178)] = 4829,
  [SMALL_STATE(179)] = 4838,
  [SMALL_STATE(180)] = 4847,
  [SMALL_STATE(181)] = 4858,
  [SMALL_STATE(182)] = 4867,
  [SMALL_STATE(183)] = 4876,
  [SMALL_STATE(184)] = 4887,
  [SMALL_STATE(185)] = 4896,
  [SMALL_STATE(186)] = 4905,
  [SMALL_STATE(187)] = 4914,
  [SMALL_STATE(188)] = 4923,
  [SMALL_STATE(189)] = 4932,
  [SMALL_STATE(190)] = 4943,
  [SMALL_STATE(191)] = 4952,
  [SMALL_STATE(192)] = 4963,
  [SMALL_STATE(193)] = 4974,
  [SMALL_STATE(194)] = 4985,
  [SMALL_STATE(195)] = 4996,
  [SMALL_STATE(196)] = 5007,
  [SMALL_STATE(197)] = 5016,
  [SMALL_STATE(198)] = 5027,
  [SMALL_STATE(199)] = 5038,
  [SMALL_STATE(200)] = 5049,
  [SMALL_STATE(201)] = 5060,
  [SMALL_STATE(202)] = 5071,
  [SMALL_STATE(203)] = 5082,
  [SMALL_STATE(204)] = 5093,
  [SMALL_STATE(205)] = 5102,
  [SMALL_STATE(206)] = 5111,
  [SMALL_STATE(207)] = 5120,
  [SMALL_STATE(208)] = 5131,
  [SMALL_STATE(209)] = 5140,
  [SMALL_STATE(210)] = 5151,
  [SMALL_STATE(211)] = 5160,
  [SMALL_STATE(212)] = 5169,
  [SMALL_STATE(213)] = 5178,
  [SMALL_STATE(214)] = 5187,
  [SMALL_STATE(215)] = 5196,
  [SMALL_STATE(216)] = 5205,
  [SMALL_STATE(217)] = 5214,
  [SMALL_STATE(218)] = 5223,
  [SMALL_STATE(219)] = 5232,
  [SMALL_STATE(220)] = 5243,
  [SMALL_STATE(221)] = 5254,
  [SMALL_STATE(222)] = 5263,
  [SMALL_STATE(223)] = 5274,
  [SMALL_STATE(224)] = 5285,
  [SMALL_STATE(225)] = 5294,
  [SMALL_STATE(226)] = 5303,
  [SMALL_STATE(227)] = 5312,
  [SMALL_STATE(228)] = 5323,
  [SMALL_STATE(229)] = 5332,
  [SMALL_STATE(230)] = 5341,
  [SMALL_STATE(231)] = 5352,
  [SMALL_STATE(232)] = 5361,
  [SMALL_STATE(233)] = 5370,
  [SMALL_STATE(234)] = 5379,
  [SMALL_STATE(235)] = 5390,
  [SMALL_STATE(236)] = 5399,
  [SMALL_STATE(237)] = 5408,
  [SMALL_STATE(238)] = 5417,
  [SMALL_STATE(239)] = 5426,
  [SMALL_STATE(240)] = 5435,
  [SMALL_STATE(241)] = 5444,
  [SMALL_STATE(242)] = 5453,
  [SMALL_STATE(243)] = 5462,
  [SMALL_STATE(244)] = 5473,
  [SMALL_STATE(245)] = 5479,
  [SMALL_STATE(246)] = 5485,
  [SMALL_STATE(247)] = 5491,
  [SMALL_STATE(248)] = 5497,
  [SMALL_STATE(249)] = 5505,
  [SMALL_STATE(250)] = 5511,
  [SMALL_STATE(251)] = 5517,
  [SMALL_STATE(252)] = 5521,
  [SMALL_STATE(253)] = 5525,
  [SMALL_STATE(254)] = 5529,
  [SMALL_STATE(255)] = 5533,
  [SMALL_STATE(256)] = 5537,
  [SMALL_STATE(257)] = 5541,
  [SMALL_STATE(258)] = 5545,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(256),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(156),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(157),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(159),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(160),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(176),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(187),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(196),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(221),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(224),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(240),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(242),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(241),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(239),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(238),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(237),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(236),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(235),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(135),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(233),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(232),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(106),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(231),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(120),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(121),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(229),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(228),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(226),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(225),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 30),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 5, .production_id = 20),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 5, .production_id = 20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_bits_statement, 4, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_bits_statement, 4, .production_id = 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 53),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 53),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 52),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 52),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 51),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 51),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 6, .production_id = 50),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 6, .production_id = 50),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 6, .production_id = 49),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 6, .production_id = 49),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 3, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 3, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 6, .production_id = 48),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 6, .production_id = 48),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 4, .production_id = 47),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 4, .production_id = 47),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 4, .production_id = 14),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 4, .production_id = 14),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 4, .production_id = 47),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 4, .production_id = 47),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 46),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 46),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 8, .production_id = 60),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 8, .production_id = 60),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 45),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 45),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 10),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 10),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 4, .production_id = 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 4, .production_id = 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 6, .production_id = 34),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 6, .production_id = 34),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 44),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 44),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 43),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 43),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 42),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 42),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_end, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_end, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_statement, 3, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_statement, 3, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 40),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 40),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_c_t_statement, 6, .production_id = 38),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_c_t_statement, 6, .production_id = 38),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_var_chr_statement, 6, .production_id = 37),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_var_chr_statement, 6, .production_id = 37),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 5, .production_id = 36),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 5, .production_id = 36),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 5, .production_id = 36),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 5, .production_id = 36),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 54),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 54),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_d_string_statement, 5, .production_id = 21),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_d_string_statement, 5, .production_id = 21),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 3, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 3, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 3, .production_id = 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 3, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 35),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 35),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 34),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 34),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 5, .production_id = 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 5, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 8),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 8),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 8, .production_id = 59),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 8, .production_id = 59),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_pos_statement, 4, .production_id = 7),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_pos_statement, 4, .production_id = 7),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 3, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 3, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 5, .production_id = 32),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 5, .production_id = 32),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_c_t_statement, 5, .production_id = 22),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_c_t_statement, 5, .production_id = 22),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_d_string_statement, 4, .production_id = 5),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_d_string_statement, 4, .production_id = 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 30),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 30),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 29),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 29),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 5, .production_id = 23),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 5, .production_id = 23),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 28),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 28),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 21),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 21),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 16),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 16),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 17),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 17),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_var_chr_statement, 5, .production_id = 18),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_var_chr_statement, 5, .production_id = 18),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 20),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 20),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_array_statement, 5, .production_id = 26),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_array_statement, 5, .production_id = 26),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_pos_statement, 3, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_pos_statement, 3, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 25),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 25),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 39),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 39),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_array_statement, 5, .production_id = 19),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_array_statement, 5, .production_id = 19),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 5),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 24),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 24),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 58),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 58),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 7, .production_id = 55),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 7, .production_id = 55),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 7, .production_id = 56),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 7, .production_id = 56),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_bits_statement, 5, .production_id = 23),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_bits_statement, 5, .production_id = 23),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 7, .production_id = 57),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 7, .production_id = 57),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 3, .production_id = 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 3, .production_id = 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 27), SHIFT_REPEAT(138),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 27),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 27),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(142),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 33), SHIFT_REPEAT(138),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 33),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 33),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 11),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 11),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 9),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 9),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 13),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 13),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_value, 2, .production_id = 15),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_value, 2, .production_id = 15),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 31),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 31), SHIFT_REPEAT(134),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 42),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 12),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [737] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 41),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
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
