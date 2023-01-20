#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 21

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
  aux_sym_goto_statement_token1 = 11,
  aux_sym_goto_statement_token2 = 12,
  aux_sym_goto_statement_token3 = 13,
  aux_sym_goto_statement_token4 = 14,
  aux_sym_goto_statement_token5 = 15,
  aux_sym_goto_statement_token6 = 16,
  aux_sym_if_statement_token1 = 17,
  aux_sym_if_statement_token2 = 18,
  aux_sym_elif_statement_token1 = 19,
  aux_sym_else_statement_token1 = 20,
  anon_sym_u = 21,
  anon_sym_0 = 22,
  anon_sym_LT = 23,
  aux_sym__binary_op_token1 = 24,
  aux_sym__binary_op_token2 = 25,
  aux_sym__binary_op_token3 = 26,
  anon_sym_GT = 27,
  aux_sym__binary_op_token4 = 28,
  aux_sym__binary_op_token5 = 29,
  aux_sym__binary_op_token6 = 30,
  anon_sym_LT_GT = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_BANG_EQ_EQ = 33,
  aux_sym__binary_op_token7 = 34,
  anon_sym_EQ = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_EQ_EQ_EQ = 37,
  aux_sym__binary_op_token8 = 38,
  aux_sym__binary_op_token9 = 39,
  aux_sym__binary_op_token10 = 40,
  aux_sym__binary_op_token11 = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_LT_EQ = 43,
  anon_sym_AMP = 44,
  anon_sym_AMP_AMP = 45,
  aux_sym__binary_op_token12 = 46,
  aux_sym__binary_op_token13 = 47,
  aux_sym__binary_op_token14 = 48,
  aux_sym__binary_op_token15 = 49,
  anon_sym_CARET = 50,
  anon_sym_CARET_CARET = 51,
  aux_sym__binary_op_token16 = 52,
  anon_sym_PIPE = 53,
  anon_sym_PIPE_PIPE = 54,
  aux_sym__binary_op_token17 = 55,
  anon_sym_PERCENT = 56,
  aux_sym__binary_op_token18 = 57,
  anon_sym_SLASH = 58,
  aux_sym__binary_op_token19 = 59,
  anon_sym_LT_LT = 60,
  aux_sym__binary_op_token20 = 61,
  anon_sym_GT_GT = 62,
  aux_sym__binary_op_token21 = 63,
  anon_sym_BANG = 64,
  aux_sym__binary_op_token22 = 65,
  anon_sym_BANG_BANG = 66,
  anon_sym_TILDE = 67,
  aux_sym__binary_op_token23 = 68,
  aux_sym__binary_op_token24 = 69,
  aux_sym__binary_op_token25 = 70,
  aux_sym__binary_op_token26 = 71,
  aux_sym__binary_op_token27 = 72,
  aux_sym__binary_op_token28 = 73,
  aux_sym__binary_op_token29 = 74,
  aux_sym__binary_op_token30 = 75,
  aux_sym__binary_op_token31 = 76,
  anon_sym_and = 77,
  anon_sym_or = 78,
  aux_sym_print_statement_token1 = 79,
  sym_statement_list = 80,
  sym_variable = 81,
  sym__statement = 82,
  sym__statment_end = 83,
  sym__empty_statment = 84,
  sym_version_statement = 85,
  sym_get_statement = 86,
  sym_set_statement = 87,
  sym_goto_statement = 88,
  sym_if_statement = 89,
  sym_elif_statement = 90,
  sym_else_statement = 91,
  sym__comparison_value = 92,
  sym_binary_comparison = 93,
  sym__binary_op = 94,
  sym_binary_expression = 95,
  sym_print_statement = 96,
  aux_sym_statement_list_repeat1 = 97,
  aux_sym_if_statement_repeat1 = 98,
  aux_sym_binary_expression_repeat1 = 99,
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
  field_right = 9,
  field_type = 10,
  field_value = 11,
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
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 4},
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
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [14] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 3},
  [17] =
    {field_file_number, 2},
    {field_offset, 1},
    {field_type, 3},
  [20] =
    {field_condition, 1},
  [21] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [23] =
    {field_consequence, 2},
  [24] =
    {field_condition, 1},
    {field_consequence, 3},
  [26] =
    {field_alternative, 3},
    {field_condition, 1},
  [28] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [30] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [33] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [36] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [39] =
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
  [30] = 3,
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
  [44] = 3,
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
  [73] = 3,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 3,
  [82] = 82,
  [83] = 83,
  [84] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      if (lookahead == '!') ADVANCE(249);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '&') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '<') ADVANCE(208);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == '^') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '~') ADVANCE(252);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(63);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '\'') ADVANCE(183);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(249);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '&') ADVANCE(229);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == '<') ADVANCE(208);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '^') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '~') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '\'') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(230);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(187);
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
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(201);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(200);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(197);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(239);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 75:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 76:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 77:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(244);
      END_STATE();
    case 78:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(260);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 88:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 98:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 99:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 101:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 131:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 164:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 165:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 166:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 167:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 168:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 169:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 170:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(62);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_goto_statement_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_goto_statement_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_goto_statement_token3);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_goto_statement_token4);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_goto_statement_token5);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_goto_statement_token6);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(245);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '>') ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(251);
      if (lookahead == '=') ADVANCE(217);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 172},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 172},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 172},
  [11] = {.lex_state = 172},
  [12] = {.lex_state = 172},
  [13] = {.lex_state = 172},
  [14] = {.lex_state = 172},
  [15] = {.lex_state = 172},
  [16] = {.lex_state = 172},
  [17] = {.lex_state = 172},
  [18] = {.lex_state = 172},
  [19] = {.lex_state = 172},
  [20] = {.lex_state = 172},
  [21] = {.lex_state = 172},
  [22] = {.lex_state = 172},
  [23] = {.lex_state = 172},
  [24] = {.lex_state = 172},
  [25] = {.lex_state = 172},
  [26] = {.lex_state = 172},
  [27] = {.lex_state = 172},
  [28] = {.lex_state = 172},
  [29] = {.lex_state = 172},
  [30] = {.lex_state = 172},
  [31] = {.lex_state = 172},
  [32] = {.lex_state = 172},
  [33] = {.lex_state = 172},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 172},
  [38] = {.lex_state = 172},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 172},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 172},
  [50] = {.lex_state = 172},
  [51] = {.lex_state = 172},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 172},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 172},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 172},
  [60] = {.lex_state = 172},
  [61] = {.lex_state = 172},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 172},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 172},
  [66] = {.lex_state = 172},
  [67] = {.lex_state = 172},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 172},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 170},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 170},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 172},
  [84] = {.lex_state = 0},
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
    [sym_statement_list] = STATE(77),
    [sym__statement] = STATE(10),
    [sym__statment_end] = STATE(10),
    [sym__empty_statment] = STATE(10),
    [sym_version_statement] = STATE(10),
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
    [aux_sym_get_statement_token1] = ACTIONS(9),
    [aux_sym_set_statement_token1] = ACTIONS(11),
    [aux_sym_goto_statement_token1] = ACTIONS(13),
    [aux_sym_if_statement_token1] = ACTIONS(15),
    [aux_sym_print_statement_token1] = ACTIONS(17),
  },
  [2] = {
    [sym__binary_op] = STATE(48),
    [anon_sym_u] = ACTIONS(19),
    [anon_sym_0] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [aux_sym__binary_op_token1] = ACTIONS(25),
    [aux_sym__binary_op_token2] = ACTIONS(25),
    [aux_sym__binary_op_token3] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(23),
    [aux_sym__binary_op_token4] = ACTIONS(25),
    [aux_sym__binary_op_token5] = ACTIONS(25),
    [aux_sym__binary_op_token6] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(25),
    [aux_sym__binary_op_token7] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(25),
    [aux_sym__binary_op_token8] = ACTIONS(25),
    [aux_sym__binary_op_token9] = ACTIONS(25),
    [aux_sym__binary_op_token10] = ACTIONS(25),
    [aux_sym__binary_op_token11] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [aux_sym__binary_op_token12] = ACTIONS(25),
    [aux_sym__binary_op_token13] = ACTIONS(25),
    [aux_sym__binary_op_token14] = ACTIONS(25),
    [aux_sym__binary_op_token15] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_CARET_CARET] = ACTIONS(25),
    [aux_sym__binary_op_token16] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(23),
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
    [anon_sym_BANG] = ACTIONS(23),
    [aux_sym__binary_op_token22] = ACTIONS(25),
    [anon_sym_BANG_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [aux_sym__binary_op_token23] = ACTIONS(25),
    [aux_sym__binary_op_token24] = ACTIONS(25),
    [aux_sym__binary_op_token25] = ACTIONS(25),
    [aux_sym__binary_op_token26] = ACTIONS(25),
    [aux_sym__binary_op_token27] = ACTIONS(23),
    [aux_sym__binary_op_token28] = ACTIONS(25),
    [aux_sym__binary_op_token29] = ACTIONS(25),
    [aux_sym__binary_op_token30] = ACTIONS(25),
    [aux_sym__binary_op_token31] = ACTIONS(25),
  },
  [3] = {
    [anon_sym_u] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [aux_sym__binary_op_token1] = ACTIONS(27),
    [aux_sym__binary_op_token2] = ACTIONS(27),
    [aux_sym__binary_op_token3] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [aux_sym__binary_op_token4] = ACTIONS(27),
    [aux_sym__binary_op_token5] = ACTIONS(27),
    [aux_sym__binary_op_token6] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(27),
    [aux_sym__binary_op_token7] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(27),
    [aux_sym__binary_op_token8] = ACTIONS(27),
    [aux_sym__binary_op_token9] = ACTIONS(27),
    [aux_sym__binary_op_token10] = ACTIONS(27),
    [aux_sym__binary_op_token11] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [aux_sym__binary_op_token12] = ACTIONS(27),
    [aux_sym__binary_op_token13] = ACTIONS(27),
    [aux_sym__binary_op_token14] = ACTIONS(27),
    [aux_sym__binary_op_token15] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_CARET_CARET] = ACTIONS(27),
    [aux_sym__binary_op_token16] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
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
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__binary_op_token22] = ACTIONS(27),
    [anon_sym_BANG_BANG] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [aux_sym__binary_op_token23] = ACTIONS(27),
    [aux_sym__binary_op_token24] = ACTIONS(27),
    [aux_sym__binary_op_token25] = ACTIONS(27),
    [aux_sym__binary_op_token26] = ACTIONS(27),
    [aux_sym__binary_op_token27] = ACTIONS(29),
    [aux_sym__binary_op_token28] = ACTIONS(27),
    [aux_sym__binary_op_token29] = ACTIONS(27),
    [aux_sym__binary_op_token30] = ACTIONS(27),
    [aux_sym__binary_op_token31] = ACTIONS(27),
  },
  [4] = {
    [anon_sym_0] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [aux_sym__binary_op_token1] = ACTIONS(35),
    [aux_sym__binary_op_token2] = ACTIONS(35),
    [aux_sym__binary_op_token3] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(33),
    [aux_sym__binary_op_token4] = ACTIONS(35),
    [aux_sym__binary_op_token5] = ACTIONS(35),
    [aux_sym__binary_op_token6] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(35),
    [aux_sym__binary_op_token7] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(35),
    [aux_sym__binary_op_token8] = ACTIONS(35),
    [aux_sym__binary_op_token9] = ACTIONS(35),
    [aux_sym__binary_op_token10] = ACTIONS(35),
    [aux_sym__binary_op_token11] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [aux_sym__binary_op_token12] = ACTIONS(35),
    [aux_sym__binary_op_token13] = ACTIONS(35),
    [aux_sym__binary_op_token14] = ACTIONS(35),
    [aux_sym__binary_op_token15] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_CARET_CARET] = ACTIONS(35),
    [aux_sym__binary_op_token16] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [aux_sym__binary_op_token17] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [aux_sym__binary_op_token18] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [aux_sym__binary_op_token19] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(35),
    [aux_sym__binary_op_token20] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [aux_sym__binary_op_token21] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(33),
    [aux_sym__binary_op_token22] = ACTIONS(35),
    [anon_sym_BANG_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [aux_sym__binary_op_token23] = ACTIONS(35),
    [aux_sym__binary_op_token24] = ACTIONS(35),
    [aux_sym__binary_op_token25] = ACTIONS(35),
    [aux_sym__binary_op_token26] = ACTIONS(35),
    [aux_sym__binary_op_token27] = ACTIONS(33),
    [aux_sym__binary_op_token28] = ACTIONS(35),
    [aux_sym__binary_op_token29] = ACTIONS(35),
    [aux_sym__binary_op_token30] = ACTIONS(35),
    [aux_sym__binary_op_token31] = ACTIONS(35),
  },
  [5] = {
    [anon_sym_LT] = ACTIONS(33),
    [aux_sym__binary_op_token1] = ACTIONS(35),
    [aux_sym__binary_op_token2] = ACTIONS(35),
    [aux_sym__binary_op_token3] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(33),
    [aux_sym__binary_op_token4] = ACTIONS(35),
    [aux_sym__binary_op_token5] = ACTIONS(35),
    [aux_sym__binary_op_token6] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(35),
    [aux_sym__binary_op_token7] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(35),
    [aux_sym__binary_op_token8] = ACTIONS(35),
    [aux_sym__binary_op_token9] = ACTIONS(35),
    [aux_sym__binary_op_token10] = ACTIONS(35),
    [aux_sym__binary_op_token11] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [aux_sym__binary_op_token12] = ACTIONS(35),
    [aux_sym__binary_op_token13] = ACTIONS(35),
    [aux_sym__binary_op_token14] = ACTIONS(35),
    [aux_sym__binary_op_token15] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_CARET_CARET] = ACTIONS(35),
    [aux_sym__binary_op_token16] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [aux_sym__binary_op_token17] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [aux_sym__binary_op_token18] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [aux_sym__binary_op_token19] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(35),
    [aux_sym__binary_op_token20] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [aux_sym__binary_op_token21] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(33),
    [aux_sym__binary_op_token22] = ACTIONS(35),
    [anon_sym_BANG_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [aux_sym__binary_op_token23] = ACTIONS(35),
    [aux_sym__binary_op_token24] = ACTIONS(35),
    [aux_sym__binary_op_token25] = ACTIONS(35),
    [aux_sym__binary_op_token26] = ACTIONS(35),
    [aux_sym__binary_op_token27] = ACTIONS(33),
    [aux_sym__binary_op_token28] = ACTIONS(35),
    [aux_sym__binary_op_token29] = ACTIONS(35),
    [aux_sym__binary_op_token30] = ACTIONS(35),
    [aux_sym__binary_op_token31] = ACTIONS(35),
  },
  [6] = {
    [anon_sym_LT] = ACTIONS(37),
    [aux_sym__binary_op_token1] = ACTIONS(39),
    [aux_sym__binary_op_token2] = ACTIONS(39),
    [aux_sym__binary_op_token3] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(37),
    [aux_sym__binary_op_token4] = ACTIONS(39),
    [aux_sym__binary_op_token5] = ACTIONS(39),
    [aux_sym__binary_op_token6] = ACTIONS(39),
    [anon_sym_LT_GT] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(39),
    [aux_sym__binary_op_token7] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(39),
    [aux_sym__binary_op_token8] = ACTIONS(39),
    [aux_sym__binary_op_token9] = ACTIONS(39),
    [aux_sym__binary_op_token10] = ACTIONS(39),
    [aux_sym__binary_op_token11] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [aux_sym__binary_op_token12] = ACTIONS(39),
    [aux_sym__binary_op_token13] = ACTIONS(39),
    [aux_sym__binary_op_token14] = ACTIONS(39),
    [aux_sym__binary_op_token15] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_CARET_CARET] = ACTIONS(39),
    [aux_sym__binary_op_token16] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [aux_sym__binary_op_token17] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [aux_sym__binary_op_token18] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [aux_sym__binary_op_token19] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [aux_sym__binary_op_token20] = ACTIONS(39),
    [anon_sym_GT_GT] = ACTIONS(39),
    [aux_sym__binary_op_token21] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(37),
    [aux_sym__binary_op_token22] = ACTIONS(39),
    [anon_sym_BANG_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [aux_sym__binary_op_token23] = ACTIONS(39),
    [aux_sym__binary_op_token24] = ACTIONS(39),
    [aux_sym__binary_op_token25] = ACTIONS(39),
    [aux_sym__binary_op_token26] = ACTIONS(39),
    [aux_sym__binary_op_token27] = ACTIONS(37),
    [aux_sym__binary_op_token28] = ACTIONS(39),
    [aux_sym__binary_op_token29] = ACTIONS(39),
    [aux_sym__binary_op_token30] = ACTIONS(39),
    [aux_sym__binary_op_token31] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(15), 1,
      aux_sym_if_statement_token1,
    ACTIONS(17), 1,
      aux_sym_print_statement_token1,
    ACTIONS(41), 1,
      aux_sym_if_statement_token2,
    ACTIONS(43), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(45), 1,
      aux_sym_else_statement_token1,
    STATE(45), 1,
      aux_sym_if_statement_repeat1,
    STATE(46), 1,
      sym_statement_list,
    STATE(75), 1,
      sym_elif_statement,
    STATE(76), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 10,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [59] = 11,
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
      aux_sym_goto_statement_token1,
    ACTIONS(67), 1,
      aux_sym_if_statement_token1,
    ACTIONS(72), 1,
      aux_sym_print_statement_token1,
    ACTIONS(49), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(70), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(8), 10,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [105] = 11,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(15), 1,
      aux_sym_if_statement_token1,
    ACTIONS(17), 1,
      aux_sym_print_statement_token1,
    STATE(72), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(75), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 10,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [151] = 11,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(15), 1,
      aux_sym_if_statement_token1,
    ACTIONS(17), 1,
      aux_sym_print_statement_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(81), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(8), 10,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [197] = 11,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_set_statement_token1,
    ACTIONS(13), 1,
      aux_sym_goto_statement_token1,
    ACTIONS(15), 1,
      aux_sym_if_statement_token1,
    ACTIONS(17), 1,
      aux_sym_print_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token2,
    STATE(80), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 10,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_set_statement,
      sym_goto_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [241] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [259] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(91), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [277] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(95), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [295] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(99), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [313] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [331] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(107), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [349] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [367] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(115), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [385] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(119), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [403] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(123), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [421] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(127), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [439] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(131), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [457] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(135), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [475] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(139), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [493] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(143), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [511] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(147), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [529] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(151), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [547] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(155), 11,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_goto_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [565] = 2,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 11,
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
  [582] = 4,
    ACTIONS(157), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(159), 5,
      aux_sym_goto_statement_token2,
      aux_sym_goto_statement_token3,
      aux_sym_goto_statement_token4,
      aux_sym_goto_statement_token5,
      aux_sym_goto_statement_token6,
  [600] = 4,
    ACTIONS(163), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(161), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(165), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [617] = 4,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(168), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(172), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [634] = 5,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statment_end,
    STATE(31), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(174), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [653] = 5,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statment_end,
    STATE(53), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(174), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [672] = 5,
    ACTIONS(180), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statment_end,
    STATE(61), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(174), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [691] = 4,
    ACTIONS(184), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(182), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(172), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [708] = 2,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(161), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [720] = 4,
    STATE(37), 1,
      sym_binary_comparison,
    STATE(56), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(186), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [736] = 2,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(188), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [748] = 4,
    STATE(37), 1,
      sym_binary_comparison,
    STATE(49), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(186), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [764] = 3,
    STATE(38), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(186), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [777] = 6,
    ACTIONS(192), 1,
      aux_sym_if_statement_token2,
    ACTIONS(194), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(196), 1,
      aux_sym_else_statement_token1,
    STATE(47), 1,
      aux_sym_if_statement_repeat1,
    STATE(75), 1,
      sym_elif_statement,
    STATE(82), 1,
      sym_else_statement,
  [796] = 2,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 5,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
      sym_comment,
      anon_sym_SEMI,
  [807] = 6,
    ACTIONS(194), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(196), 1,
      aux_sym_else_statement_token1,
    ACTIONS(198), 1,
      aux_sym_if_statement_token2,
    STATE(47), 1,
      aux_sym_if_statement_repeat1,
    STATE(75), 1,
      sym_elif_statement,
    STATE(78), 1,
      sym_else_statement,
  [826] = 6,
    ACTIONS(194), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(196), 1,
      aux_sym_else_statement_token1,
    ACTIONS(200), 1,
      aux_sym_if_statement_token2,
    STATE(43), 1,
      aux_sym_if_statement_repeat1,
    STATE(75), 1,
      sym_elif_statement,
    STATE(84), 1,
      sym_else_statement,
  [845] = 4,
    ACTIONS(204), 1,
      aux_sym_elif_statement_token1,
    STATE(47), 1,
      aux_sym_if_statement_repeat1,
    STATE(75), 1,
      sym_elif_statement,
    ACTIONS(202), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [859] = 2,
    STATE(40), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(174), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [869] = 3,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [880] = 3,
    ACTIONS(209), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [891] = 3,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [902] = 2,
    STATE(79), 1,
      sym_variable,
    ACTIONS(213), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [911] = 3,
    ACTIONS(215), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [922] = 3,
    ACTIONS(217), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [933] = 2,
    STATE(58), 1,
      sym_variable,
    ACTIONS(219), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [942] = 3,
    ACTIONS(221), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [953] = 3,
    ACTIONS(223), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [964] = 2,
    STATE(35), 1,
      sym_variable,
    ACTIONS(225), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [973] = 3,
    ACTIONS(227), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [984] = 3,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [995] = 3,
    ACTIONS(231), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1006] = 3,
    ACTIONS(233), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1017] = 3,
    ACTIONS(235), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1028] = 2,
    STATE(65), 1,
      sym_variable,
    ACTIONS(174), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1037] = 3,
    ACTIONS(237), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1048] = 3,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1059] = 3,
    ACTIONS(241), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1070] = 2,
    STATE(54), 1,
      sym_variable,
    ACTIONS(174), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1079] = 3,
    ACTIONS(243), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [1090] = 2,
    STATE(34), 1,
      sym_variable,
    ACTIONS(225), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1099] = 1,
    ACTIONS(245), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1105] = 1,
    ACTIONS(247), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [1111] = 1,
    ACTIONS(29), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1117] = 1,
    ACTIONS(249), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [1123] = 1,
    ACTIONS(251), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [1129] = 1,
    ACTIONS(253), 1,
      aux_sym_if_statement_token2,
  [1133] = 1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
  [1137] = 1,
    ACTIONS(257), 1,
      aux_sym_if_statement_token2,
  [1141] = 1,
    ACTIONS(259), 1,
      sym_type,
  [1145] = 1,
    ACTIONS(261), 1,
      aux_sym_if_statement_token2,
  [1149] = 1,
    ACTIONS(27), 1,
      sym_type,
  [1153] = 1,
    ACTIONS(263), 1,
      aux_sym_if_statement_token2,
  [1157] = 1,
    ACTIONS(265), 1,
      anon_sym_LF,
  [1161] = 1,
    ACTIONS(267), 1,
      aux_sym_if_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 59,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 241,
  [SMALL_STATE(13)] = 259,
  [SMALL_STATE(14)] = 277,
  [SMALL_STATE(15)] = 295,
  [SMALL_STATE(16)] = 313,
  [SMALL_STATE(17)] = 331,
  [SMALL_STATE(18)] = 349,
  [SMALL_STATE(19)] = 367,
  [SMALL_STATE(20)] = 385,
  [SMALL_STATE(21)] = 403,
  [SMALL_STATE(22)] = 421,
  [SMALL_STATE(23)] = 439,
  [SMALL_STATE(24)] = 457,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 493,
  [SMALL_STATE(27)] = 511,
  [SMALL_STATE(28)] = 529,
  [SMALL_STATE(29)] = 547,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 582,
  [SMALL_STATE(32)] = 600,
  [SMALL_STATE(33)] = 617,
  [SMALL_STATE(34)] = 634,
  [SMALL_STATE(35)] = 653,
  [SMALL_STATE(36)] = 672,
  [SMALL_STATE(37)] = 691,
  [SMALL_STATE(38)] = 708,
  [SMALL_STATE(39)] = 720,
  [SMALL_STATE(40)] = 736,
  [SMALL_STATE(41)] = 748,
  [SMALL_STATE(42)] = 764,
  [SMALL_STATE(43)] = 777,
  [SMALL_STATE(44)] = 796,
  [SMALL_STATE(45)] = 807,
  [SMALL_STATE(46)] = 826,
  [SMALL_STATE(47)] = 845,
  [SMALL_STATE(48)] = 859,
  [SMALL_STATE(49)] = 869,
  [SMALL_STATE(50)] = 880,
  [SMALL_STATE(51)] = 891,
  [SMALL_STATE(52)] = 902,
  [SMALL_STATE(53)] = 911,
  [SMALL_STATE(54)] = 922,
  [SMALL_STATE(55)] = 933,
  [SMALL_STATE(56)] = 942,
  [SMALL_STATE(57)] = 953,
  [SMALL_STATE(58)] = 964,
  [SMALL_STATE(59)] = 973,
  [SMALL_STATE(60)] = 984,
  [SMALL_STATE(61)] = 995,
  [SMALL_STATE(62)] = 1006,
  [SMALL_STATE(63)] = 1017,
  [SMALL_STATE(64)] = 1028,
  [SMALL_STATE(65)] = 1037,
  [SMALL_STATE(66)] = 1048,
  [SMALL_STATE(67)] = 1059,
  [SMALL_STATE(68)] = 1070,
  [SMALL_STATE(69)] = 1079,
  [SMALL_STATE(70)] = 1090,
  [SMALL_STATE(71)] = 1099,
  [SMALL_STATE(72)] = 1105,
  [SMALL_STATE(73)] = 1111,
  [SMALL_STATE(74)] = 1117,
  [SMALL_STATE(75)] = 1123,
  [SMALL_STATE(76)] = 1129,
  [SMALL_STATE(77)] = 1133,
  [SMALL_STATE(78)] = 1137,
  [SMALL_STATE(79)] = 1141,
  [SMALL_STATE(80)] = 1145,
  [SMALL_STATE(81)] = 1149,
  [SMALL_STATE(82)] = 1153,
  [SMALL_STATE(83)] = 1157,
  [SMALL_STATE(84)] = 1161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(83),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(64),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(52),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(55),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(70),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(39),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(68),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 14),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 14),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 11),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 11),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 4, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 4, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 4, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 5, .production_id = 10),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 5, .production_id = 10),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 9),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5, .production_id = 9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 19),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 19),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 15),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 15),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 16),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 17),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 17),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 8),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 8),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 18),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(42),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 12),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 12), SHIFT_REPEAT(41),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 14),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [255] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 13),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
