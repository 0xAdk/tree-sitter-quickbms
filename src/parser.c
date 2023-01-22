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
#define STATE_COUNT 263
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 62

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
  anon_sym_EQ = 17,
  aux_sym_put_var_chr_statement_token1 = 18,
  aux_sym_put_array_statement_token1 = 19,
  aux_sym_put_statement_token1 = 20,
  aux_sym_put_d_string_statement_token1 = 21,
  aux_sym_put_c_t_statement_token1 = 22,
  aux_sym_put_bits_statement_token1 = 23,
  aux_sym_goto_statement_token1 = 24,
  aux_sym_goto_statement_token2 = 25,
  aux_sym_goto_statement_token3 = 26,
  aux_sym_goto_statement_token4 = 27,
  aux_sym_goto_statement_token5 = 28,
  aux_sym_goto_statement_token6 = 29,
  aux_sym_if_statement_token1 = 30,
  aux_sym_if_statement_token2 = 31,
  aux_sym_elif_statement_token1 = 32,
  aux_sym_else_statement_token1 = 33,
  anon_sym_u = 34,
  anon_sym_0 = 35,
  anon_sym_LT = 36,
  aux_sym_binary_op_token1 = 37,
  aux_sym_binary_op_token2 = 38,
  aux_sym_binary_op_token3 = 39,
  anon_sym_GT = 40,
  aux_sym_binary_op_token4 = 41,
  aux_sym_binary_op_token5 = 42,
  aux_sym_binary_op_token6 = 43,
  anon_sym_LT_GT = 44,
  anon_sym_BANG_EQ = 45,
  anon_sym_BANG_EQ_EQ = 46,
  aux_sym_binary_op_token7 = 47,
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
  [anon_sym_EQ] = "=",
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
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_EQ] = {
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
  [27] = {.index = 56, .length = 3},
  [28] = {.index = 59, .length = 2},
  [29] = {.index = 61, .length = 3},
  [30] = {.index = 64, .length = 3},
  [31] = {.index = 67, .length = 1},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 3},
  [34] = {.index = 73, .length = 2},
  [35] = {.index = 75, .length = 2},
  [36] = {.index = 77, .length = 2},
  [37] = {.index = 79, .length = 3},
  [38] = {.index = 82, .length = 4},
  [39] = {.index = 86, .length = 4},
  [40] = {.index = 90, .length = 4},
  [41] = {.index = 94, .length = 4},
  [42] = {.index = 98, .length = 1},
  [43] = {.index = 99, .length = 2},
  [44] = {.index = 101, .length = 2},
  [45] = {.index = 103, .length = 2},
  [46] = {.index = 105, .length = 3},
  [47] = {.index = 108, .length = 3},
  [48] = {.index = 111, .length = 2},
  [49] = {.index = 113, .length = 4},
  [50] = {.index = 117, .length = 4},
  [51] = {.index = 121, .length = 4},
  [52] = {.index = 125, .length = 3},
  [53] = {.index = 128, .length = 3},
  [54] = {.index = 131, .length = 3},
  [55] = {.index = 134, .length = 4},
  [56] = {.index = 138, .length = 5},
  [57] = {.index = 143, .length = 5},
  [58] = {.index = 148, .length = 5},
  [59] = {.index = 153, .length = 4},
  [60] = {.index = 157, .length = 6},
  [61] = {.index = 163, .length = 6},
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
    {field_op, 2},
    {field_value, 3},
  [50] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [53] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
  [56] =
    {field_array, 1},
    {field_index, 2},
    {field_name, 3, .inherited = true},
  [59] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [61] =
    {field_char, 3},
    {field_name, 1},
    {field_type, 2},
  [64] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [67] =
    {field_condition, 1},
  [68] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [70] =
    {field_argument, 3, .inherited = true},
    {field_name, 1},
    {field_save_variables, 2},
  [73] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [75] =
    {field_body, 3},
    {field_name, 1},
  [77] =
    {field_initializer, 2},
    {field_name, 1},
  [79] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [82] =
    {field_file_number, 2},
    {field_name, 1},
    {field_offset, 3},
    {field_type, 4},
  [86] =
    {field_delimiter, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [90] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
    {field_type, 4},
  [94] =
    {field_char, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [98] =
    {field_consequence, 2},
  [99] =
    {field_condition, 1},
    {field_consequence, 3},
  [101] =
    {field_alternative, 3},
    {field_condition, 1},
  [103] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [105] =
    {field_body, 4},
    {field_initializer, 2},
    {field_name, 1},
  [108] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [111] =
    {field_name, 1},
    {field_update, 2},
  [113] =
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [117] =
    {field_compressed_size, 3},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [121] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [125] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [128] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [131] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [134] =
    {field_body, 5},
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [138] =
    {field_encrypted_size, 5},
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [143] =
    {field_compressed_size, 3},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [148] =
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [153] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
  [157] =
    {field_compressed_size, 3},
    {field_encrypted_size, 6},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [163] =
    {field_file_number, 5},
    {field_id, 6},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [24] = {
    [2] = sym_variable,
  },
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
  [92] = 92,
  [93] = 13,
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
  [137] = 13,
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
  [160] = 13,
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
  [178] = 162,
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
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 13,
  [252] = 144,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(284);
      if (lookahead == '!') ADVANCE(373);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead == '0') ADVANCE(332);
      if (lookahead == ';') ADVANCE(299);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '>') ADVANCE(337);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(203);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == '^') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == '|') ADVANCE(362);
      if (lookahead == '~') ADVANCE(376);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(125);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == ';') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(373);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead == '0') ADVANCE(332);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '>') ADVANCE(337);
      if (lookahead == '^') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == '|') ADVANCE(362);
      if (lookahead == '~') ADVANCE(376);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(226);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(43);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(354);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(298);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(326);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(325);
      END_STATE();
    case 19:
      if (lookahead == 'F') ADVANCE(322);
      END_STATE();
    case 20:
      if (lookahead == 'K') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(267);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(324);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(323);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 33:
      if (lookahead == '|') ADVANCE(363);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 59:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(193);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 61:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(327);
      END_STATE();
    case 103:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 105:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 106:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 108:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 109:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 110:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 111:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 112:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 113:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(399);
      END_STATE();
    case 114:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 115:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 116:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 117:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(384);
      END_STATE();
    case 119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 120:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 135:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(187);
      END_STATE();
    case 136:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(395);
      END_STATE();
    case 138:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(267);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 149:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(201);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 152:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 153:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
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
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 194:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 195:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 196:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 197:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 199:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 200:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 201:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 202:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(267);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 267:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 268:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 269:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 270:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 271:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 272:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 273:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(392);
      END_STATE();
    case 274:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 275:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 276:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 277:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(336);
      END_STATE();
    case 278:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 279:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(246);
      END_STATE();
    case 280:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 281:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 282:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 283:
      if (eof) ADVANCE(284);
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(180);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      END_STATE();
    case 284:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_get_var_chr_statement_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_get_array_statement_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_get_d_string_statement_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_get_c_t_statement_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_get_bits_statement_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_save_pos_statement_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(345);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(296);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_put_var_chr_statement_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_put_array_statement_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_put_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_put_d_string_statement_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_put_c_t_statement_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_put_bits_statement_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(369);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(341);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_binary_op_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_binary_op_token2);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_binary_op_token3);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == '>') ADVANCE(371);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_binary_op_token4);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_binary_op_token5);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_binary_op_token6);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_binary_op_token7);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_binary_op_token8);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_binary_op_token9);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_binary_op_token10);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_binary_op_token11);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_binary_op_token12);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_binary_op_token13);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_binary_op_token14);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_binary_op_token15);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_binary_op_token16);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_binary_op_token17);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_binary_op_token18);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_binary_op_token19);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_binary_op_token20);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_binary_op_token21);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(375);
      if (lookahead == '=') ADVANCE(342);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_binary_op_token22);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_binary_op_token23);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_binary_op_token24);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_binary_op_token25);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_binary_op_token26);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_binary_op_token28);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_binary_op_token29);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_binary_op_token30);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_binary_op_token31);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_call_function_statement_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token2);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_next_statement_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_prev_statement_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_label_statement_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_break_statement_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_continue_statement_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_log_statement_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_clog_statement_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_s_log_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 283},
  [2] = {.lex_state = 283},
  [3] = {.lex_state = 283},
  [4] = {.lex_state = 283},
  [5] = {.lex_state = 283},
  [6] = {.lex_state = 283},
  [7] = {.lex_state = 283},
  [8] = {.lex_state = 283},
  [9] = {.lex_state = 283},
  [10] = {.lex_state = 283},
  [11] = {.lex_state = 283},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 283},
  [18] = {.lex_state = 283},
  [19] = {.lex_state = 283},
  [20] = {.lex_state = 283},
  [21] = {.lex_state = 283},
  [22] = {.lex_state = 283},
  [23] = {.lex_state = 283},
  [24] = {.lex_state = 283},
  [25] = {.lex_state = 283},
  [26] = {.lex_state = 283},
  [27] = {.lex_state = 283},
  [28] = {.lex_state = 283},
  [29] = {.lex_state = 283},
  [30] = {.lex_state = 283},
  [31] = {.lex_state = 283},
  [32] = {.lex_state = 283},
  [33] = {.lex_state = 283},
  [34] = {.lex_state = 283},
  [35] = {.lex_state = 283},
  [36] = {.lex_state = 283},
  [37] = {.lex_state = 283},
  [38] = {.lex_state = 283},
  [39] = {.lex_state = 283},
  [40] = {.lex_state = 283},
  [41] = {.lex_state = 283},
  [42] = {.lex_state = 283},
  [43] = {.lex_state = 283},
  [44] = {.lex_state = 283},
  [45] = {.lex_state = 283},
  [46] = {.lex_state = 283},
  [47] = {.lex_state = 283},
  [48] = {.lex_state = 283},
  [49] = {.lex_state = 283},
  [50] = {.lex_state = 283},
  [51] = {.lex_state = 283},
  [52] = {.lex_state = 283},
  [53] = {.lex_state = 283},
  [54] = {.lex_state = 283},
  [55] = {.lex_state = 283},
  [56] = {.lex_state = 283},
  [57] = {.lex_state = 283},
  [58] = {.lex_state = 283},
  [59] = {.lex_state = 283},
  [60] = {.lex_state = 283},
  [61] = {.lex_state = 283},
  [62] = {.lex_state = 283},
  [63] = {.lex_state = 283},
  [64] = {.lex_state = 283},
  [65] = {.lex_state = 283},
  [66] = {.lex_state = 283},
  [67] = {.lex_state = 283},
  [68] = {.lex_state = 283},
  [69] = {.lex_state = 283},
  [70] = {.lex_state = 283},
  [71] = {.lex_state = 283},
  [72] = {.lex_state = 283},
  [73] = {.lex_state = 283},
  [74] = {.lex_state = 283},
  [75] = {.lex_state = 283},
  [76] = {.lex_state = 283},
  [77] = {.lex_state = 283},
  [78] = {.lex_state = 283},
  [79] = {.lex_state = 283},
  [80] = {.lex_state = 283},
  [81] = {.lex_state = 283},
  [82] = {.lex_state = 283},
  [83] = {.lex_state = 283},
  [84] = {.lex_state = 283},
  [85] = {.lex_state = 283},
  [86] = {.lex_state = 283},
  [87] = {.lex_state = 283},
  [88] = {.lex_state = 283},
  [89] = {.lex_state = 283},
  [90] = {.lex_state = 283},
  [91] = {.lex_state = 283},
  [92] = {.lex_state = 283},
  [93] = {.lex_state = 283},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 283},
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
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 283},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 283},
  [120] = {.lex_state = 283},
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
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 283},
  [135] = {.lex_state = 283},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 283},
  [152] = {.lex_state = 283},
  [153] = {.lex_state = 283},
  [154] = {.lex_state = 283},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 283},
  [157] = {.lex_state = 283},
  [158] = {.lex_state = 283},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 283},
  [165] = {.lex_state = 283},
  [166] = {.lex_state = 283},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 283},
  [169] = {.lex_state = 283},
  [170] = {.lex_state = 283},
  [171] = {.lex_state = 283},
  [172] = {.lex_state = 283},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 283},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 283},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 283},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 283},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 283},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 283},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 283},
  [197] = {.lex_state = 283},
  [198] = {.lex_state = 283},
  [199] = {.lex_state = 283},
  [200] = {.lex_state = 283},
  [201] = {.lex_state = 283},
  [202] = {.lex_state = 283},
  [203] = {.lex_state = 283},
  [204] = {.lex_state = 283},
  [205] = {.lex_state = 283},
  [206] = {.lex_state = 283},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 283},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 283},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 283},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 283},
  [225] = {.lex_state = 283},
  [226] = {.lex_state = 283},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 283},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 283},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 283},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 283},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 283},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
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
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_statement_list] = STATE(256),
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
    [sym_statement_list] = STATE(140),
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
    [sym_elif_statement] = STATE(253),
    [sym_else_statement] = STATE(261),
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
    [aux_sym_if_statement_repeat1] = STATE(141),
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
    [sym_statement_list] = STATE(150),
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
    [sym_next_statement] = STATE(54),
    [sym_prev_statement] = STATE(54),
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
    [sym_statement_list] = STATE(155),
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
  [7] = {
    [sym_statement_list] = STATE(233),
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
    [sym_statement_list] = STATE(177),
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
    [sym_next_statement] = STATE(80),
    [sym_prev_statement] = STATE(80),
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
    [sym_statement_list] = STATE(248),
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
    [sym_statement_list] = STATE(262),
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
    [sym_statement_list] = STATE(257),
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
    ACTIONS(181), 1,
      anon_sym_u,
    ACTIONS(183), 1,
      anon_sym_0,
    STATE(147), 1,
      sym_binary_op,
    ACTIONS(179), 10,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
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
    ACTIONS(187), 10,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_BANG,
      aux_sym_binary_op_token27,
    ACTIONS(189), 46,
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
    ACTIONS(193), 1,
      anon_sym_0,
    ACTIONS(191), 10,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
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
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
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
    ACTIONS(191), 10,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG_EQ,
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
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(503), 36,
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
  [3577] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(187), 11,
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
  [3594] = 6,
    ACTIONS(507), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym__statement_end,
    STATE(101), 1,
      sym_op_value,
    STATE(178), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3616] = 6,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym__statement_end,
    STATE(115), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(142), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3638] = 6,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym__statement_end,
    STATE(162), 1,
      sym_variable,
    STATE(210), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3660] = 6,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statement_end,
    STATE(95), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(142), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3682] = 6,
    ACTIONS(517), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym__statement_end,
    STATE(108), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(138), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3704] = 6,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym__statement_end,
    STATE(162), 1,
      sym_variable,
    STATE(212), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3726] = 4,
    ACTIONS(521), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(523), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [3744] = 6,
    ACTIONS(525), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym__statement_end,
    STATE(156), 1,
      sym_op_value,
    STATE(162), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3766] = 5,
    ACTIONS(529), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym__statement_end,
    STATE(100), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3785] = 5,
    ACTIONS(531), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statement_end,
    STATE(157), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3804] = 5,
    ACTIONS(533), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym__statement_end,
    STATE(99), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3823] = 5,
    ACTIONS(535), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statement_end,
    STATE(158), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3842] = 5,
    ACTIONS(537), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym__statement_end,
    STATE(164), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3861] = 5,
    ACTIONS(539), 1,
      anon_sym_LF,
    STATE(87), 1,
      sym__statement_end,
    STATE(199), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3880] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(108), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(138), 1,
      sym_variable,
    ACTIONS(544), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(541), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3899] = 5,
    ACTIONS(548), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym__statement_end,
    STATE(166), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3918] = 5,
    ACTIONS(550), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym__statement_end,
    STATE(168), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3937] = 5,
    ACTIONS(552), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statement_end,
    STATE(237), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3956] = 5,
    ACTIONS(554), 1,
      anon_sym_LF,
    STATE(92), 1,
      sym__statement_end,
    STATE(224), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [3975] = 4,
    ACTIONS(558), 1,
      anon_sym_LF,
    STATE(113), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(556), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(560), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [3992] = 5,
    ACTIONS(563), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym__statement_end,
    STATE(170), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4011] = 5,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(115), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(142), 1,
      sym_variable,
    ACTIONS(568), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(565), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4030] = 5,
    ACTIONS(572), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym__statement_end,
    STATE(130), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4049] = 5,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(90), 1,
      sym__statement_end,
    STATE(97), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4068] = 5,
    ACTIONS(576), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym__statement_end,
    STATE(111), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4087] = 4,
    ACTIONS(580), 1,
      anon_sym_LF,
    STATE(120), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(578), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(582), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4104] = 4,
    ACTIONS(586), 1,
      anon_sym_LF,
    STATE(113), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(584), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(582), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4121] = 5,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statement_end,
    STATE(94), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4140] = 5,
    ACTIONS(590), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym__statement_end,
    STATE(169), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4159] = 5,
    ACTIONS(592), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym__statement_end,
    STATE(201), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4178] = 5,
    ACTIONS(594), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym__statement_end,
    STATE(184), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4197] = 5,
    ACTIONS(596), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym__statement_end,
    STATE(96), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4216] = 5,
    ACTIONS(598), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statement_end,
    STATE(112), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4235] = 5,
    ACTIONS(600), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym__statement_end,
    STATE(180), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4254] = 5,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym__statement_end,
    STATE(186), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4273] = 5,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(33), 1,
      sym__statement_end,
    STATE(152), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4292] = 5,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statement_end,
    STATE(107), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4311] = 5,
    ACTIONS(608), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym__statement_end,
    STATE(175), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4330] = 5,
    ACTIONS(610), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym__statement_end,
    STATE(200), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4349] = 4,
    STATE(119), 1,
      sym_binary_comparison,
    STATE(205), 1,
      sym_binary_expression,
    STATE(12), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(612), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4365] = 2,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(614), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4377] = 2,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(556), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4389] = 4,
    STATE(119), 1,
      sym_binary_comparison,
    STATE(192), 1,
      sym_binary_expression,
    STATE(12), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(612), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4405] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(187), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4416] = 2,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(618), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4427] = 3,
    STATE(135), 1,
      sym_binary_comparison,
    STATE(12), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(612), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4440] = 6,
    ACTIONS(622), 1,
      aux_sym_if_statement_token2,
    ACTIONS(624), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(626), 1,
      aux_sym_else_statement_token1,
    STATE(143), 1,
      aux_sym_if_statement_repeat1,
    STATE(253), 1,
      sym_elif_statement,
    STATE(259), 1,
      sym_else_statement,
  [4459] = 6,
    ACTIONS(624), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(626), 1,
      aux_sym_else_statement_token1,
    ACTIONS(628), 1,
      aux_sym_if_statement_token2,
    STATE(146), 1,
      aux_sym_if_statement_repeat1,
    STATE(253), 1,
      sym_elif_statement,
    STATE(258), 1,
      sym_else_statement,
  [4478] = 2,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(630), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4489] = 6,
    ACTIONS(624), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(626), 1,
      aux_sym_else_statement_token1,
    ACTIONS(634), 1,
      aux_sym_if_statement_token2,
    STATE(146), 1,
      aux_sym_if_statement_repeat1,
    STATE(253), 1,
      sym_elif_statement,
    STATE(255), 1,
      sym_else_statement,
  [4508] = 2,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(636), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4519] = 3,
    ACTIONS(640), 1,
      anon_sym_EQ,
    STATE(106), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4531] = 4,
    ACTIONS(644), 1,
      aux_sym_elif_statement_token1,
    STATE(146), 1,
      aux_sym_if_statement_repeat1,
    STATE(253), 1,
      sym_elif_statement,
    ACTIONS(642), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [4545] = 2,
    STATE(134), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4555] = 3,
    STATE(98), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(138), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4567] = 2,
    STATE(176), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4576] = 3,
    ACTIONS(647), 1,
      aux_sym_next_statement_token1,
    ACTIONS(649), 1,
      aux_sym_prev_statement_token1,
    STATE(32), 2,
      sym_next_statement,
      sym_prev_statement,
  [4587] = 3,
    ACTIONS(651), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4598] = 3,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4609] = 3,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4620] = 3,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4631] = 3,
    ACTIONS(647), 1,
      aux_sym_next_statement_token1,
    ACTIONS(649), 1,
      aux_sym_prev_statement_token1,
    STATE(55), 2,
      sym_next_statement,
      sym_prev_statement,
  [4642] = 3,
    ACTIONS(659), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4653] = 3,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4664] = 3,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4675] = 2,
    STATE(222), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4684] = 1,
    ACTIONS(187), 4,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      anon_sym_EQ,
  [4691] = 2,
    STATE(221), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4700] = 2,
    STATE(252), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4709] = 2,
    STATE(220), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4718] = 3,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4729] = 3,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(89), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4740] = 3,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4751] = 2,
    STATE(126), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4760] = 3,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4771] = 3,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4782] = 3,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4793] = 3,
    ACTIONS(677), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4804] = 3,
    ACTIONS(679), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4815] = 2,
    STATE(116), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4824] = 2,
    STATE(167), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4833] = 3,
    ACTIONS(681), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4844] = 2,
    STATE(118), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4853] = 3,
    ACTIONS(647), 1,
      aux_sym_next_statement_token1,
    ACTIONS(649), 1,
      aux_sym_prev_statement_token1,
    STATE(56), 2,
      sym_next_statement,
      sym_prev_statement,
  [4864] = 2,
    STATE(144), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4873] = 2,
    STATE(219), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4882] = 3,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4893] = 2,
    STATE(128), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4902] = 2,
    STATE(127), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4911] = 2,
    STATE(165), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4920] = 3,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4931] = 2,
    STATE(131), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4940] = 3,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4951] = 2,
    STATE(171), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4960] = 2,
    STATE(114), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4969] = 2,
    STATE(172), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4978] = 2,
    STATE(218), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4987] = 2,
    STATE(173), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4996] = 3,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5007] = 2,
    STATE(174), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5016] = 3,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5027] = 2,
    STATE(217), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5036] = 3,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5047] = 3,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5058] = 3,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5069] = 3,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5080] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5091] = 3,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5102] = 3,
    ACTIONS(705), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5113] = 3,
    ACTIONS(707), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5124] = 3,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5135] = 3,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(3), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5146] = 3,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5157] = 2,
    STATE(129), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5166] = 2,
    STATE(181), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5175] = 2,
    STATE(105), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5184] = 3,
    ACTIONS(715), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5195] = 2,
    STATE(103), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5204] = 3,
    ACTIONS(717), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5215] = 2,
    STATE(148), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5224] = 2,
    STATE(182), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5233] = 2,
    STATE(109), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5242] = 2,
    STATE(185), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5251] = 2,
    STATE(110), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5260] = 2,
    STATE(122), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5269] = 2,
    STATE(187), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5278] = 2,
    STATE(188), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5287] = 2,
    STATE(189), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5296] = 3,
    ACTIONS(719), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5307] = 2,
    STATE(216), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5316] = 3,
    ACTIONS(721), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5327] = 3,
    ACTIONS(723), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5338] = 3,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5349] = 2,
    STATE(215), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5358] = 2,
    STATE(191), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5367] = 2,
    STATE(193), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5376] = 3,
    ACTIONS(727), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5387] = 2,
    STATE(149), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5396] = 2,
    STATE(196), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5405] = 3,
    ACTIONS(647), 1,
      aux_sym_next_statement_token1,
    ACTIONS(649), 1,
      aux_sym_prev_statement_token1,
    STATE(60), 2,
      sym_next_statement,
      sym_prev_statement,
  [5416] = 2,
    STATE(202), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5425] = 2,
    STATE(203), 1,
      sym_variable,
    ACTIONS(527), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5434] = 2,
    STATE(117), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5443] = 3,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(91), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5454] = 2,
    STATE(102), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5463] = 2,
    STATE(207), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5472] = 2,
    STATE(208), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5481] = 2,
    STATE(209), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5490] = 2,
    STATE(211), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5499] = 2,
    STATE(124), 1,
      sym_variable,
    ACTIONS(509), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5508] = 2,
    STATE(213), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5517] = 2,
    STATE(214), 1,
      sym_variable,
    ACTIONS(505), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5526] = 3,
    ACTIONS(731), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5537] = 2,
    STATE(145), 1,
      sym_variable,
    ACTIONS(733), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5546] = 1,
    ACTIONS(735), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5552] = 1,
    ACTIONS(737), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5558] = 1,
    ACTIONS(739), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5564] = 1,
    ACTIONS(187), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5570] = 2,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(636), 2,
      sym_comment,
      anon_sym_SEMI,
  [5578] = 1,
    ACTIONS(741), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5584] = 1,
    ACTIONS(743), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5590] = 1,
    ACTIONS(745), 1,
      aux_sym_if_statement_token2,
  [5594] = 1,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
  [5598] = 1,
    ACTIONS(749), 1,
      aux_sym_if_statement_token2,
  [5602] = 1,
    ACTIONS(751), 1,
      aux_sym_if_statement_token2,
  [5606] = 1,
    ACTIONS(753), 1,
      aux_sym_if_statement_token2,
  [5610] = 1,
    ACTIONS(755), 1,
      anon_sym_LF,
  [5614] = 1,
    ACTIONS(757), 1,
      aux_sym_if_statement_token2,
  [5618] = 1,
    ACTIONS(759), 1,
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
  [SMALL_STATE(93)] = 3577,
  [SMALL_STATE(94)] = 3594,
  [SMALL_STATE(95)] = 3616,
  [SMALL_STATE(96)] = 3638,
  [SMALL_STATE(97)] = 3660,
  [SMALL_STATE(98)] = 3682,
  [SMALL_STATE(99)] = 3704,
  [SMALL_STATE(100)] = 3726,
  [SMALL_STATE(101)] = 3744,
  [SMALL_STATE(102)] = 3766,
  [SMALL_STATE(103)] = 3785,
  [SMALL_STATE(104)] = 3804,
  [SMALL_STATE(105)] = 3823,
  [SMALL_STATE(106)] = 3842,
  [SMALL_STATE(107)] = 3861,
  [SMALL_STATE(108)] = 3880,
  [SMALL_STATE(109)] = 3899,
  [SMALL_STATE(110)] = 3918,
  [SMALL_STATE(111)] = 3937,
  [SMALL_STATE(112)] = 3956,
  [SMALL_STATE(113)] = 3975,
  [SMALL_STATE(114)] = 3992,
  [SMALL_STATE(115)] = 4011,
  [SMALL_STATE(116)] = 4030,
  [SMALL_STATE(117)] = 4049,
  [SMALL_STATE(118)] = 4068,
  [SMALL_STATE(119)] = 4087,
  [SMALL_STATE(120)] = 4104,
  [SMALL_STATE(121)] = 4121,
  [SMALL_STATE(122)] = 4140,
  [SMALL_STATE(123)] = 4159,
  [SMALL_STATE(124)] = 4178,
  [SMALL_STATE(125)] = 4197,
  [SMALL_STATE(126)] = 4216,
  [SMALL_STATE(127)] = 4235,
  [SMALL_STATE(128)] = 4254,
  [SMALL_STATE(129)] = 4273,
  [SMALL_STATE(130)] = 4292,
  [SMALL_STATE(131)] = 4311,
  [SMALL_STATE(132)] = 4330,
  [SMALL_STATE(133)] = 4349,
  [SMALL_STATE(134)] = 4365,
  [SMALL_STATE(135)] = 4377,
  [SMALL_STATE(136)] = 4389,
  [SMALL_STATE(137)] = 4405,
  [SMALL_STATE(138)] = 4416,
  [SMALL_STATE(139)] = 4427,
  [SMALL_STATE(140)] = 4440,
  [SMALL_STATE(141)] = 4459,
  [SMALL_STATE(142)] = 4478,
  [SMALL_STATE(143)] = 4489,
  [SMALL_STATE(144)] = 4508,
  [SMALL_STATE(145)] = 4519,
  [SMALL_STATE(146)] = 4531,
  [SMALL_STATE(147)] = 4545,
  [SMALL_STATE(148)] = 4555,
  [SMALL_STATE(149)] = 4567,
  [SMALL_STATE(150)] = 4576,
  [SMALL_STATE(151)] = 4587,
  [SMALL_STATE(152)] = 4598,
  [SMALL_STATE(153)] = 4609,
  [SMALL_STATE(154)] = 4620,
  [SMALL_STATE(155)] = 4631,
  [SMALL_STATE(156)] = 4642,
  [SMALL_STATE(157)] = 4653,
  [SMALL_STATE(158)] = 4664,
  [SMALL_STATE(159)] = 4675,
  [SMALL_STATE(160)] = 4684,
  [SMALL_STATE(161)] = 4691,
  [SMALL_STATE(162)] = 4700,
  [SMALL_STATE(163)] = 4709,
  [SMALL_STATE(164)] = 4718,
  [SMALL_STATE(165)] = 4729,
  [SMALL_STATE(166)] = 4740,
  [SMALL_STATE(167)] = 4751,
  [SMALL_STATE(168)] = 4760,
  [SMALL_STATE(169)] = 4771,
  [SMALL_STATE(170)] = 4782,
  [SMALL_STATE(171)] = 4793,
  [SMALL_STATE(172)] = 4804,
  [SMALL_STATE(173)] = 4815,
  [SMALL_STATE(174)] = 4824,
  [SMALL_STATE(175)] = 4833,
  [SMALL_STATE(176)] = 4844,
  [SMALL_STATE(177)] = 4853,
  [SMALL_STATE(178)] = 4864,
  [SMALL_STATE(179)] = 4873,
  [SMALL_STATE(180)] = 4882,
  [SMALL_STATE(181)] = 4893,
  [SMALL_STATE(182)] = 4902,
  [SMALL_STATE(183)] = 4911,
  [SMALL_STATE(184)] = 4920,
  [SMALL_STATE(185)] = 4931,
  [SMALL_STATE(186)] = 4940,
  [SMALL_STATE(187)] = 4951,
  [SMALL_STATE(188)] = 4960,
  [SMALL_STATE(189)] = 4969,
  [SMALL_STATE(190)] = 4978,
  [SMALL_STATE(191)] = 4987,
  [SMALL_STATE(192)] = 4996,
  [SMALL_STATE(193)] = 5007,
  [SMALL_STATE(194)] = 5016,
  [SMALL_STATE(195)] = 5027,
  [SMALL_STATE(196)] = 5036,
  [SMALL_STATE(197)] = 5047,
  [SMALL_STATE(198)] = 5058,
  [SMALL_STATE(199)] = 5069,
  [SMALL_STATE(200)] = 5080,
  [SMALL_STATE(201)] = 5091,
  [SMALL_STATE(202)] = 5102,
  [SMALL_STATE(203)] = 5113,
  [SMALL_STATE(204)] = 5124,
  [SMALL_STATE(205)] = 5135,
  [SMALL_STATE(206)] = 5146,
  [SMALL_STATE(207)] = 5157,
  [SMALL_STATE(208)] = 5166,
  [SMALL_STATE(209)] = 5175,
  [SMALL_STATE(210)] = 5184,
  [SMALL_STATE(211)] = 5195,
  [SMALL_STATE(212)] = 5204,
  [SMALL_STATE(213)] = 5215,
  [SMALL_STATE(214)] = 5224,
  [SMALL_STATE(215)] = 5233,
  [SMALL_STATE(216)] = 5242,
  [SMALL_STATE(217)] = 5251,
  [SMALL_STATE(218)] = 5260,
  [SMALL_STATE(219)] = 5269,
  [SMALL_STATE(220)] = 5278,
  [SMALL_STATE(221)] = 5287,
  [SMALL_STATE(222)] = 5296,
  [SMALL_STATE(223)] = 5307,
  [SMALL_STATE(224)] = 5316,
  [SMALL_STATE(225)] = 5327,
  [SMALL_STATE(226)] = 5338,
  [SMALL_STATE(227)] = 5349,
  [SMALL_STATE(228)] = 5358,
  [SMALL_STATE(229)] = 5367,
  [SMALL_STATE(230)] = 5376,
  [SMALL_STATE(231)] = 5387,
  [SMALL_STATE(232)] = 5396,
  [SMALL_STATE(233)] = 5405,
  [SMALL_STATE(234)] = 5416,
  [SMALL_STATE(235)] = 5425,
  [SMALL_STATE(236)] = 5434,
  [SMALL_STATE(237)] = 5443,
  [SMALL_STATE(238)] = 5454,
  [SMALL_STATE(239)] = 5463,
  [SMALL_STATE(240)] = 5472,
  [SMALL_STATE(241)] = 5481,
  [SMALL_STATE(242)] = 5490,
  [SMALL_STATE(243)] = 5499,
  [SMALL_STATE(244)] = 5508,
  [SMALL_STATE(245)] = 5517,
  [SMALL_STATE(246)] = 5526,
  [SMALL_STATE(247)] = 5537,
  [SMALL_STATE(248)] = 5546,
  [SMALL_STATE(249)] = 5552,
  [SMALL_STATE(250)] = 5558,
  [SMALL_STATE(251)] = 5564,
  [SMALL_STATE(252)] = 5570,
  [SMALL_STATE(253)] = 5578,
  [SMALL_STATE(254)] = 5584,
  [SMALL_STATE(255)] = 5590,
  [SMALL_STATE(256)] = 5594,
  [SMALL_STATE(257)] = 5598,
  [SMALL_STATE(258)] = 5602,
  [SMALL_STATE(259)] = 5606,
  [SMALL_STATE(260)] = 5610,
  [SMALL_STATE(261)] = 5614,
  [SMALL_STATE(262)] = 5618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(260),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(159),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(161),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(163),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(179),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(190),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(195),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(223),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(227),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(243),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(247),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(245),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(244),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(242),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(241),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(240),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(239),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(238),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(133),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(236),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(235),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(121),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(234),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(123),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(132),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(232),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(231),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(229),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(228),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 31),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 20),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 17),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 17),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 54),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 54),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 53),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 53),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 52),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 52),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 6, .production_id = 51),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 6, .production_id = 51),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 6, .production_id = 50),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 6, .production_id = 50),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 4, .production_id = 14),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 4, .production_id = 14),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 6, .production_id = 49),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 6, .production_id = 49),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 4, .production_id = 48),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 4, .production_id = 48),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 8, .production_id = 61),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 8, .production_id = 61),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 4, .production_id = 48),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 4, .production_id = 48),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 47),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 47),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 46),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 46),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 4, .production_id = 6),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 4, .production_id = 6),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 6, .production_id = 35),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 6, .production_id = 35),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 45),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 45),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 44),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 44),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 43),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 43),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_end, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_end, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 41),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 41),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 26),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 26),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_c_t_statement, 6, .production_id = 39),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_c_t_statement, 6, .production_id = 39),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_var_chr_statement, 6, .production_id = 38),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_var_chr_statement, 6, .production_id = 38),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 5, .production_id = 37),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 5, .production_id = 37),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 8),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 8),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 5, .production_id = 37),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 5, .production_id = 37),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_pos_statement, 4, .production_id = 7),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_pos_statement, 4, .production_id = 7),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_bits_statement, 4, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_bits_statement, 4, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 3, .production_id = 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 3, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 3, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 3, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 36),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 36),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 35),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 35),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 16),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 16),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_d_string_statement, 4, .production_id = 5),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_d_string_statement, 4, .production_id = 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 5, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 5, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 55),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 55),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_var_chr_statement, 5, .production_id = 18),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_var_chr_statement, 5, .production_id = 18),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 5, .production_id = 33),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 5, .production_id = 33),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_array_statement, 5, .production_id = 19),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_array_statement, 5, .production_id = 19),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 8, .production_id = 60),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 8, .production_id = 60),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 31),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 31),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 30),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 30),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 5, .production_id = 23),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 5, .production_id = 23),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 29),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 29),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 21),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 21),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_d_string_statement, 5, .production_id = 21),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_d_string_statement, 5, .production_id = 21),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 5, .production_id = 20),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 5, .production_id = 20),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 3, .production_id = 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 3, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 3, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 3, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_pos_statement, 3, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_pos_statement, 3, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_array_statement, 5, .production_id = 27),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_array_statement, 5, .production_id = 27),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 40),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 40),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_statement, 3, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_statement, 3, .production_id = 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 59),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 59),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_c_t_statement, 5, .production_id = 22),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_c_t_statement, 5, .production_id = 22),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 25),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 25),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_bits_statement, 5, .production_id = 23),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_bits_statement, 5, .production_id = 23),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 7, .production_id = 58),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 7, .production_id = 58),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 24),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 24),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 3, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 3, .production_id = 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 7, .production_id = 56),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 7, .production_id = 56),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 7, .production_id = 57),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 7, .production_id = 57),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 28), SHIFT_REPEAT(137),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 28),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 28),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(139),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 34), SHIFT_REPEAT(137),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 34),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 34),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 11),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 11),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 9),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 9),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 13),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 13),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_value, 2, .production_id = 15),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_value, 2, .production_id = 15),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 32),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 32), SHIFT_REPEAT(136),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 43),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 12),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [747] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 42),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
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
