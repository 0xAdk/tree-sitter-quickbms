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
#define STATE_COUNT 228
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 56

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
  aux_sym_save_pos_statement_token1 = 10,
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
  aux_sym_binary_op_token1 = 31,
  aux_sym_binary_op_token2 = 32,
  aux_sym_binary_op_token3 = 33,
  anon_sym_GT = 34,
  aux_sym_binary_op_token4 = 35,
  aux_sym_binary_op_token5 = 36,
  aux_sym_binary_op_token6 = 37,
  anon_sym_LT_GT = 38,
  anon_sym_BANG_EQ = 39,
  anon_sym_BANG_EQ_EQ = 40,
  aux_sym_binary_op_token7 = 41,
  anon_sym_EQ = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_EQ_EQ_EQ = 44,
  aux_sym_binary_op_token8 = 45,
  aux_sym_binary_op_token9 = 46,
  aux_sym_binary_op_token10 = 47,
  aux_sym_binary_op_token11 = 48,
  anon_sym_GT_EQ = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_AMP = 51,
  anon_sym_AMP_AMP = 52,
  aux_sym_binary_op_token12 = 53,
  aux_sym_binary_op_token13 = 54,
  aux_sym_binary_op_token14 = 55,
  aux_sym_binary_op_token15 = 56,
  anon_sym_CARET = 57,
  anon_sym_CARET_CARET = 58,
  aux_sym_binary_op_token16 = 59,
  anon_sym_PIPE = 60,
  anon_sym_PIPE_PIPE = 61,
  aux_sym_binary_op_token17 = 62,
  anon_sym_PERCENT = 63,
  aux_sym_binary_op_token18 = 64,
  anon_sym_SLASH = 65,
  aux_sym_binary_op_token19 = 66,
  anon_sym_LT_LT = 67,
  aux_sym_binary_op_token20 = 68,
  anon_sym_GT_GT = 69,
  aux_sym_binary_op_token21 = 70,
  anon_sym_BANG = 71,
  aux_sym_binary_op_token22 = 72,
  anon_sym_BANG_BANG = 73,
  anon_sym_TILDE = 74,
  aux_sym_binary_op_token23 = 75,
  aux_sym_binary_op_token24 = 76,
  aux_sym_binary_op_token25 = 77,
  aux_sym_binary_op_token26 = 78,
  aux_sym_binary_op_token27 = 79,
  aux_sym_binary_op_token28 = 80,
  aux_sym_binary_op_token29 = 81,
  aux_sym_binary_op_token30 = 82,
  aux_sym_binary_op_token31 = 83,
  anon_sym_and = 84,
  anon_sym_or = 85,
  aux_sym_call_function_statement_token1 = 86,
  aux_sym_start_function_statement_token1 = 87,
  aux_sym_start_function_statement_token2 = 88,
  aux_sym_next_statement_token1 = 89,
  aux_sym_prev_statement_token1 = 90,
  aux_sym_for_statement_token1 = 91,
  aux_sym_label_statement_token1 = 92,
  aux_sym_break_statement_token1 = 93,
  aux_sym_continue_statement_token1 = 94,
  aux_sym_print_statement_token1 = 95,
  aux_sym_log_statement_token1 = 96,
  aux_sym_clog_statement_token1 = 97,
  aux_sym_s_log_statement_token1 = 98,
  sym_statement_list = 99,
  sym_variable = 100,
  sym__statement = 101,
  sym__statement_end = 102,
  sym__empty_statement = 103,
  sym_version_statement = 104,
  sym_math_statement = 105,
  sym_get_statement = 106,
  sym_save_pos_statement = 107,
  sym_set_statement = 108,
  sym_put_var_chr_statement = 109,
  sym_put_array_statement = 110,
  sym_put_statement = 111,
  sym_put_d_string_statement = 112,
  sym_put_c_t_statement = 113,
  sym_put_bits_statement = 114,
  sym__put_statements = 115,
  sym_goto_statement = 116,
  sym_if_statement = 117,
  sym_elif_statement = 118,
  sym_else_statement = 119,
  sym__comparison_value = 120,
  sym_binary_comparison = 121,
  sym_binary_op = 122,
  sym_binary_expression = 123,
  sym_op_value = 124,
  sym_call_function_statement = 125,
  sym_start_function_statement = 126,
  sym_next_statement = 127,
  sym_prev_statement = 128,
  sym_for_statement = 129,
  sym_label_statement = 130,
  sym_break_statement = 131,
  sym_continue_statement = 132,
  sym_print_statement = 133,
  sym_log_statement = 134,
  sym_clog_statement = 135,
  sym_s_log_statement = 136,
  aux_sym_statement_list_repeat1 = 137,
  aux_sym_put_array_statement_repeat1 = 138,
  aux_sym_if_statement_repeat1 = 139,
  aux_sym_binary_expression_repeat1 = 140,
  aux_sym_call_function_statement_repeat1 = 141,
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
  [sym_get_statement] = "get_statement",
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
  [aux_sym_get_statement_token1] = aux_sym_get_statement_token1,
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
  [sym_get_statement] = sym_get_statement,
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
  [aux_sym_get_statement_token1] = {
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
  [sym_get_statement] = {
    .visible = true,
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
  field_encrypted_size = 10,
  field_file_num = 11,
  field_file_number = 12,
  field_id = 13,
  field_index = 14,
  field_initializer = 15,
  field_left = 16,
  field_length = 17,
  field_message = 18,
  field_name = 19,
  field_offset = 20,
  field_op = 21,
  field_right = 22,
  field_save_variables = 23,
  field_size = 24,
  field_type = 25,
  field_update = 26,
  field_value = 27,
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
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
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
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 3},
  [24] = {.index = 46, .length = 3},
  [25] = {.index = 49, .length = 3},
  [26] = {.index = 52, .length = 3},
  [27] = {.index = 55, .length = 1},
  [28] = {.index = 56, .length = 2},
  [29] = {.index = 58, .length = 3},
  [30] = {.index = 61, .length = 2},
  [31] = {.index = 63, .length = 2},
  [32] = {.index = 65, .length = 2},
  [33] = {.index = 67, .length = 3},
  [34] = {.index = 70, .length = 4},
  [35] = {.index = 74, .length = 4},
  [36] = {.index = 78, .length = 1},
  [37] = {.index = 79, .length = 2},
  [38] = {.index = 81, .length = 2},
  [39] = {.index = 83, .length = 2},
  [40] = {.index = 85, .length = 3},
  [41] = {.index = 88, .length = 3},
  [42] = {.index = 91, .length = 2},
  [43] = {.index = 93, .length = 4},
  [44] = {.index = 97, .length = 4},
  [45] = {.index = 101, .length = 4},
  [46] = {.index = 105, .length = 3},
  [47] = {.index = 108, .length = 3},
  [48] = {.index = 111, .length = 3},
  [49] = {.index = 114, .length = 4},
  [50] = {.index = 118, .length = 5},
  [51] = {.index = 123, .length = 5},
  [52] = {.index = 128, .length = 5},
  [53] = {.index = 133, .length = 4},
  [54] = {.index = 137, .length = 6},
  [55] = {.index = 143, .length = 6},
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
    {field_file_num, 2},
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_value, 2},
  [9] =
    {field_name, 0},
  [10] =
    {field_length, 2},
    {field_name, 1},
  [12] =
    {field_bits, 2},
    {field_name, 1},
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
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [32] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [35] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
  [38] =
    {field_array, 1},
    {field_index, 2},
    {field_name, 3, .inherited = true},
  [41] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [43] =
    {field_file_number, 3},
    {field_length, 2},
    {field_name, 1},
  [46] =
    {field_char, 3},
    {field_name, 1},
    {field_type, 2},
  [49] =
    {field_bits, 2},
    {field_file_number, 3},
    {field_name, 1},
  [52] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [55] =
    {field_condition, 1},
  [56] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [58] =
    {field_argument, 3, .inherited = true},
    {field_name, 1},
    {field_save_variables, 2},
  [61] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [63] =
    {field_body, 3},
    {field_name, 1},
  [65] =
    {field_initializer, 2},
    {field_name, 1},
  [67] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [70] =
    {field_name, 1},
    {field_name, 3},
    {field_offset, 2},
    {field_type, 4},
  [74] =
    {field_char, 3},
    {field_file_number, 4},
    {field_name, 1},
    {field_type, 2},
  [78] =
    {field_consequence, 2},
  [79] =
    {field_condition, 1},
    {field_consequence, 3},
  [81] =
    {field_alternative, 3},
    {field_condition, 1},
  [83] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [85] =
    {field_body, 4},
    {field_initializer, 2},
    {field_name, 1},
  [88] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [91] =
    {field_name, 1},
    {field_update, 2},
  [93] =
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [97] =
    {field_compressed_size, 3},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [101] =
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [105] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [108] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [111] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [114] =
    {field_body, 5},
    {field_condition, 3},
    {field_initializer, 2},
    {field_name, 1},
  [118] =
    {field_encrypted_size, 5},
    {field_file_number, 4},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
  [123] =
    {field_compressed_size, 3},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [128] =
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 3},
    {field_type, 4},
  [133] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
  [137] =
    {field_compressed_size, 3},
    {field_encrypted_size, 6},
    {field_file_number, 5},
    {field_name, 1},
    {field_offset, 2},
    {field_size, 4},
  [143] =
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
  [83] = 12,
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
  [125] = 125,
  [126] = 126,
  [127] = 12,
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
  [141] = 138,
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
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 12,
  [218] = 130,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(264);
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '&') ADVANCE(327);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '<') ADVANCE(306);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == '^') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(304);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '~') ADVANCE(350);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(249);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '/') ADVANCE(271);
      if (lookahead == ';') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '&') ADVANCE(327);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '<') ADVANCE(306);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == '^') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(304);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '~') ADVANCE(350);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(118);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(328);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(278);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(277);
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
      if (lookahead == 'D') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(298);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(295);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(248);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(224);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(296);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(337);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 56:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(300);
      END_STATE();
    case 99:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(302);
      END_STATE();
    case 100:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(301);
      END_STATE();
    case 101:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 102:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(250);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(252);
      END_STATE();
    case 105:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(253);
      END_STATE();
    case 106:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 107:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 108:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 109:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 110:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 112:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 113:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 114:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(178);
      END_STATE();
    case 128:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(369);
      END_STATE();
    case 130:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(248);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(224);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 148:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 149:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 185:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 186:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 187:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 188:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 189:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 190:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 192:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 193:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(248);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(224);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 223:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 248:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 249:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 250:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 251:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 252:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 253:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 254:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(366);
      END_STATE();
    case 255:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 256:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 257:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 258:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(309);
      END_STATE();
    case 259:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 260:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 261:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 262:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 263:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(171);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      END_STATE();
    case 264:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_save_pos_statement_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_put_var_chr_statement_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_put_array_statement_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_put_statement_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_put_d_string_statement_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_put_c_t_statement_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_put_bits_statement_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(326);
      if (lookahead == '>') ADVANCE(314);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_binary_op_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_binary_op_token2);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_binary_op_token3);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '>') ADVANCE(345);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_binary_op_token4);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_binary_op_token5);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_binary_op_token6);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_binary_op_token7);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_binary_op_token8);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_binary_op_token9);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_binary_op_token10);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_binary_op_token11);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_binary_op_token12);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_binary_op_token13);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_binary_op_token14);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_binary_op_token15);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_binary_op_token16);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_binary_op_token17);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_binary_op_token18);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_binary_op_token19);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_binary_op_token20);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_binary_op_token21);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(349);
      if (lookahead == '=') ADVANCE(315);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_binary_op_token22);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_binary_op_token23);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_binary_op_token24);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_binary_op_token25);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_binary_op_token26);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_binary_op_token28);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_binary_op_token29);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_binary_op_token30);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_binary_op_token31);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_call_function_statement_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_start_function_statement_token2);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_next_statement_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_prev_statement_token1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_label_statement_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_break_statement_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_continue_statement_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_log_statement_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_clog_statement_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_s_log_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 263},
  [2] = {.lex_state = 263},
  [3] = {.lex_state = 263},
  [4] = {.lex_state = 263},
  [5] = {.lex_state = 263},
  [6] = {.lex_state = 263},
  [7] = {.lex_state = 263},
  [8] = {.lex_state = 263},
  [9] = {.lex_state = 263},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 263},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 263},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 263},
  [18] = {.lex_state = 263},
  [19] = {.lex_state = 263},
  [20] = {.lex_state = 263},
  [21] = {.lex_state = 263},
  [22] = {.lex_state = 263},
  [23] = {.lex_state = 263},
  [24] = {.lex_state = 263},
  [25] = {.lex_state = 263},
  [26] = {.lex_state = 263},
  [27] = {.lex_state = 263},
  [28] = {.lex_state = 263},
  [29] = {.lex_state = 263},
  [30] = {.lex_state = 263},
  [31] = {.lex_state = 263},
  [32] = {.lex_state = 263},
  [33] = {.lex_state = 263},
  [34] = {.lex_state = 263},
  [35] = {.lex_state = 263},
  [36] = {.lex_state = 263},
  [37] = {.lex_state = 263},
  [38] = {.lex_state = 263},
  [39] = {.lex_state = 263},
  [40] = {.lex_state = 263},
  [41] = {.lex_state = 263},
  [42] = {.lex_state = 263},
  [43] = {.lex_state = 263},
  [44] = {.lex_state = 263},
  [45] = {.lex_state = 263},
  [46] = {.lex_state = 263},
  [47] = {.lex_state = 263},
  [48] = {.lex_state = 263},
  [49] = {.lex_state = 263},
  [50] = {.lex_state = 263},
  [51] = {.lex_state = 263},
  [52] = {.lex_state = 263},
  [53] = {.lex_state = 263},
  [54] = {.lex_state = 263},
  [55] = {.lex_state = 263},
  [56] = {.lex_state = 263},
  [57] = {.lex_state = 263},
  [58] = {.lex_state = 263},
  [59] = {.lex_state = 263},
  [60] = {.lex_state = 263},
  [61] = {.lex_state = 263},
  [62] = {.lex_state = 263},
  [63] = {.lex_state = 263},
  [64] = {.lex_state = 263},
  [65] = {.lex_state = 263},
  [66] = {.lex_state = 263},
  [67] = {.lex_state = 263},
  [68] = {.lex_state = 263},
  [69] = {.lex_state = 263},
  [70] = {.lex_state = 263},
  [71] = {.lex_state = 263},
  [72] = {.lex_state = 263},
  [73] = {.lex_state = 263},
  [74] = {.lex_state = 263},
  [75] = {.lex_state = 263},
  [76] = {.lex_state = 263},
  [77] = {.lex_state = 263},
  [78] = {.lex_state = 263},
  [79] = {.lex_state = 263},
  [80] = {.lex_state = 263},
  [81] = {.lex_state = 263},
  [82] = {.lex_state = 263},
  [83] = {.lex_state = 263},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 263},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 263},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
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
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 263},
  [118] = {.lex_state = 263},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 263},
  [121] = {.lex_state = 263},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 263},
  [135] = {.lex_state = 263},
  [136] = {.lex_state = 263},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 263},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 263},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 263},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 263},
  [152] = {.lex_state = 263},
  [153] = {.lex_state = 263},
  [154] = {.lex_state = 263},
  [155] = {.lex_state = 263},
  [156] = {.lex_state = 263},
  [157] = {.lex_state = 263},
  [158] = {.lex_state = 263},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 263},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 263},
  [165] = {.lex_state = 263},
  [166] = {.lex_state = 263},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 263},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 263},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 263},
  [179] = {.lex_state = 263},
  [180] = {.lex_state = 263},
  [181] = {.lex_state = 263},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 263},
  [184] = {.lex_state = 263},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 263},
  [187] = {.lex_state = 263},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 263},
  [192] = {.lex_state = 263},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 263},
  [197] = {.lex_state = 263},
  [198] = {.lex_state = 263},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 263},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 263},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 263},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 263},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
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
    [sym_statement_list] = STATE(222),
    [sym__statement] = STATE(4),
    [sym__statement_end] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_version_statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_get_statement] = STATE(4),
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
    [aux_sym_get_statement_token1] = ACTIONS(11),
    [aux_sym_save_pos_statement_token1] = ACTIONS(13),
    [aux_sym_set_statement_token1] = ACTIONS(15),
    [aux_sym_put_var_chr_statement_token1] = ACTIONS(17),
    [aux_sym_put_array_statement_token1] = ACTIONS(19),
    [aux_sym_put_statement_token1] = ACTIONS(21),
    [aux_sym_put_d_string_statement_token1] = ACTIONS(23),
    [aux_sym_put_c_t_statement_token1] = ACTIONS(25),
    [aux_sym_put_bits_statement_token1] = ACTIONS(27),
    [aux_sym_goto_statement_token1] = ACTIONS(29),
    [aux_sym_if_statement_token1] = ACTIONS(31),
    [aux_sym_call_function_statement_token1] = ACTIONS(33),
    [aux_sym_start_function_statement_token1] = ACTIONS(35),
    [aux_sym_for_statement_token1] = ACTIONS(37),
    [aux_sym_label_statement_token1] = ACTIONS(39),
    [aux_sym_break_statement_token1] = ACTIONS(41),
    [aux_sym_continue_statement_token1] = ACTIONS(43),
    [aux_sym_print_statement_token1] = ACTIONS(45),
    [aux_sym_log_statement_token1] = ACTIONS(47),
    [aux_sym_clog_statement_token1] = ACTIONS(49),
    [aux_sym_s_log_statement_token1] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 33,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(53), 1,
      aux_sym_if_statement_token2,
    ACTIONS(55), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(57), 1,
      aux_sym_else_statement_token1,
    STATE(123), 1,
      sym_statement_list,
    STATE(125), 1,
      aux_sym_if_statement_repeat1,
    STATE(219), 1,
      sym_elif_statement,
    STATE(227), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [128] = 28,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      aux_sym_version_statement_token1,
    ACTIONS(70), 1,
      aux_sym_math_statement_token1,
    ACTIONS(73), 1,
      aux_sym_get_statement_token1,
    ACTIONS(76), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(79), 1,
      aux_sym_set_statement_token1,
    ACTIONS(82), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(85), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(88), 1,
      aux_sym_put_statement_token1,
    ACTIONS(91), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(94), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(97), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(100), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(103), 1,
      aux_sym_if_statement_token1,
    ACTIONS(108), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(111), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(114), 1,
      aux_sym_for_statement_token1,
    ACTIONS(117), 1,
      aux_sym_label_statement_token1,
    ACTIONS(120), 1,
      aux_sym_break_statement_token1,
    ACTIONS(123), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(126), 1,
      aux_sym_print_statement_token1,
    ACTIONS(129), 1,
      aux_sym_log_statement_token1,
    ACTIONS(132), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(135), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(61), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(106), 6,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_start_function_statement_token2,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(3), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [246] = 28,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(142), 6,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_start_function_statement_token2,
      aux_sym_next_statement_token1,
      aux_sym_prev_statement_token1,
    STATE(3), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [364] = 30,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(144), 1,
      aux_sym_next_statement_token1,
    ACTIONS(146), 1,
      aux_sym_prev_statement_token1,
    STATE(142), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(66), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [484] = 30,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(144), 1,
      aux_sym_next_statement_token1,
    ACTIONS(146), 1,
      aux_sym_prev_statement_token1,
    STATE(174), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(38), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [604] = 30,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(144), 1,
      aux_sym_next_statement_token1,
    ACTIONS(146), 1,
      aux_sym_prev_statement_token1,
    STATE(207), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(61), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [724] = 30,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(144), 1,
      aux_sym_next_statement_token1,
    ACTIONS(146), 1,
      aux_sym_prev_statement_token1,
    STATE(199), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(24), 2,
      sym_next_statement,
      sym_prev_statement,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [844] = 28,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    STATE(213), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(148), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [959] = 5,
    ACTIONS(150), 1,
      anon_sym_u,
    ACTIONS(152), 1,
      anon_sym_0,
    STATE(133), 1,
      sym_binary_op,
    ACTIONS(154), 10,
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
    ACTIONS(156), 44,
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
  [1027] = 28,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(158), 1,
      aux_sym_if_statement_token2,
    STATE(221), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [1140] = 2,
    ACTIONS(162), 10,
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
    ACTIONS(160), 46,
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
  [1201] = 28,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_save_pos_statement_token1,
    ACTIONS(15), 1,
      aux_sym_set_statement_token1,
    ACTIONS(17), 1,
      aux_sym_put_var_chr_statement_token1,
    ACTIONS(19), 1,
      aux_sym_put_array_statement_token1,
    ACTIONS(21), 1,
      aux_sym_put_statement_token1,
    ACTIONS(23), 1,
      aux_sym_put_d_string_statement_token1,
    ACTIONS(25), 1,
      aux_sym_put_c_t_statement_token1,
    ACTIONS(27), 1,
      aux_sym_put_bits_statement_token1,
    ACTIONS(29), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_call_function_statement_token1,
    ACTIONS(35), 1,
      aux_sym_start_function_statement_token1,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(39), 1,
      aux_sym_label_statement_token1,
    ACTIONS(41), 1,
      aux_sym_break_statement_token1,
    ACTIONS(43), 1,
      aux_sym_continue_statement_token1,
    ACTIONS(45), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      aux_sym_log_statement_token1,
    ACTIONS(49), 1,
      aux_sym_clog_statement_token1,
    ACTIONS(51), 1,
      aux_sym_s_log_statement_token1,
    ACTIONS(164), 1,
      aux_sym_start_function_statement_token2,
    STATE(226), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(4), 28,
      sym__statement,
      sym__statement_end,
      sym__empty_statement,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_save_pos_statement,
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
  [1314] = 3,
    ACTIONS(166), 1,
      anon_sym_0,
    ACTIONS(168), 10,
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
    ACTIONS(170), 44,
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
  [1376] = 2,
    ACTIONS(168), 10,
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
    ACTIONS(170), 44,
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
  [1435] = 2,
    ACTIONS(172), 10,
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
    ACTIONS(174), 44,
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
  [1494] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(178), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1532] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(182), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1570] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(186), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1608] = 2,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(190), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1646] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(194), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1684] = 2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(198), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1722] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(202), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1760] = 2,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(206), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1798] = 2,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1836] = 2,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(214), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1874] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(218), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1912] = 2,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(222), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1950] = 2,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(226), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [1988] = 2,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(230), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2026] = 2,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(234), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2064] = 2,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(238), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2102] = 2,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(242), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2140] = 2,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(246), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2178] = 2,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(250), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2216] = 2,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(254), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2254] = 2,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(258), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2292] = 2,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(262), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(266), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2368] = 2,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2406] = 2,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(274), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2444] = 2,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(278), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2482] = 2,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(282), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2520] = 2,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(286), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2558] = 2,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(290), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2596] = 2,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(294), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2634] = 2,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(298), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2672] = 2,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(302), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2710] = 2,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(306), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2748] = 2,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(310), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2786] = 2,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(314), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2824] = 2,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(318), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2862] = 2,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(322), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2900] = 2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(326), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2938] = 2,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(330), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [2976] = 2,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(334), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3014] = 2,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(338), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3052] = 2,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(342), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3090] = 2,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(346), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3128] = 2,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(350), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3166] = 2,
    ACTIONS(352), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(354), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3204] = 2,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(358), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3242] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(362), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3280] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(366), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3318] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(370), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3356] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(374), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3394] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(378), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3432] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(382), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3470] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(386), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3508] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(390), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3546] = 2,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(394), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3584] = 2,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(398), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3622] = 2,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(402), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3660] = 2,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(406), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3698] = 2,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(410), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3736] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(414), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3774] = 2,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(418), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3812] = 2,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(422), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3850] = 2,
    ACTIONS(424), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(426), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3888] = 2,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(430), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3926] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(434), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [3964] = 2,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(438), 31,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
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
  [4002] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 11,
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
  [4019] = 6,
    ACTIONS(442), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__statement_end,
    STATE(88), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(126), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4041] = 6,
    ACTIONS(444), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__statement_end,
    STATE(113), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(128), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4063] = 6,
    ACTIONS(448), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym__statement_end,
    STATE(141), 1,
      sym_variable,
    STATE(143), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4085] = 4,
    ACTIONS(450), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(452), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [4103] = 6,
    ACTIONS(454), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym__statement_end,
    STATE(92), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(126), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4125] = 6,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statement_end,
    STATE(141), 1,
      sym_variable,
    STATE(178), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4147] = 6,
    ACTIONS(458), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym__statement_end,
    STATE(141), 1,
      sym_variable,
    STATE(180), 1,
      sym_op_value,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4169] = 6,
    ACTIONS(460), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym__statement_end,
    STATE(86), 1,
      sym_op_value,
    STATE(138), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4191] = 5,
    ACTIONS(467), 1,
      anon_sym_LF,
    STATE(92), 1,
      aux_sym_call_function_statement_repeat1,
    STATE(126), 1,
      sym_variable,
    ACTIONS(465), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(462), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4210] = 5,
    ACTIONS(469), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statement_end,
    STATE(102), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4229] = 5,
    ACTIONS(471), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym__statement_end,
    STATE(110), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4248] = 5,
    ACTIONS(473), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym__statement_end,
    STATE(84), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4267] = 5,
    ACTIONS(477), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym__statement_end,
    STATE(197), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4286] = 4,
    ACTIONS(481), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(479), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(483), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4303] = 5,
    ACTIONS(485), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym__statement_end,
    STATE(164), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4322] = 5,
    ACTIONS(487), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym__statement_end,
    STATE(89), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4341] = 5,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym__statement_end,
    STATE(90), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4360] = 5,
    ACTIONS(491), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statement_end,
    STATE(106), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4379] = 5,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__statement_end,
    STATE(187), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4398] = 5,
    ACTIONS(495), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statement_end,
    STATE(91), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4417] = 5,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym__statement_end,
    STATE(154), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4436] = 5,
    ACTIONS(499), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym__statement_end,
    STATE(153), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4455] = 5,
    ACTIONS(501), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statement_end,
    STATE(98), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4474] = 5,
    ACTIONS(503), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym__statement_end,
    STATE(184), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4493] = 5,
    ACTIONS(505), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym__statement_end,
    STATE(151), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4512] = 5,
    ACTIONS(507), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym__statement_end,
    STATE(135), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4531] = 5,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statement_end,
    STATE(203), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4550] = 5,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__statement_end,
    STATE(145), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4569] = 5,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym__statement_end,
    STATE(156), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4588] = 5,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(113), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(128), 1,
      sym_variable,
    ACTIONS(518), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(515), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4607] = 5,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym__statement_end,
    STATE(87), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4626] = 5,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(80), 1,
      sym__statement_end,
    STATE(179), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4645] = 5,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym__statement_end,
    STATE(183), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4664] = 4,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(528), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(483), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4681] = 4,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(532), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(536), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4698] = 4,
    STATE(117), 1,
      sym_binary_comparison,
    STATE(134), 1,
      sym_binary_expression,
    STATE(10), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(539), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4714] = 2,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(532), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4726] = 2,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(541), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [4738] = 4,
    STATE(117), 1,
      sym_binary_comparison,
    STATE(158), 1,
      sym_binary_expression,
    STATE(10), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(539), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4754] = 6,
    ACTIONS(545), 1,
      aux_sym_if_statement_token2,
    ACTIONS(547), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(549), 1,
      aux_sym_else_statement_token1,
    STATE(124), 1,
      aux_sym_if_statement_repeat1,
    STATE(219), 1,
      sym_elif_statement,
    STATE(225), 1,
      sym_else_statement,
  [4773] = 6,
    ACTIONS(547), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(549), 1,
      aux_sym_else_statement_token1,
    ACTIONS(551), 1,
      aux_sym_if_statement_token2,
    STATE(132), 1,
      aux_sym_if_statement_repeat1,
    STATE(219), 1,
      sym_elif_statement,
    STATE(220), 1,
      sym_else_statement,
  [4792] = 6,
    ACTIONS(547), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(549), 1,
      aux_sym_else_statement_token1,
    ACTIONS(553), 1,
      aux_sym_if_statement_token2,
    STATE(132), 1,
      aux_sym_if_statement_repeat1,
    STATE(219), 1,
      sym_elif_statement,
    STATE(223), 1,
      sym_else_statement,
  [4811] = 2,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(555), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4822] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4833] = 2,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(559), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4844] = 3,
    STATE(120), 1,
      sym_binary_comparison,
    STATE(10), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(539), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4857] = 2,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(563), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [4868] = 3,
    STATE(85), 1,
      aux_sym_put_array_statement_repeat1,
    STATE(128), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4880] = 4,
    ACTIONS(569), 1,
      aux_sym_elif_statement_token1,
    STATE(132), 1,
      aux_sym_if_statement_repeat1,
    STATE(219), 1,
      sym_elif_statement,
    ACTIONS(567), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [4894] = 2,
    STATE(121), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4904] = 3,
    ACTIONS(572), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4915] = 3,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4926] = 3,
    ACTIONS(576), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4937] = 2,
    STATE(186), 1,
      sym_variable,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4946] = 2,
    STATE(130), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4955] = 2,
    STATE(112), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4964] = 3,
    ACTIONS(578), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [4975] = 2,
    STATE(218), 1,
      sym_variable,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [4984] = 3,
    ACTIONS(580), 1,
      aux_sym_next_statement_token1,
    ACTIONS(582), 1,
      aux_sym_prev_statement_token1,
    STATE(39), 2,
      sym_next_statement,
      sym_prev_statement,
  [4995] = 3,
    ACTIONS(584), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5006] = 2,
    STATE(108), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5015] = 3,
    ACTIONS(586), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5026] = 2,
    STATE(198), 1,
      sym_variable,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5035] = 2,
    STATE(93), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5044] = 2,
    STATE(201), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5053] = 2,
    STATE(205), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5062] = 2,
    STATE(206), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5071] = 3,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5082] = 3,
    ACTIONS(590), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5093] = 3,
    ACTIONS(592), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5104] = 3,
    ACTIONS(594), 1,
      anon_sym_LF,
    STATE(33), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5115] = 3,
    ACTIONS(596), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5126] = 3,
    ACTIONS(598), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5137] = 3,
    ACTIONS(600), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5148] = 3,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5159] = 2,
    STATE(185), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5168] = 2,
    STATE(182), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5177] = 2,
    STATE(111), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5186] = 3,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5197] = 2,
    STATE(177), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5206] = 3,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5217] = 3,
    ACTIONS(608), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5228] = 3,
    ACTIONS(610), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5239] = 2,
    STATE(176), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5248] = 3,
    ACTIONS(612), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5259] = 2,
    STATE(115), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5268] = 2,
    STATE(139), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5277] = 2,
    STATE(109), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5286] = 3,
    ACTIONS(614), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5297] = 2,
    STATE(116), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5306] = 3,
    ACTIONS(580), 1,
      aux_sym_next_statement_token1,
    ACTIONS(582), 1,
      aux_sym_prev_statement_token1,
    STATE(25), 2,
      sym_next_statement,
      sym_prev_statement,
  [5317] = 2,
    STATE(131), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5326] = 2,
    STATE(144), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5335] = 2,
    STATE(107), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5344] = 3,
    ACTIONS(616), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5355] = 3,
    ACTIONS(618), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5366] = 3,
    ACTIONS(620), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5377] = 3,
    ACTIONS(622), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5388] = 2,
    STATE(96), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5397] = 3,
    ACTIONS(624), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5408] = 3,
    ACTIONS(626), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5419] = 2,
    STATE(146), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5428] = 3,
    ACTIONS(628), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5439] = 3,
    ACTIONS(630), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5450] = 2,
    STATE(148), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5459] = 2,
    STATE(175), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5468] = 2,
    STATE(149), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5477] = 3,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5488] = 3,
    ACTIONS(634), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5499] = 2,
    STATE(173), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5508] = 2,
    STATE(150), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5517] = 2,
    STATE(152), 1,
      sym_variable,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5526] = 3,
    ACTIONS(636), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5537] = 3,
    ACTIONS(638), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5548] = 3,
    ACTIONS(640), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5559] = 3,
    ACTIONS(580), 1,
      aux_sym_next_statement_token1,
    ACTIONS(582), 1,
      aux_sym_prev_statement_token1,
    STATE(69), 2,
      sym_next_statement,
      sym_prev_statement,
  [5570] = 2,
    STATE(155), 1,
      sym_variable,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5579] = 2,
    STATE(101), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5588] = 2,
    STATE(157), 1,
      sym_variable,
    ACTIONS(475), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5597] = 3,
    ACTIONS(642), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5608] = 2,
    STATE(95), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5617] = 2,
    STATE(147), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5626] = 2,
    STATE(94), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5635] = 3,
    ACTIONS(580), 1,
      aux_sym_next_statement_token1,
    ACTIONS(582), 1,
      aux_sym_prev_statement_token1,
    STATE(57), 2,
      sym_next_statement,
      sym_prev_statement,
  [5646] = 2,
    STATE(114), 1,
      sym_variable,
    ACTIONS(440), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5655] = 2,
    STATE(171), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5664] = 2,
    STATE(169), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5673] = 2,
    STATE(170), 1,
      sym_variable,
    ACTIONS(446), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5682] = 3,
    ACTIONS(644), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym__statement_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [5693] = 1,
    ACTIONS(646), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5699] = 1,
    ACTIONS(648), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5705] = 1,
    ACTIONS(650), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5711] = 1,
    ACTIONS(652), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5717] = 1,
    ACTIONS(162), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [5723] = 2,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(563), 2,
      sym_comment,
      anon_sym_SEMI,
  [5731] = 1,
    ACTIONS(654), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [5737] = 1,
    ACTIONS(656), 1,
      aux_sym_if_statement_token2,
  [5741] = 1,
    ACTIONS(658), 1,
      aux_sym_if_statement_token2,
  [5745] = 1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
  [5749] = 1,
    ACTIONS(662), 1,
      aux_sym_if_statement_token2,
  [5753] = 1,
    ACTIONS(664), 1,
      anon_sym_LF,
  [5757] = 1,
    ACTIONS(666), 1,
      aux_sym_if_statement_token2,
  [5761] = 1,
    ACTIONS(668), 1,
      aux_sym_start_function_statement_token2,
  [5765] = 1,
    ACTIONS(670), 1,
      aux_sym_if_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 128,
  [SMALL_STATE(4)] = 246,
  [SMALL_STATE(5)] = 364,
  [SMALL_STATE(6)] = 484,
  [SMALL_STATE(7)] = 604,
  [SMALL_STATE(8)] = 724,
  [SMALL_STATE(9)] = 844,
  [SMALL_STATE(10)] = 959,
  [SMALL_STATE(11)] = 1027,
  [SMALL_STATE(12)] = 1140,
  [SMALL_STATE(13)] = 1201,
  [SMALL_STATE(14)] = 1314,
  [SMALL_STATE(15)] = 1376,
  [SMALL_STATE(16)] = 1435,
  [SMALL_STATE(17)] = 1494,
  [SMALL_STATE(18)] = 1532,
  [SMALL_STATE(19)] = 1570,
  [SMALL_STATE(20)] = 1608,
  [SMALL_STATE(21)] = 1646,
  [SMALL_STATE(22)] = 1684,
  [SMALL_STATE(23)] = 1722,
  [SMALL_STATE(24)] = 1760,
  [SMALL_STATE(25)] = 1798,
  [SMALL_STATE(26)] = 1836,
  [SMALL_STATE(27)] = 1874,
  [SMALL_STATE(28)] = 1912,
  [SMALL_STATE(29)] = 1950,
  [SMALL_STATE(30)] = 1988,
  [SMALL_STATE(31)] = 2026,
  [SMALL_STATE(32)] = 2064,
  [SMALL_STATE(33)] = 2102,
  [SMALL_STATE(34)] = 2140,
  [SMALL_STATE(35)] = 2178,
  [SMALL_STATE(36)] = 2216,
  [SMALL_STATE(37)] = 2254,
  [SMALL_STATE(38)] = 2292,
  [SMALL_STATE(39)] = 2330,
  [SMALL_STATE(40)] = 2368,
  [SMALL_STATE(41)] = 2406,
  [SMALL_STATE(42)] = 2444,
  [SMALL_STATE(43)] = 2482,
  [SMALL_STATE(44)] = 2520,
  [SMALL_STATE(45)] = 2558,
  [SMALL_STATE(46)] = 2596,
  [SMALL_STATE(47)] = 2634,
  [SMALL_STATE(48)] = 2672,
  [SMALL_STATE(49)] = 2710,
  [SMALL_STATE(50)] = 2748,
  [SMALL_STATE(51)] = 2786,
  [SMALL_STATE(52)] = 2824,
  [SMALL_STATE(53)] = 2862,
  [SMALL_STATE(54)] = 2900,
  [SMALL_STATE(55)] = 2938,
  [SMALL_STATE(56)] = 2976,
  [SMALL_STATE(57)] = 3014,
  [SMALL_STATE(58)] = 3052,
  [SMALL_STATE(59)] = 3090,
  [SMALL_STATE(60)] = 3128,
  [SMALL_STATE(61)] = 3166,
  [SMALL_STATE(62)] = 3204,
  [SMALL_STATE(63)] = 3242,
  [SMALL_STATE(64)] = 3280,
  [SMALL_STATE(65)] = 3318,
  [SMALL_STATE(66)] = 3356,
  [SMALL_STATE(67)] = 3394,
  [SMALL_STATE(68)] = 3432,
  [SMALL_STATE(69)] = 3470,
  [SMALL_STATE(70)] = 3508,
  [SMALL_STATE(71)] = 3546,
  [SMALL_STATE(72)] = 3584,
  [SMALL_STATE(73)] = 3622,
  [SMALL_STATE(74)] = 3660,
  [SMALL_STATE(75)] = 3698,
  [SMALL_STATE(76)] = 3736,
  [SMALL_STATE(77)] = 3774,
  [SMALL_STATE(78)] = 3812,
  [SMALL_STATE(79)] = 3850,
  [SMALL_STATE(80)] = 3888,
  [SMALL_STATE(81)] = 3926,
  [SMALL_STATE(82)] = 3964,
  [SMALL_STATE(83)] = 4002,
  [SMALL_STATE(84)] = 4019,
  [SMALL_STATE(85)] = 4041,
  [SMALL_STATE(86)] = 4063,
  [SMALL_STATE(87)] = 4085,
  [SMALL_STATE(88)] = 4103,
  [SMALL_STATE(89)] = 4125,
  [SMALL_STATE(90)] = 4147,
  [SMALL_STATE(91)] = 4169,
  [SMALL_STATE(92)] = 4191,
  [SMALL_STATE(93)] = 4210,
  [SMALL_STATE(94)] = 4229,
  [SMALL_STATE(95)] = 4248,
  [SMALL_STATE(96)] = 4267,
  [SMALL_STATE(97)] = 4286,
  [SMALL_STATE(98)] = 4303,
  [SMALL_STATE(99)] = 4322,
  [SMALL_STATE(100)] = 4341,
  [SMALL_STATE(101)] = 4360,
  [SMALL_STATE(102)] = 4379,
  [SMALL_STATE(103)] = 4398,
  [SMALL_STATE(104)] = 4417,
  [SMALL_STATE(105)] = 4436,
  [SMALL_STATE(106)] = 4455,
  [SMALL_STATE(107)] = 4474,
  [SMALL_STATE(108)] = 4493,
  [SMALL_STATE(109)] = 4512,
  [SMALL_STATE(110)] = 4531,
  [SMALL_STATE(111)] = 4550,
  [SMALL_STATE(112)] = 4569,
  [SMALL_STATE(113)] = 4588,
  [SMALL_STATE(114)] = 4607,
  [SMALL_STATE(115)] = 4626,
  [SMALL_STATE(116)] = 4645,
  [SMALL_STATE(117)] = 4664,
  [SMALL_STATE(118)] = 4681,
  [SMALL_STATE(119)] = 4698,
  [SMALL_STATE(120)] = 4714,
  [SMALL_STATE(121)] = 4726,
  [SMALL_STATE(122)] = 4738,
  [SMALL_STATE(123)] = 4754,
  [SMALL_STATE(124)] = 4773,
  [SMALL_STATE(125)] = 4792,
  [SMALL_STATE(126)] = 4811,
  [SMALL_STATE(127)] = 4822,
  [SMALL_STATE(128)] = 4833,
  [SMALL_STATE(129)] = 4844,
  [SMALL_STATE(130)] = 4857,
  [SMALL_STATE(131)] = 4868,
  [SMALL_STATE(132)] = 4880,
  [SMALL_STATE(133)] = 4894,
  [SMALL_STATE(134)] = 4904,
  [SMALL_STATE(135)] = 4915,
  [SMALL_STATE(136)] = 4926,
  [SMALL_STATE(137)] = 4937,
  [SMALL_STATE(138)] = 4946,
  [SMALL_STATE(139)] = 4955,
  [SMALL_STATE(140)] = 4964,
  [SMALL_STATE(141)] = 4975,
  [SMALL_STATE(142)] = 4984,
  [SMALL_STATE(143)] = 4995,
  [SMALL_STATE(144)] = 5006,
  [SMALL_STATE(145)] = 5015,
  [SMALL_STATE(146)] = 5026,
  [SMALL_STATE(147)] = 5035,
  [SMALL_STATE(148)] = 5044,
  [SMALL_STATE(149)] = 5053,
  [SMALL_STATE(150)] = 5062,
  [SMALL_STATE(151)] = 5071,
  [SMALL_STATE(152)] = 5082,
  [SMALL_STATE(153)] = 5093,
  [SMALL_STATE(154)] = 5104,
  [SMALL_STATE(155)] = 5115,
  [SMALL_STATE(156)] = 5126,
  [SMALL_STATE(157)] = 5137,
  [SMALL_STATE(158)] = 5148,
  [SMALL_STATE(159)] = 5159,
  [SMALL_STATE(160)] = 5168,
  [SMALL_STATE(161)] = 5177,
  [SMALL_STATE(162)] = 5186,
  [SMALL_STATE(163)] = 5197,
  [SMALL_STATE(164)] = 5206,
  [SMALL_STATE(165)] = 5217,
  [SMALL_STATE(166)] = 5228,
  [SMALL_STATE(167)] = 5239,
  [SMALL_STATE(168)] = 5248,
  [SMALL_STATE(169)] = 5259,
  [SMALL_STATE(170)] = 5268,
  [SMALL_STATE(171)] = 5277,
  [SMALL_STATE(172)] = 5286,
  [SMALL_STATE(173)] = 5297,
  [SMALL_STATE(174)] = 5306,
  [SMALL_STATE(175)] = 5317,
  [SMALL_STATE(176)] = 5326,
  [SMALL_STATE(177)] = 5335,
  [SMALL_STATE(178)] = 5344,
  [SMALL_STATE(179)] = 5355,
  [SMALL_STATE(180)] = 5366,
  [SMALL_STATE(181)] = 5377,
  [SMALL_STATE(182)] = 5388,
  [SMALL_STATE(183)] = 5397,
  [SMALL_STATE(184)] = 5408,
  [SMALL_STATE(185)] = 5419,
  [SMALL_STATE(186)] = 5428,
  [SMALL_STATE(187)] = 5439,
  [SMALL_STATE(188)] = 5450,
  [SMALL_STATE(189)] = 5459,
  [SMALL_STATE(190)] = 5468,
  [SMALL_STATE(191)] = 5477,
  [SMALL_STATE(192)] = 5488,
  [SMALL_STATE(193)] = 5499,
  [SMALL_STATE(194)] = 5508,
  [SMALL_STATE(195)] = 5517,
  [SMALL_STATE(196)] = 5526,
  [SMALL_STATE(197)] = 5537,
  [SMALL_STATE(198)] = 5548,
  [SMALL_STATE(199)] = 5559,
  [SMALL_STATE(200)] = 5570,
  [SMALL_STATE(201)] = 5579,
  [SMALL_STATE(202)] = 5588,
  [SMALL_STATE(203)] = 5597,
  [SMALL_STATE(204)] = 5608,
  [SMALL_STATE(205)] = 5617,
  [SMALL_STATE(206)] = 5626,
  [SMALL_STATE(207)] = 5635,
  [SMALL_STATE(208)] = 5646,
  [SMALL_STATE(209)] = 5655,
  [SMALL_STATE(210)] = 5664,
  [SMALL_STATE(211)] = 5673,
  [SMALL_STATE(212)] = 5682,
  [SMALL_STATE(213)] = 5693,
  [SMALL_STATE(214)] = 5699,
  [SMALL_STATE(215)] = 5705,
  [SMALL_STATE(216)] = 5711,
  [SMALL_STATE(217)] = 5717,
  [SMALL_STATE(218)] = 5723,
  [SMALL_STATE(219)] = 5731,
  [SMALL_STATE(220)] = 5737,
  [SMALL_STATE(221)] = 5741,
  [SMALL_STATE(222)] = 5745,
  [SMALL_STATE(223)] = 5749,
  [SMALL_STATE(224)] = 5753,
  [SMALL_STATE(225)] = 5757,
  [SMALL_STATE(226)] = 5761,
  [SMALL_STATE(227)] = 5765,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(224),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(137),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(159),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(160),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(161),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(163),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(167),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(189),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(193),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(209),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(211),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(210),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(208),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(122),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(204),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(202),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(103),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(200),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(104),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(105),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(195),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(194),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(190),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(188),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 27),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 23),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 5, .production_id = 23),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 19),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 19),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 6, .production_id = 45),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 6, .production_id = 45),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 6, .production_id = 44),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 6, .production_id = 44),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 6, .production_id = 43),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 6, .production_id = 43),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 4, .production_id = 42),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 4, .production_id = 42),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 4, .production_id = 42),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 4, .production_id = 42),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 41),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 41),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 40),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 40),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 6, .production_id = 31),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 6, .production_id = 31),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 39),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 39),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 38),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 38),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 37),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 37),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 35),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 6, .production_id = 35),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 34),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 6, .production_id = 34),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_end, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_end, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 3, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 3, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 5, .production_id = 33),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 5, .production_id = 33),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 5, .production_id = 33),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 5, .production_id = 33),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 3, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 3, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 3, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 3, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 32),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 32),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 31),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 31),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_statement, 5, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_statement, 5, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 5, .production_id = 29),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 5, .production_id = 29),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 27),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 27),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 26),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 26),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 5, .production_id = 25),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 5, .production_id = 25),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 24),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_c_t_statement, 5, .production_id = 24),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 3, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 3, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_statement, 3, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_statement, 3, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 8, .production_id = 55),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 8, .production_id = 55),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 5, .production_id = 18),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 5, .production_id = 18),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_array_statement, 5, .production_id = 21),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_array_statement, 5, .production_id = 21),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 20),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_var_chr_statement, 5, .production_id = 20),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 46),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 46),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 18),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 18),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 17),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 17),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 47),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 47),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prev_statement, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prev_statement, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_statement, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_statement, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_pos_statement, 3, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_pos_statement, 3, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_statement, 4, .production_id = 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 48),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 48),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_pos_statement, 4, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_pos_statement, 4, .production_id = 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 4, .production_id = 14),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 4, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 49),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 49),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 7, .production_id = 50),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 7, .production_id = 50),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 7, .production_id = 51),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 7, .production_id = 51),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 6),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 10),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 10),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 8),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_d_string_statement, 4, .production_id = 8),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clog_statement, 8, .production_id = 54),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clog_statement, 8, .production_id = 54),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_log_statement, 7, .production_id = 52),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_log_statement, 7, .production_id = 52),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put_bits_statement, 4, .production_id = 9),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put_bits_statement, 4, .production_id = 9),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_function_statement, 3, .production_id = 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_function_statement, 3, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 53),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 53),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 30), SHIFT_REPEAT(127),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 30),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 2, .production_id = 30),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 22), SHIFT_REPEAT(127),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 22),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 2, .production_id = 22),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(129),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 11),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 11),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 13),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_function_statement_repeat1, 1, .production_id = 13),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 7),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_put_array_statement_repeat1, 1, .production_id = 7),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_value, 2, .production_id = 15),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_value, 2, .production_id = 15),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 28),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 28), SHIFT_REPEAT(119),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 37),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 12),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 36),
  [660] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
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
