#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 18

enum {
  aux_sym_variable_token1 = 1,
  aux_sym_variable_token2 = 2,
  aux_sym_variable_token3 = 3,
  sym_type = 4,
  sym_comment = 5,
  anon_sym_SEMI = 6,
  anon_sym_LF = 7,
  aux_sym_version_statement_token1 = 8,
  aux_sym_get_statement_token1 = 9,
  aux_sym_set_statement_token1 = 10,
  aux_sym_if_statement_token1 = 11,
  aux_sym_if_statement_token2 = 12,
  aux_sym_elif_statement_token1 = 13,
  aux_sym_else_statement_token1 = 14,
  anon_sym_u = 15,
  anon_sym_0 = 16,
  anon_sym_LT = 17,
  aux_sym__binary_op_token1 = 18,
  aux_sym__binary_op_token2 = 19,
  aux_sym__binary_op_token3 = 20,
  anon_sym_GT = 21,
  aux_sym__binary_op_token4 = 22,
  aux_sym__binary_op_token5 = 23,
  aux_sym__binary_op_token6 = 24,
  anon_sym_LT_GT = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_BANG_EQ_EQ = 27,
  aux_sym__binary_op_token7 = 28,
  anon_sym_EQ = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_EQ_EQ_EQ = 31,
  aux_sym__binary_op_token8 = 32,
  aux_sym__binary_op_token9 = 33,
  aux_sym__binary_op_token10 = 34,
  aux_sym__binary_op_token11 = 35,
  anon_sym_GT_EQ = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_AMP = 38,
  anon_sym_AMP_AMP = 39,
  aux_sym__binary_op_token12 = 40,
  aux_sym__binary_op_token13 = 41,
  aux_sym__binary_op_token14 = 42,
  aux_sym__binary_op_token15 = 43,
  anon_sym_CARET = 44,
  anon_sym_CARET_CARET = 45,
  aux_sym__binary_op_token16 = 46,
  anon_sym_PIPE = 47,
  anon_sym_PIPE_PIPE = 48,
  aux_sym__binary_op_token17 = 49,
  anon_sym_PERCENT = 50,
  aux_sym__binary_op_token18 = 51,
  anon_sym_SLASH = 52,
  aux_sym__binary_op_token19 = 53,
  anon_sym_LT_LT = 54,
  aux_sym__binary_op_token20 = 55,
  anon_sym_GT_GT = 56,
  aux_sym__binary_op_token21 = 57,
  anon_sym_BANG = 58,
  aux_sym__binary_op_token22 = 59,
  anon_sym_BANG_BANG = 60,
  anon_sym_TILDE = 61,
  aux_sym__binary_op_token23 = 62,
  aux_sym__binary_op_token24 = 63,
  aux_sym__binary_op_token25 = 64,
  aux_sym__binary_op_token26 = 65,
  aux_sym__binary_op_token27 = 66,
  aux_sym__binary_op_token28 = 67,
  aux_sym__binary_op_token29 = 68,
  aux_sym__binary_op_token30 = 69,
  aux_sym__binary_op_token31 = 70,
  anon_sym_and = 71,
  anon_sym_or = 72,
  aux_sym_print_statement_token1 = 73,
  sym_statement_list = 74,
  sym_variable = 75,
  sym__statement = 76,
  sym__statment_end = 77,
  sym__empty_statment = 78,
  sym_version_statement = 79,
  sym_get_statement = 80,
  sym_set_statement = 81,
  sym_if_statement = 82,
  sym_elif_statement = 83,
  sym_else_statement = 84,
  sym__comparison_value = 85,
  sym_binary_comparison = 86,
  sym__binary_op = 87,
  sym_binary_expression = 88,
  sym_print_statement = 89,
  aux_sym_statement_list_repeat1 = 90,
  aux_sym_if_statement_repeat1 = 91,
  aux_sym_binary_expression_repeat1 = 92,
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
  [aux_sym_get_statement_token1] = "get",
  [aux_sym_set_statement_token1] = "set",
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
  [sym_get_statement] = "get_statement",
  [sym_set_statement] = "set_statement",
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
  [aux_sym_get_statement_token1] = aux_sym_get_statement_token1,
  [aux_sym_set_statement_token1] = aux_sym_set_statement_token1,
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
  [sym_get_statement] = sym_get_statement,
  [sym_set_statement] = sym_set_statement,
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
  [aux_sym_get_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token1] = {
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
  [sym_get_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
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
  field_right = 8,
  field_type = 9,
  field_value = 10,
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
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_message, 1},
  [1] =
    {field_name, 1},
    {field_type, 2},
  [3] =
    {field_name, 1},
    {field_value, 2},
  [5] =
    {field_left, 0},
    {field_right, 2},
  [7] =
    {field_alternative, 0},
  [8] =
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [11] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [14] =
    {field_condition, 1},
  [15] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [17] =
    {field_consequence, 2},
  [18] =
    {field_condition, 1},
    {field_consequence, 3},
  [20] =
    {field_alternative, 3},
    {field_condition, 1},
  [22] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [24] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [27] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [30] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [33] =
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
  [34] = 3,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 3,
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
  [74] = 3,
  [75] = 75,
  [76] = 76,
  [77] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(155);
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == '&') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(153);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == '^') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '~') ADVANCE(228);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == '&') ADVANCE(205);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '^') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '~') ADVANCE(228);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(158);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(170);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(207);
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 16:
      if (lookahead == '|') ADVANCE(215);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 60:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 61:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 62:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(105);
      END_STATE();
    case 73:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 89:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 108:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 109:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 111:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 112:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 113:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 114:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 148:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 149:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 150:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 151:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 152:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 153:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 154:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 154},
  [8] = {.lex_state = 154},
  [9] = {.lex_state = 154},
  [10] = {.lex_state = 154},
  [11] = {.lex_state = 154},
  [12] = {.lex_state = 154},
  [13] = {.lex_state = 154},
  [14] = {.lex_state = 154},
  [15] = {.lex_state = 154},
  [16] = {.lex_state = 154},
  [17] = {.lex_state = 154},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 154},
  [20] = {.lex_state = 154},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 154},
  [23] = {.lex_state = 154},
  [24] = {.lex_state = 154},
  [25] = {.lex_state = 154},
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 154},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 154},
  [31] = {.lex_state = 154},
  [32] = {.lex_state = 154},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 154},
  [35] = {.lex_state = 154},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 154},
  [46] = {.lex_state = 154},
  [47] = {.lex_state = 154},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 154},
  [50] = {.lex_state = 154},
  [51] = {.lex_state = 154},
  [52] = {.lex_state = 154},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 154},
  [55] = {.lex_state = 154},
  [56] = {.lex_state = 154},
  [57] = {.lex_state = 154},
  [58] = {.lex_state = 154},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 154},
  [62] = {.lex_state = 154},
  [63] = {.lex_state = 154},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 154},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 152},
  [75] = {.lex_state = 152},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_variable_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_version_statement_token1] = ACTIONS(1),
    [aux_sym_get_statement_token1] = ACTIONS(1),
    [aux_sym_set_statement_token1] = ACTIONS(1),
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
    [sym_statement_list] = STATE(70),
    [sym__statement] = STATE(10),
    [sym__statment_end] = STATE(10),
    [sym__empty_statment] = STATE(10),
    [sym_version_statement] = STATE(10),
    [sym_get_statement] = STATE(10),
    [sym_set_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_print_statement] = STATE(10),
    [aux_sym_statement_list_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_get_statement_token1] = ACTIONS(9),
    [aux_sym_set_statement_token1] = ACTIONS(11),
    [aux_sym_if_statement_token1] = ACTIONS(13),
    [aux_sym_print_statement_token1] = ACTIONS(15),
  },
  [2] = {
    [sym__binary_op] = STATE(42),
    [anon_sym_u] = ACTIONS(17),
    [anon_sym_0] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [aux_sym__binary_op_token1] = ACTIONS(23),
    [aux_sym__binary_op_token2] = ACTIONS(23),
    [aux_sym__binary_op_token3] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [aux_sym__binary_op_token4] = ACTIONS(23),
    [aux_sym__binary_op_token5] = ACTIONS(23),
    [aux_sym__binary_op_token6] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(23),
    [aux_sym__binary_op_token7] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(23),
    [aux_sym__binary_op_token8] = ACTIONS(23),
    [aux_sym__binary_op_token9] = ACTIONS(23),
    [aux_sym__binary_op_token10] = ACTIONS(23),
    [aux_sym__binary_op_token11] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [aux_sym__binary_op_token12] = ACTIONS(23),
    [aux_sym__binary_op_token13] = ACTIONS(23),
    [aux_sym__binary_op_token14] = ACTIONS(23),
    [aux_sym__binary_op_token15] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_CARET_CARET] = ACTIONS(23),
    [aux_sym__binary_op_token16] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [aux_sym__binary_op_token17] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [aux_sym__binary_op_token18] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [aux_sym__binary_op_token19] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [aux_sym__binary_op_token20] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [aux_sym__binary_op_token21] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(21),
    [aux_sym__binary_op_token22] = ACTIONS(23),
    [anon_sym_BANG_BANG] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [aux_sym__binary_op_token23] = ACTIONS(23),
    [aux_sym__binary_op_token24] = ACTIONS(23),
    [aux_sym__binary_op_token25] = ACTIONS(23),
    [aux_sym__binary_op_token26] = ACTIONS(23),
    [aux_sym__binary_op_token27] = ACTIONS(21),
    [aux_sym__binary_op_token28] = ACTIONS(23),
    [aux_sym__binary_op_token29] = ACTIONS(23),
    [aux_sym__binary_op_token30] = ACTIONS(23),
    [aux_sym__binary_op_token31] = ACTIONS(23),
  },
  [3] = {
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym__binary_op_token1] = ACTIONS(25),
    [aux_sym__binary_op_token2] = ACTIONS(25),
    [aux_sym__binary_op_token3] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [aux_sym__binary_op_token4] = ACTIONS(25),
    [aux_sym__binary_op_token5] = ACTIONS(25),
    [aux_sym__binary_op_token6] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(25),
    [aux_sym__binary_op_token7] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(25),
    [aux_sym__binary_op_token8] = ACTIONS(25),
    [aux_sym__binary_op_token9] = ACTIONS(25),
    [aux_sym__binary_op_token10] = ACTIONS(25),
    [aux_sym__binary_op_token11] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [aux_sym__binary_op_token12] = ACTIONS(25),
    [aux_sym__binary_op_token13] = ACTIONS(25),
    [aux_sym__binary_op_token14] = ACTIONS(25),
    [aux_sym__binary_op_token15] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_CARET_CARET] = ACTIONS(25),
    [aux_sym__binary_op_token16] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [aux_sym__binary_op_token17] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [aux_sym__binary_op_token18] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [aux_sym__binary_op_token19] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(25),
    [aux_sym__binary_op_token20] = ACTIONS(25),
    [anon_sym_GT_GT] = ACTIONS(25),
    [aux_sym__binary_op_token21] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [aux_sym__binary_op_token22] = ACTIONS(25),
    [anon_sym_BANG_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym__binary_op_token23] = ACTIONS(25),
    [aux_sym__binary_op_token24] = ACTIONS(25),
    [aux_sym__binary_op_token25] = ACTIONS(25),
    [aux_sym__binary_op_token26] = ACTIONS(25),
    [aux_sym__binary_op_token27] = ACTIONS(27),
    [aux_sym__binary_op_token28] = ACTIONS(25),
    [aux_sym__binary_op_token29] = ACTIONS(25),
    [aux_sym__binary_op_token30] = ACTIONS(25),
    [aux_sym__binary_op_token31] = ACTIONS(25),
  },
  [4] = {
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [aux_sym__binary_op_token1] = ACTIONS(33),
    [aux_sym__binary_op_token2] = ACTIONS(33),
    [aux_sym__binary_op_token3] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(31),
    [aux_sym__binary_op_token4] = ACTIONS(33),
    [aux_sym__binary_op_token5] = ACTIONS(33),
    [aux_sym__binary_op_token6] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(33),
    [aux_sym__binary_op_token7] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(33),
    [aux_sym__binary_op_token8] = ACTIONS(33),
    [aux_sym__binary_op_token9] = ACTIONS(33),
    [aux_sym__binary_op_token10] = ACTIONS(33),
    [aux_sym__binary_op_token11] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [aux_sym__binary_op_token12] = ACTIONS(33),
    [aux_sym__binary_op_token13] = ACTIONS(33),
    [aux_sym__binary_op_token14] = ACTIONS(33),
    [aux_sym__binary_op_token15] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_CARET_CARET] = ACTIONS(33),
    [aux_sym__binary_op_token16] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [aux_sym__binary_op_token17] = ACTIONS(33),
    [anon_sym_PERCENT] = ACTIONS(33),
    [aux_sym__binary_op_token18] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [aux_sym__binary_op_token19] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(33),
    [aux_sym__binary_op_token20] = ACTIONS(33),
    [anon_sym_GT_GT] = ACTIONS(33),
    [aux_sym__binary_op_token21] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(31),
    [aux_sym__binary_op_token22] = ACTIONS(33),
    [anon_sym_BANG_BANG] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [aux_sym__binary_op_token23] = ACTIONS(33),
    [aux_sym__binary_op_token24] = ACTIONS(33),
    [aux_sym__binary_op_token25] = ACTIONS(33),
    [aux_sym__binary_op_token26] = ACTIONS(33),
    [aux_sym__binary_op_token27] = ACTIONS(31),
    [aux_sym__binary_op_token28] = ACTIONS(33),
    [aux_sym__binary_op_token29] = ACTIONS(33),
    [aux_sym__binary_op_token30] = ACTIONS(33),
    [aux_sym__binary_op_token31] = ACTIONS(33),
  },
  [5] = {
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
  [6] = {
    [anon_sym_LT] = ACTIONS(31),
    [aux_sym__binary_op_token1] = ACTIONS(33),
    [aux_sym__binary_op_token2] = ACTIONS(33),
    [aux_sym__binary_op_token3] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(31),
    [aux_sym__binary_op_token4] = ACTIONS(33),
    [aux_sym__binary_op_token5] = ACTIONS(33),
    [aux_sym__binary_op_token6] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(33),
    [aux_sym__binary_op_token7] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(33),
    [aux_sym__binary_op_token8] = ACTIONS(33),
    [aux_sym__binary_op_token9] = ACTIONS(33),
    [aux_sym__binary_op_token10] = ACTIONS(33),
    [aux_sym__binary_op_token11] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [aux_sym__binary_op_token12] = ACTIONS(33),
    [aux_sym__binary_op_token13] = ACTIONS(33),
    [aux_sym__binary_op_token14] = ACTIONS(33),
    [aux_sym__binary_op_token15] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_CARET_CARET] = ACTIONS(33),
    [aux_sym__binary_op_token16] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [aux_sym__binary_op_token17] = ACTIONS(33),
    [anon_sym_PERCENT] = ACTIONS(33),
    [aux_sym__binary_op_token18] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [aux_sym__binary_op_token19] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(33),
    [aux_sym__binary_op_token20] = ACTIONS(33),
    [anon_sym_GT_GT] = ACTIONS(33),
    [aux_sym__binary_op_token21] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(31),
    [aux_sym__binary_op_token22] = ACTIONS(33),
    [anon_sym_BANG_BANG] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [aux_sym__binary_op_token23] = ACTIONS(33),
    [aux_sym__binary_op_token24] = ACTIONS(33),
    [aux_sym__binary_op_token25] = ACTIONS(33),
    [aux_sym__binary_op_token26] = ACTIONS(33),
    [aux_sym__binary_op_token27] = ACTIONS(31),
    [aux_sym__binary_op_token28] = ACTIONS(33),
    [aux_sym__binary_op_token29] = ACTIONS(33),
    [aux_sym__binary_op_token30] = ACTIONS(33),
    [aux_sym__binary_op_token31] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_if_statement_token1,
    ACTIONS(15), 1,
      aux_sym_print_statement_token1,
    ACTIONS(39), 1,
      aux_sym_if_statement_token2,
    ACTIONS(41), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(43), 1,
      aux_sym_else_statement_token1,
    STATE(39), 1,
      aux_sym_if_statement_repeat1,
    STATE(40), 1,
      sym_statement_list,
    STATE(68), 1,
      sym_elif_statement,
    STATE(69), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 9,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [55] = 10,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_if_statement_token1,
    ACTIONS(15), 1,
      aux_sym_print_statement_token1,
    STATE(66), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(45), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 9,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [97] = 10,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      aux_sym_version_statement_token1,
    ACTIONS(58), 1,
      aux_sym_get_statement_token1,
    ACTIONS(61), 1,
      aux_sym_set_statement_token1,
    ACTIONS(64), 1,
      aux_sym_if_statement_token1,
    ACTIONS(69), 1,
      aux_sym_print_statement_token1,
    ACTIONS(49), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(67), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 9,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [139] = 10,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_if_statement_token1,
    ACTIONS(15), 1,
      aux_sym_print_statement_token1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(76), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 9,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [181] = 10,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_if_statement_token1,
    ACTIONS(15), 1,
      aux_sym_print_statement_token1,
    ACTIONS(78), 1,
      aux_sym_if_statement_token2,
    STATE(73), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 9,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [221] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(82), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [238] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(86), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [255] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(90), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [272] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(94), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [289] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(98), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [306] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [323] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(106), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [340] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(110), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [357] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(114), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [374] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(118), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [391] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [408] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(126), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [425] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(130), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [442] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(134), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [459] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(138), 10,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [476] = 4,
    ACTIONS(142), 1,
      anon_sym_LF,
    STATE(31), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(140), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(144), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [493] = 5,
    ACTIONS(148), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statment_end,
    STATE(54), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(146), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [512] = 5,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    STATE(46), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(146), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [531] = 4,
    ACTIONS(154), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(152), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(156), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [548] = 4,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(159), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(144), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [565] = 2,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(152), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [577] = 4,
    STATE(27), 1,
      sym_binary_comparison,
    STATE(49), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(163), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [593] = 2,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [605] = 2,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(165), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [617] = 4,
    STATE(27), 1,
      sym_binary_comparison,
    STATE(50), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(163), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [633] = 3,
    STATE(32), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(163), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [646] = 6,
    ACTIONS(169), 1,
      aux_sym_if_statement_token2,
    ACTIONS(171), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(173), 1,
      aux_sym_else_statement_token1,
    STATE(43), 1,
      aux_sym_if_statement_repeat1,
    STATE(68), 1,
      sym_elif_statement,
    STATE(71), 1,
      sym_else_statement,
  [665] = 6,
    ACTIONS(171), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(173), 1,
      aux_sym_else_statement_token1,
    ACTIONS(175), 1,
      aux_sym_if_statement_token2,
    STATE(43), 1,
      aux_sym_if_statement_repeat1,
    STATE(68), 1,
      sym_elif_statement,
    STATE(76), 1,
      sym_else_statement,
  [684] = 6,
    ACTIONS(171), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(173), 1,
      aux_sym_else_statement_token1,
    ACTIONS(177), 1,
      aux_sym_if_statement_token2,
    STATE(38), 1,
      aux_sym_if_statement_repeat1,
    STATE(68), 1,
      sym_elif_statement,
    STATE(77), 1,
      sym_else_statement,
  [703] = 2,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [714] = 2,
    STATE(35), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(146), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [724] = 4,
    ACTIONS(181), 1,
      aux_sym_elif_statement_token1,
    STATE(43), 1,
      aux_sym_if_statement_repeat1,
    STATE(68), 1,
      sym_elif_statement,
    ACTIONS(179), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [738] = 2,
    STATE(29), 1,
      sym_variable,
    ACTIONS(184), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [747] = 3,
    ACTIONS(186), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [758] = 3,
    ACTIONS(188), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [769] = 3,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [780] = 2,
    STATE(47), 1,
      sym_variable,
    ACTIONS(146), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [789] = 3,
    ACTIONS(192), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [800] = 3,
    ACTIONS(194), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [811] = 3,
    ACTIONS(196), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [822] = 3,
    ACTIONS(198), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [833] = 2,
    STATE(61), 1,
      sym_variable,
    ACTIONS(146), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [842] = 3,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [853] = 3,
    ACTIONS(202), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [864] = 3,
    ACTIONS(204), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [875] = 3,
    ACTIONS(206), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [886] = 3,
    ACTIONS(208), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [897] = 2,
    STATE(75), 1,
      sym_variable,
    ACTIONS(210), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [906] = 2,
    STATE(44), 1,
      sym_variable,
    ACTIONS(212), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [915] = 3,
    ACTIONS(214), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [926] = 3,
    ACTIONS(216), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [937] = 3,
    ACTIONS(218), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [948] = 1,
    ACTIONS(220), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [954] = 1,
    ACTIONS(27), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [960] = 1,
    ACTIONS(222), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [966] = 1,
    ACTIONS(224), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [972] = 1,
    ACTIONS(226), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [978] = 1,
    ACTIONS(228), 1,
      aux_sym_if_statement_token2,
  [982] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [986] = 1,
    ACTIONS(232), 1,
      aux_sym_if_statement_token2,
  [990] = 1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [994] = 1,
    ACTIONS(236), 1,
      aux_sym_if_statement_token2,
  [998] = 1,
    ACTIONS(25), 1,
      sym_type,
  [1002] = 1,
    ACTIONS(238), 1,
      sym_type,
  [1006] = 1,
    ACTIONS(240), 1,
      aux_sym_if_statement_token2,
  [1010] = 1,
    ACTIONS(242), 1,
      aux_sym_if_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 181,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 238,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 289,
  [SMALL_STATE(17)] = 306,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 357,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 459,
  [SMALL_STATE(27)] = 476,
  [SMALL_STATE(28)] = 493,
  [SMALL_STATE(29)] = 512,
  [SMALL_STATE(30)] = 531,
  [SMALL_STATE(31)] = 548,
  [SMALL_STATE(32)] = 565,
  [SMALL_STATE(33)] = 577,
  [SMALL_STATE(34)] = 593,
  [SMALL_STATE(35)] = 605,
  [SMALL_STATE(36)] = 617,
  [SMALL_STATE(37)] = 633,
  [SMALL_STATE(38)] = 646,
  [SMALL_STATE(39)] = 665,
  [SMALL_STATE(40)] = 684,
  [SMALL_STATE(41)] = 703,
  [SMALL_STATE(42)] = 714,
  [SMALL_STATE(43)] = 724,
  [SMALL_STATE(44)] = 738,
  [SMALL_STATE(45)] = 747,
  [SMALL_STATE(46)] = 758,
  [SMALL_STATE(47)] = 769,
  [SMALL_STATE(48)] = 780,
  [SMALL_STATE(49)] = 789,
  [SMALL_STATE(50)] = 800,
  [SMALL_STATE(51)] = 811,
  [SMALL_STATE(52)] = 822,
  [SMALL_STATE(53)] = 833,
  [SMALL_STATE(54)] = 842,
  [SMALL_STATE(55)] = 853,
  [SMALL_STATE(56)] = 864,
  [SMALL_STATE(57)] = 875,
  [SMALL_STATE(58)] = 886,
  [SMALL_STATE(59)] = 897,
  [SMALL_STATE(60)] = 906,
  [SMALL_STATE(61)] = 915,
  [SMALL_STATE(62)] = 926,
  [SMALL_STATE(63)] = 937,
  [SMALL_STATE(64)] = 948,
  [SMALL_STATE(65)] = 954,
  [SMALL_STATE(66)] = 960,
  [SMALL_STATE(67)] = 966,
  [SMALL_STATE(68)] = 972,
  [SMALL_STATE(69)] = 978,
  [SMALL_STATE(70)] = 982,
  [SMALL_STATE(71)] = 986,
  [SMALL_STATE(72)] = 990,
  [SMALL_STATE(73)] = 994,
  [SMALL_STATE(74)] = 998,
  [SMALL_STATE(75)] = 1002,
  [SMALL_STATE(76)] = 1006,
  [SMALL_STATE(77)] = 1010,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(72),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(9),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(53),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(59),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(60),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(48),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 12),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 11),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 11),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 8),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 7),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 17),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 17),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 13),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 13),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 15),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 15),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 16),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 16),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(37),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 9),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 9), SHIFT_REPEAT(36),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 11),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 10),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
