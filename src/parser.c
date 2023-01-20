#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 22

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
  aux_sym_goto_statement_token1 = 12,
  aux_sym_goto_statement_token2 = 13,
  aux_sym_goto_statement_token3 = 14,
  aux_sym_goto_statement_token4 = 15,
  aux_sym_goto_statement_token5 = 16,
  aux_sym_goto_statement_token6 = 17,
  aux_sym_if_statement_token1 = 18,
  aux_sym_if_statement_token2 = 19,
  aux_sym_elif_statement_token1 = 20,
  aux_sym_else_statement_token1 = 21,
  anon_sym_u = 22,
  anon_sym_0 = 23,
  anon_sym_LT = 24,
  aux_sym__binary_op_token1 = 25,
  aux_sym__binary_op_token2 = 26,
  aux_sym__binary_op_token3 = 27,
  anon_sym_GT = 28,
  aux_sym__binary_op_token4 = 29,
  aux_sym__binary_op_token5 = 30,
  aux_sym__binary_op_token6 = 31,
  anon_sym_LT_GT = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_BANG_EQ_EQ = 34,
  aux_sym__binary_op_token7 = 35,
  anon_sym_EQ = 36,
  anon_sym_EQ_EQ = 37,
  anon_sym_EQ_EQ_EQ = 38,
  aux_sym__binary_op_token8 = 39,
  aux_sym__binary_op_token9 = 40,
  aux_sym__binary_op_token10 = 41,
  aux_sym__binary_op_token11 = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_AMP = 45,
  anon_sym_AMP_AMP = 46,
  aux_sym__binary_op_token12 = 47,
  aux_sym__binary_op_token13 = 48,
  aux_sym__binary_op_token14 = 49,
  aux_sym__binary_op_token15 = 50,
  anon_sym_CARET = 51,
  anon_sym_CARET_CARET = 52,
  aux_sym__binary_op_token16 = 53,
  anon_sym_PIPE = 54,
  anon_sym_PIPE_PIPE = 55,
  aux_sym__binary_op_token17 = 56,
  anon_sym_PERCENT = 57,
  aux_sym__binary_op_token18 = 58,
  anon_sym_SLASH = 59,
  aux_sym__binary_op_token19 = 60,
  anon_sym_LT_LT = 61,
  aux_sym__binary_op_token20 = 62,
  anon_sym_GT_GT = 63,
  aux_sym__binary_op_token21 = 64,
  anon_sym_BANG = 65,
  aux_sym__binary_op_token22 = 66,
  anon_sym_BANG_BANG = 67,
  anon_sym_TILDE = 68,
  aux_sym__binary_op_token23 = 69,
  aux_sym__binary_op_token24 = 70,
  aux_sym__binary_op_token25 = 71,
  aux_sym__binary_op_token26 = 72,
  aux_sym__binary_op_token27 = 73,
  aux_sym__binary_op_token28 = 74,
  aux_sym__binary_op_token29 = 75,
  aux_sym__binary_op_token30 = 76,
  aux_sym__binary_op_token31 = 77,
  anon_sym_and = 78,
  anon_sym_or = 79,
  aux_sym_print_statement_token1 = 80,
  sym_statement_list = 81,
  sym_variable = 82,
  sym__statement = 83,
  sym__statment_end = 84,
  sym__empty_statment = 85,
  sym_version_statement = 86,
  sym_math_statement = 87,
  sym_get_statement = 88,
  sym_set_statement = 89,
  sym_goto_statement = 90,
  sym_if_statement = 91,
  sym_elif_statement = 92,
  sym_else_statement = 93,
  sym__comparison_value = 94,
  sym_binary_comparison = 95,
  sym__binary_op = 96,
  sym_binary_expression = 97,
  sym_print_statement = 98,
  aux_sym_statement_list_repeat1 = 99,
  aux_sym_if_statement_repeat1 = 100,
  aux_sym_binary_expression_repeat1 = 101,
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
  field_condition = 2,
  field_consequence = 3,
  field_file_number = 4,
  field_left = 5,
  field_message = 6,
  field_name = 7,
  field_offset = 8,
  field_op = 9,
  field_right = 10,
  field_type = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_file_number] = "file_number",
  [field_left] = "left",
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
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 3},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 1},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 3},
  [21] = {.index = 42, .length = 4},
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
    {field_file_number, 2},
    {field_offset, 1},
  [8] =
    {field_left, 0},
    {field_right, 2},
  [10] =
    {field_alternative, 0},
  [11] =
    {field_left, 1},
    {field_op, 2},
    {field_right, 3},
  [14] =
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [17] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [20] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [23] =
    {field_condition, 1},
  [24] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [26] =
    {field_consequence, 2},
  [27] =
    {field_condition, 1},
    {field_consequence, 3},
  [29] =
    {field_alternative, 3},
    {field_condition, 1},
  [31] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [33] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [36] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [39] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [42] =
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
  [31] = 3,
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
  [43] = 3,
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
  [76] = 3,
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
  [87] = 3,
  [88] = 88,
  [89] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(178);
      if (lookahead == '!') ADVANCE(255);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '&') ADVANCE(235);
      if (lookahead == '\'') ADVANCE(176);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '0') ADVANCE(213);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == '^') ADVANCE(241);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '~') ADVANCE(258);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(65);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(170);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(188);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(255);
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '&') ADVANCE(235);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '0') ADVANCE(213);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '^') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '~') ADVANCE(258);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(236);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(193);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(192);
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
      if (lookahead == 'D') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(206);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(203);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(169);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(205);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(245);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 77:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 78:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 79:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(250);
      END_STATE();
    case 80:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 83:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(126);
      END_STATE();
    case 92:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(126);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(169);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 101:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 135:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(169);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 167:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 169:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 170:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 171:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 172:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 173:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 174:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 176:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 177:
      if (eof) ADVANCE(178);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      END_STATE();
    case 178:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_math_statement_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(257);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 177},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 177},
  [8] = {.lex_state = 177},
  [9] = {.lex_state = 177},
  [10] = {.lex_state = 177},
  [11] = {.lex_state = 177},
  [12] = {.lex_state = 177},
  [13] = {.lex_state = 177},
  [14] = {.lex_state = 177},
  [15] = {.lex_state = 177},
  [16] = {.lex_state = 177},
  [17] = {.lex_state = 177},
  [18] = {.lex_state = 177},
  [19] = {.lex_state = 177},
  [20] = {.lex_state = 177},
  [21] = {.lex_state = 177},
  [22] = {.lex_state = 177},
  [23] = {.lex_state = 177},
  [24] = {.lex_state = 177},
  [25] = {.lex_state = 177},
  [26] = {.lex_state = 177},
  [27] = {.lex_state = 177},
  [28] = {.lex_state = 177},
  [29] = {.lex_state = 177},
  [30] = {.lex_state = 177},
  [31] = {.lex_state = 177},
  [32] = {.lex_state = 177},
  [33] = {.lex_state = 177},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 177},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 177},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 177},
  [41] = {.lex_state = 177},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 177},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 177},
  [53] = {.lex_state = 177},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 177},
  [58] = {.lex_state = 177},
  [59] = {.lex_state = 177},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 177},
  [62] = {.lex_state = 177},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 177},
  [65] = {.lex_state = 177},
  [66] = {.lex_state = 177},
  [67] = {.lex_state = 177},
  [68] = {.lex_state = 177},
  [69] = {.lex_state = 177},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 177},
  [74] = {.lex_state = 177},
  [75] = {.lex_state = 177},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 175},
  [87] = {.lex_state = 175},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 177},
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
    [sym_statement_list] = STATE(84),
    [sym__statement] = STATE(10),
    [sym__statment_end] = STATE(10),
    [sym__empty_statment] = STATE(10),
    [sym_version_statement] = STATE(10),
    [sym_math_statement] = STATE(10),
    [sym_get_statement] = STATE(10),
    [sym_set_statement] = STATE(10),
    [sym_goto_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_print_statement] = STATE(10),
    [aux_sym_statement_list_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_math_statement_token1] = ACTIONS(9),
    [aux_sym_get_statement_token1] = ACTIONS(11),
    [aux_sym_set_statement_token1] = ACTIONS(13),
    [aux_sym_goto_statement_token1] = ACTIONS(15),
    [aux_sym_if_statement_token1] = ACTIONS(17),
    [aux_sym_print_statement_token1] = ACTIONS(19),
  },
  [2] = {
    [sym__binary_op] = STATE(48),
    [anon_sym_u] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [aux_sym__binary_op_token1] = ACTIONS(27),
    [aux_sym__binary_op_token2] = ACTIONS(27),
    [aux_sym__binary_op_token3] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(25),
    [aux_sym__binary_op_token4] = ACTIONS(27),
    [aux_sym__binary_op_token5] = ACTIONS(27),
    [aux_sym__binary_op_token6] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(27),
    [aux_sym__binary_op_token7] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(27),
    [aux_sym__binary_op_token8] = ACTIONS(27),
    [aux_sym__binary_op_token9] = ACTIONS(27),
    [aux_sym__binary_op_token10] = ACTIONS(27),
    [aux_sym__binary_op_token11] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [aux_sym__binary_op_token12] = ACTIONS(27),
    [aux_sym__binary_op_token13] = ACTIONS(27),
    [aux_sym__binary_op_token14] = ACTIONS(27),
    [aux_sym__binary_op_token15] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_CARET_CARET] = ACTIONS(27),
    [aux_sym__binary_op_token16] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [aux_sym__binary_op_token17] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [aux_sym__binary_op_token18] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [aux_sym__binary_op_token19] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(27),
    [aux_sym__binary_op_token20] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(27),
    [aux_sym__binary_op_token21] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(25),
    [aux_sym__binary_op_token22] = ACTIONS(27),
    [anon_sym_BANG_BANG] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [aux_sym__binary_op_token23] = ACTIONS(27),
    [aux_sym__binary_op_token24] = ACTIONS(27),
    [aux_sym__binary_op_token25] = ACTIONS(27),
    [aux_sym__binary_op_token26] = ACTIONS(27),
    [aux_sym__binary_op_token27] = ACTIONS(25),
    [aux_sym__binary_op_token28] = ACTIONS(27),
    [aux_sym__binary_op_token29] = ACTIONS(27),
    [aux_sym__binary_op_token30] = ACTIONS(27),
    [aux_sym__binary_op_token31] = ACTIONS(27),
  },
  [3] = {
    [anon_sym_u] = ACTIONS(29),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [aux_sym__binary_op_token1] = ACTIONS(29),
    [aux_sym__binary_op_token2] = ACTIONS(29),
    [aux_sym__binary_op_token3] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [aux_sym__binary_op_token4] = ACTIONS(29),
    [aux_sym__binary_op_token5] = ACTIONS(29),
    [aux_sym__binary_op_token6] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(29),
    [aux_sym__binary_op_token7] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(29),
    [aux_sym__binary_op_token8] = ACTIONS(29),
    [aux_sym__binary_op_token9] = ACTIONS(29),
    [aux_sym__binary_op_token10] = ACTIONS(29),
    [aux_sym__binary_op_token11] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [aux_sym__binary_op_token12] = ACTIONS(29),
    [aux_sym__binary_op_token13] = ACTIONS(29),
    [aux_sym__binary_op_token14] = ACTIONS(29),
    [aux_sym__binary_op_token15] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_CARET_CARET] = ACTIONS(29),
    [aux_sym__binary_op_token16] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_PIPE_PIPE] = ACTIONS(29),
    [aux_sym__binary_op_token17] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [aux_sym__binary_op_token18] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [aux_sym__binary_op_token19] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(29),
    [aux_sym__binary_op_token20] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(29),
    [aux_sym__binary_op_token21] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [aux_sym__binary_op_token22] = ACTIONS(29),
    [anon_sym_BANG_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [aux_sym__binary_op_token23] = ACTIONS(29),
    [aux_sym__binary_op_token24] = ACTIONS(29),
    [aux_sym__binary_op_token25] = ACTIONS(29),
    [aux_sym__binary_op_token26] = ACTIONS(29),
    [aux_sym__binary_op_token27] = ACTIONS(31),
    [aux_sym__binary_op_token28] = ACTIONS(29),
    [aux_sym__binary_op_token29] = ACTIONS(29),
    [aux_sym__binary_op_token30] = ACTIONS(29),
    [aux_sym__binary_op_token31] = ACTIONS(29),
  },
  [4] = {
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [aux_sym__binary_op_token1] = ACTIONS(37),
    [aux_sym__binary_op_token2] = ACTIONS(37),
    [aux_sym__binary_op_token3] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(35),
    [aux_sym__binary_op_token4] = ACTIONS(37),
    [aux_sym__binary_op_token5] = ACTIONS(37),
    [aux_sym__binary_op_token6] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(37),
    [aux_sym__binary_op_token7] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(37),
    [aux_sym__binary_op_token8] = ACTIONS(37),
    [aux_sym__binary_op_token9] = ACTIONS(37),
    [aux_sym__binary_op_token10] = ACTIONS(37),
    [aux_sym__binary_op_token11] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [aux_sym__binary_op_token12] = ACTIONS(37),
    [aux_sym__binary_op_token13] = ACTIONS(37),
    [aux_sym__binary_op_token14] = ACTIONS(37),
    [aux_sym__binary_op_token15] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_CARET_CARET] = ACTIONS(37),
    [aux_sym__binary_op_token16] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [aux_sym__binary_op_token17] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [aux_sym__binary_op_token18] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [aux_sym__binary_op_token19] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [aux_sym__binary_op_token20] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(37),
    [aux_sym__binary_op_token21] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(35),
    [aux_sym__binary_op_token22] = ACTIONS(37),
    [anon_sym_BANG_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [aux_sym__binary_op_token23] = ACTIONS(37),
    [aux_sym__binary_op_token24] = ACTIONS(37),
    [aux_sym__binary_op_token25] = ACTIONS(37),
    [aux_sym__binary_op_token26] = ACTIONS(37),
    [aux_sym__binary_op_token27] = ACTIONS(35),
    [aux_sym__binary_op_token28] = ACTIONS(37),
    [aux_sym__binary_op_token29] = ACTIONS(37),
    [aux_sym__binary_op_token30] = ACTIONS(37),
    [aux_sym__binary_op_token31] = ACTIONS(37),
  },
  [5] = {
    [anon_sym_LT] = ACTIONS(39),
    [aux_sym__binary_op_token1] = ACTIONS(41),
    [aux_sym__binary_op_token2] = ACTIONS(41),
    [aux_sym__binary_op_token3] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(39),
    [aux_sym__binary_op_token4] = ACTIONS(41),
    [aux_sym__binary_op_token5] = ACTIONS(41),
    [aux_sym__binary_op_token6] = ACTIONS(41),
    [anon_sym_LT_GT] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(41),
    [aux_sym__binary_op_token7] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(41),
    [aux_sym__binary_op_token8] = ACTIONS(41),
    [aux_sym__binary_op_token9] = ACTIONS(41),
    [aux_sym__binary_op_token10] = ACTIONS(41),
    [aux_sym__binary_op_token11] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AMP_AMP] = ACTIONS(41),
    [aux_sym__binary_op_token12] = ACTIONS(41),
    [aux_sym__binary_op_token13] = ACTIONS(41),
    [aux_sym__binary_op_token14] = ACTIONS(41),
    [aux_sym__binary_op_token15] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_CARET_CARET] = ACTIONS(41),
    [aux_sym__binary_op_token16] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(41),
    [aux_sym__binary_op_token17] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(41),
    [aux_sym__binary_op_token18] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [aux_sym__binary_op_token19] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(41),
    [aux_sym__binary_op_token20] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(41),
    [aux_sym__binary_op_token21] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(39),
    [aux_sym__binary_op_token22] = ACTIONS(41),
    [anon_sym_BANG_BANG] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(41),
    [aux_sym__binary_op_token23] = ACTIONS(41),
    [aux_sym__binary_op_token24] = ACTIONS(41),
    [aux_sym__binary_op_token25] = ACTIONS(41),
    [aux_sym__binary_op_token26] = ACTIONS(41),
    [aux_sym__binary_op_token27] = ACTIONS(39),
    [aux_sym__binary_op_token28] = ACTIONS(41),
    [aux_sym__binary_op_token29] = ACTIONS(41),
    [aux_sym__binary_op_token30] = ACTIONS(41),
    [aux_sym__binary_op_token31] = ACTIONS(41),
  },
  [6] = {
    [anon_sym_LT] = ACTIONS(35),
    [aux_sym__binary_op_token1] = ACTIONS(37),
    [aux_sym__binary_op_token2] = ACTIONS(37),
    [aux_sym__binary_op_token3] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(35),
    [aux_sym__binary_op_token4] = ACTIONS(37),
    [aux_sym__binary_op_token5] = ACTIONS(37),
    [aux_sym__binary_op_token6] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(37),
    [aux_sym__binary_op_token7] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(37),
    [aux_sym__binary_op_token8] = ACTIONS(37),
    [aux_sym__binary_op_token9] = ACTIONS(37),
    [aux_sym__binary_op_token10] = ACTIONS(37),
    [aux_sym__binary_op_token11] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [aux_sym__binary_op_token12] = ACTIONS(37),
    [aux_sym__binary_op_token13] = ACTIONS(37),
    [aux_sym__binary_op_token14] = ACTIONS(37),
    [aux_sym__binary_op_token15] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_CARET_CARET] = ACTIONS(37),
    [aux_sym__binary_op_token16] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [aux_sym__binary_op_token17] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [aux_sym__binary_op_token18] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [aux_sym__binary_op_token19] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [aux_sym__binary_op_token20] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(37),
    [aux_sym__binary_op_token21] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(35),
    [aux_sym__binary_op_token22] = ACTIONS(37),
    [anon_sym_BANG_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [aux_sym__binary_op_token23] = ACTIONS(37),
    [aux_sym__binary_op_token24] = ACTIONS(37),
    [aux_sym__binary_op_token25] = ACTIONS(37),
    [aux_sym__binary_op_token26] = ACTIONS(37),
    [aux_sym__binary_op_token27] = ACTIONS(35),
    [aux_sym__binary_op_token28] = ACTIONS(37),
    [aux_sym__binary_op_token29] = ACTIONS(37),
    [aux_sym__binary_op_token30] = ACTIONS(37),
    [aux_sym__binary_op_token31] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
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
      aux_sym_goto_statement_token1,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(19), 1,
      aux_sym_print_statement_token1,
    ACTIONS(43), 1,
      aux_sym_if_statement_token2,
    ACTIONS(45), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(47), 1,
      aux_sym_else_statement_token1,
    STATE(45), 1,
      sym_statement_list,
    STATE(47), 1,
      aux_sym_if_statement_repeat1,
    STATE(80), 1,
      sym_elif_statement,
    STATE(85), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 11,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [63] = 12,
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
      aux_sym_goto_statement_token1,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(19), 1,
      aux_sym_print_statement_token1,
    STATE(77), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(49), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 11,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [113] = 12,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      aux_sym_version_statement_token1,
    ACTIONS(62), 1,
      aux_sym_math_statement_token1,
    ACTIONS(65), 1,
      aux_sym_get_statement_token1,
    ACTIONS(68), 1,
      aux_sym_set_statement_token1,
    ACTIONS(71), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(74), 1,
      aux_sym_if_statement_token1,
    ACTIONS(79), 1,
      aux_sym_print_statement_token1,
    ACTIONS(53), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(77), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 11,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [163] = 12,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_math_statement_token1,
    ACTIONS(11), 1,
      aux_sym_get_statement_token1,
    ACTIONS(13), 1,
      aux_sym_set_statement_token1,
    ACTIONS(15), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(19), 1,
      aux_sym_print_statement_token1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(86), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 11,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [213] = 12,
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
      aux_sym_goto_statement_token1,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(19), 1,
      aux_sym_print_statement_token1,
    ACTIONS(88), 1,
      aux_sym_if_statement_token2,
    STATE(83), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 11,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_math_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [261] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(92), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [280] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(96), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [299] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(100), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [318] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(104), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [337] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(108), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [356] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(112), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [375] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(116), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [394] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(120), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [413] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [432] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(128), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [451] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(132), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [470] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(136), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [489] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(140), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [508] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(144), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [527] = 2,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [546] = 2,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(152), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [565] = 2,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(156), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [584] = 2,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(160), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [603] = 2,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(164), 12,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_math_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [622] = 2,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 11,
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
  [639] = 4,
    ACTIONS(166), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(168), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [657] = 4,
    ACTIONS(172), 1,
      anon_sym_LF,
    STATE(38), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(170), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(174), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [674] = 5,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    STATE(58), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(176), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [693] = 5,
    ACTIONS(180), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statment_end,
    STATE(59), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(176), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [712] = 4,
    ACTIONS(184), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(182), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(174), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [729] = 5,
    ACTIONS(186), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statment_end,
    STATE(32), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(176), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [748] = 4,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(38), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(188), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(192), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [765] = 4,
    STATE(36), 1,
      sym_binary_comparison,
    STATE(50), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(195), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [781] = 2,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(197), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [793] = 2,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(188), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [805] = 4,
    STATE(36), 1,
      sym_binary_comparison,
    STATE(62), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(195), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [821] = 2,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [832] = 3,
    STATE(41), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(195), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [845] = 6,
    ACTIONS(201), 1,
      aux_sym_if_statement_token2,
    ACTIONS(203), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(205), 1,
      aux_sym_else_statement_token1,
    STATE(46), 1,
      aux_sym_if_statement_repeat1,
    STATE(80), 1,
      sym_elif_statement,
    STATE(88), 1,
      sym_else_statement,
  [864] = 6,
    ACTIONS(203), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(205), 1,
      aux_sym_else_statement_token1,
    ACTIONS(207), 1,
      aux_sym_if_statement_token2,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    STATE(80), 1,
      sym_elif_statement,
    STATE(82), 1,
      sym_else_statement,
  [883] = 6,
    ACTIONS(203), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(205), 1,
      aux_sym_else_statement_token1,
    ACTIONS(209), 1,
      aux_sym_if_statement_token2,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    STATE(80), 1,
      sym_elif_statement,
    STATE(81), 1,
      sym_else_statement,
  [902] = 2,
    STATE(40), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(176), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [912] = 4,
    ACTIONS(213), 1,
      aux_sym_elif_statement_token1,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    STATE(80), 1,
      sym_elif_statement,
    ACTIONS(211), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [926] = 3,
    ACTIONS(216), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [937] = 2,
    STATE(63), 1,
      sym_variable,
    ACTIONS(218), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [946] = 3,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [957] = 3,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [968] = 2,
    STATE(75), 1,
      sym_variable,
    ACTIONS(176), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [977] = 2,
    STATE(51), 1,
      sym_variable,
    ACTIONS(218), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [986] = 2,
    STATE(37), 1,
      sym_variable,
    ACTIONS(224), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [995] = 3,
    ACTIONS(226), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1006] = 3,
    ACTIONS(228), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1017] = 3,
    ACTIONS(230), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1028] = 2,
    STATE(66), 1,
      sym_variable,
    ACTIONS(176), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1037] = 3,
    ACTIONS(232), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1048] = 3,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1059] = 2,
    STATE(61), 1,
      sym_variable,
    ACTIONS(176), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1068] = 3,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1079] = 3,
    ACTIONS(238), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1090] = 3,
    ACTIONS(240), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1101] = 3,
    ACTIONS(242), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1112] = 3,
    ACTIONS(244), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1123] = 3,
    ACTIONS(246), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1134] = 2,
    STATE(34), 1,
      sym_variable,
    ACTIONS(224), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1143] = 2,
    STATE(86), 1,
      sym_variable,
    ACTIONS(248), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1152] = 2,
    STATE(70), 1,
      sym_variable,
    ACTIONS(218), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1161] = 3,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1172] = 3,
    ACTIONS(252), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1183] = 3,
    ACTIONS(254), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1194] = 1,
    ACTIONS(31), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1200] = 1,
    ACTIONS(256), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [1206] = 1,
    ACTIONS(258), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1212] = 1,
    ACTIONS(260), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1218] = 1,
    ACTIONS(262), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [1224] = 1,
    ACTIONS(264), 1,
      aux_sym_if_statement_token2,
  [1228] = 1,
    ACTIONS(266), 1,
      aux_sym_if_statement_token2,
  [1232] = 1,
    ACTIONS(268), 1,
      aux_sym_if_statement_token2,
  [1236] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1240] = 1,
    ACTIONS(272), 1,
      aux_sym_if_statement_token2,
  [1244] = 1,
    ACTIONS(274), 1,
      sym_type,
  [1248] = 1,
    ACTIONS(29), 1,
      sym_type,
  [1252] = 1,
    ACTIONS(276), 1,
      aux_sym_if_statement_token2,
  [1256] = 1,
    ACTIONS(278), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 261,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 299,
  [SMALL_STATE(15)] = 318,
  [SMALL_STATE(16)] = 337,
  [SMALL_STATE(17)] = 356,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 413,
  [SMALL_STATE(21)] = 432,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 489,
  [SMALL_STATE(25)] = 508,
  [SMALL_STATE(26)] = 527,
  [SMALL_STATE(27)] = 546,
  [SMALL_STATE(28)] = 565,
  [SMALL_STATE(29)] = 584,
  [SMALL_STATE(30)] = 603,
  [SMALL_STATE(31)] = 622,
  [SMALL_STATE(32)] = 639,
  [SMALL_STATE(33)] = 657,
  [SMALL_STATE(34)] = 674,
  [SMALL_STATE(35)] = 693,
  [SMALL_STATE(36)] = 712,
  [SMALL_STATE(37)] = 729,
  [SMALL_STATE(38)] = 748,
  [SMALL_STATE(39)] = 765,
  [SMALL_STATE(40)] = 781,
  [SMALL_STATE(41)] = 793,
  [SMALL_STATE(42)] = 805,
  [SMALL_STATE(43)] = 821,
  [SMALL_STATE(44)] = 832,
  [SMALL_STATE(45)] = 845,
  [SMALL_STATE(46)] = 864,
  [SMALL_STATE(47)] = 883,
  [SMALL_STATE(48)] = 902,
  [SMALL_STATE(49)] = 912,
  [SMALL_STATE(50)] = 926,
  [SMALL_STATE(51)] = 937,
  [SMALL_STATE(52)] = 946,
  [SMALL_STATE(53)] = 957,
  [SMALL_STATE(54)] = 968,
  [SMALL_STATE(55)] = 977,
  [SMALL_STATE(56)] = 986,
  [SMALL_STATE(57)] = 995,
  [SMALL_STATE(58)] = 1006,
  [SMALL_STATE(59)] = 1017,
  [SMALL_STATE(60)] = 1028,
  [SMALL_STATE(61)] = 1037,
  [SMALL_STATE(62)] = 1048,
  [SMALL_STATE(63)] = 1059,
  [SMALL_STATE(64)] = 1068,
  [SMALL_STATE(65)] = 1079,
  [SMALL_STATE(66)] = 1090,
  [SMALL_STATE(67)] = 1101,
  [SMALL_STATE(68)] = 1112,
  [SMALL_STATE(69)] = 1123,
  [SMALL_STATE(70)] = 1134,
  [SMALL_STATE(71)] = 1143,
  [SMALL_STATE(72)] = 1152,
  [SMALL_STATE(73)] = 1161,
  [SMALL_STATE(74)] = 1172,
  [SMALL_STATE(75)] = 1183,
  [SMALL_STATE(76)] = 1194,
  [SMALL_STATE(77)] = 1200,
  [SMALL_STATE(78)] = 1206,
  [SMALL_STATE(79)] = 1212,
  [SMALL_STATE(80)] = 1218,
  [SMALL_STATE(81)] = 1224,
  [SMALL_STATE(82)] = 1228,
  [SMALL_STATE(83)] = 1232,
  [SMALL_STATE(84)] = 1236,
  [SMALL_STATE(85)] = 1240,
  [SMALL_STATE(86)] = 1244,
  [SMALL_STATE(87)] = 1248,
  [SMALL_STATE(88)] = 1252,
  [SMALL_STATE(89)] = 1256,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(89),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(54),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(55),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(71),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(72),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(56),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(39),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(60),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 9),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 21),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 21),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 17),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 17),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 16),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 15),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 5, .production_id = 8),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 5, .production_id = 8),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 18),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 18),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 10),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 10),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 12),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 12),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 11),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 11),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 20),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 20),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 19),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(44),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 13),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 13), SHIFT_REPEAT(42),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 15),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 14),
  [270] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
