#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 13

enum {
  aux_sym_variable_token1 = 1,
  aux_sym_variable_token2 = 2,
  aux_sym_variable_token3 = 3,
  sym_comment = 4,
  anon_sym_SEMI = 5,
  anon_sym_LF = 6,
  aux_sym_if_statement_token1 = 7,
  aux_sym_if_statement_token2 = 8,
  aux_sym_elif_statement_token1 = 9,
  aux_sym_else_statement_token1 = 10,
  anon_sym_u = 11,
  anon_sym_0 = 12,
  anon_sym_LT = 13,
  aux_sym__binary_op_token1 = 14,
  aux_sym__binary_op_token2 = 15,
  aux_sym__binary_op_token3 = 16,
  anon_sym_GT = 17,
  aux_sym__binary_op_token4 = 18,
  aux_sym__binary_op_token5 = 19,
  aux_sym__binary_op_token6 = 20,
  anon_sym_LT_GT = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_BANG_EQ_EQ = 23,
  aux_sym__binary_op_token7 = 24,
  anon_sym_EQ = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_EQ_EQ_EQ = 27,
  aux_sym__binary_op_token8 = 28,
  aux_sym__binary_op_token9 = 29,
  aux_sym__binary_op_token10 = 30,
  aux_sym__binary_op_token11 = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_AMP = 34,
  anon_sym_AMP_AMP = 35,
  aux_sym__binary_op_token12 = 36,
  aux_sym__binary_op_token13 = 37,
  aux_sym__binary_op_token14 = 38,
  aux_sym__binary_op_token15 = 39,
  anon_sym_CARET = 40,
  anon_sym_CARET_CARET = 41,
  aux_sym__binary_op_token16 = 42,
  anon_sym_PIPE = 43,
  anon_sym_PIPE_PIPE = 44,
  aux_sym__binary_op_token17 = 45,
  anon_sym_PERCENT = 46,
  aux_sym__binary_op_token18 = 47,
  anon_sym_SLASH = 48,
  aux_sym__binary_op_token19 = 49,
  anon_sym_LT_LT = 50,
  aux_sym__binary_op_token20 = 51,
  anon_sym_GT_GT = 52,
  aux_sym__binary_op_token21 = 53,
  anon_sym_BANG = 54,
  aux_sym__binary_op_token22 = 55,
  anon_sym_BANG_BANG = 56,
  anon_sym_TILDE = 57,
  aux_sym__binary_op_token23 = 58,
  aux_sym__binary_op_token24 = 59,
  aux_sym__binary_op_token25 = 60,
  aux_sym__binary_op_token26 = 61,
  aux_sym__binary_op_token27 = 62,
  aux_sym__binary_op_token28 = 63,
  aux_sym__binary_op_token29 = 64,
  aux_sym__binary_op_token30 = 65,
  aux_sym__binary_op_token31 = 66,
  anon_sym_and = 67,
  anon_sym_or = 68,
  sym_statement_list = 69,
  sym_variable = 70,
  sym__statement = 71,
  sym__statment_end = 72,
  sym__empty_statment = 73,
  sym_if_statement = 74,
  sym_elif_statement = 75,
  sym_else_statement = 76,
  sym__comparison_value = 77,
  sym_binary_comparison = 78,
  sym__binary_op = 79,
  sym_binary_expression = 80,
  aux_sym_statement_list_repeat1 = 81,
  aux_sym_if_statement_repeat1 = 82,
  aux_sym_binary_expression_repeat1 = 83,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_variable_token2] = "variable_token2",
  [aux_sym_variable_token3] = "variable_token3",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
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
  [sym_statement_list] = "statement_list",
  [sym_variable] = "variable",
  [sym__statement] = "_statement",
  [sym__statment_end] = "_statment_end",
  [sym__empty_statment] = "_empty_statment",
  [sym_if_statement] = "if_statement",
  [sym_elif_statement] = "elif_statement",
  [sym_else_statement] = "else_statement",
  [sym__comparison_value] = "_comparison_value",
  [sym_binary_comparison] = "binary_comparison",
  [sym__binary_op] = "_binary_op",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
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
  [sym_statement_list] = sym_statement_list,
  [sym_variable] = sym_variable,
  [sym__statement] = sym__statement,
  [sym__statment_end] = sym__statment_end,
  [sym__empty_statment] = sym__empty_statment,
  [sym_if_statement] = sym_if_statement,
  [sym_elif_statement] = sym_elif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym__comparison_value] = sym__comparison_value,
  [sym_binary_comparison] = sym_binary_comparison,
  [sym__binary_op] = sym__binary_op,
  [sym_binary_expression] = sym_binary_expression,
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
  field_left = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
  [2] =
    {field_alternative, 0},
  [3] =
    {field_condition, 1},
  [4] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [6] =
    {field_consequence, 2},
  [7] =
    {field_condition, 1},
    {field_consequence, 3},
  [9] =
    {field_alternative, 3},
    {field_condition, 1},
  [11] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [13] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [16] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [19] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [22] =
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
  [24] = 3,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(133);
      if (lookahead == '!') ADVANCE(194);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == '^') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '~') ADVANCE(197);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(194);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(174);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '^') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '~') ADVANCE(197);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(136);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 15:
      if (lookahead == '|') ADVANCE(184);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(87);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 33:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 51:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 52:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 53:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 54:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(65);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(127);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 66:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 67:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 75:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 96:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 98:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 100:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 101:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(127);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      END_STATE();
    case 115:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 117:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 127:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 128:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 129:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 131:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 132:
      if (eof) ADVANCE(133);
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(132)
      END_STATE();
    case 133:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '>') ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 132},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 132},
  [8] = {.lex_state = 132},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 132},
  [11] = {.lex_state = 132},
  [12] = {.lex_state = 132},
  [13] = {.lex_state = 132},
  [14] = {.lex_state = 132},
  [15] = {.lex_state = 132},
  [16] = {.lex_state = 132},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 132},
  [20] = {.lex_state = 132},
  [21] = {.lex_state = 132},
  [22] = {.lex_state = 132},
  [23] = {.lex_state = 132},
  [24] = {.lex_state = 132},
  [25] = {.lex_state = 132},
  [26] = {.lex_state = 132},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 132},
  [36] = {.lex_state = 132},
  [37] = {.lex_state = 132},
  [38] = {.lex_state = 132},
  [39] = {.lex_state = 132},
  [40] = {.lex_state = 132},
  [41] = {.lex_state = 132},
  [42] = {.lex_state = 132},
  [43] = {.lex_state = 132},
  [44] = {.lex_state = 132},
  [45] = {.lex_state = 132},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 132},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_variable_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
  },
  [1] = {
    [sym_statement_list] = STATE(56),
    [sym__statement] = STATE(9),
    [sym__statment_end] = STATE(9),
    [sym__empty_statment] = STATE(9),
    [sym_if_statement] = STATE(9),
    [aux_sym_statement_list_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_if_statement_token1] = ACTIONS(7),
  },
  [2] = {
    [sym__binary_op] = STATE(34),
    [anon_sym_u] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [aux_sym__binary_op_token1] = ACTIONS(15),
    [aux_sym__binary_op_token2] = ACTIONS(15),
    [aux_sym__binary_op_token3] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(13),
    [aux_sym__binary_op_token4] = ACTIONS(15),
    [aux_sym__binary_op_token5] = ACTIONS(15),
    [aux_sym__binary_op_token6] = ACTIONS(15),
    [anon_sym_LT_GT] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(15),
    [aux_sym__binary_op_token7] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(15),
    [aux_sym__binary_op_token8] = ACTIONS(15),
    [aux_sym__binary_op_token9] = ACTIONS(15),
    [aux_sym__binary_op_token10] = ACTIONS(15),
    [aux_sym__binary_op_token11] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [aux_sym__binary_op_token12] = ACTIONS(15),
    [aux_sym__binary_op_token13] = ACTIONS(15),
    [aux_sym__binary_op_token14] = ACTIONS(15),
    [aux_sym__binary_op_token15] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_CARET_CARET] = ACTIONS(15),
    [aux_sym__binary_op_token16] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [aux_sym__binary_op_token17] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(15),
    [aux_sym__binary_op_token18] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [aux_sym__binary_op_token19] = ACTIONS(15),
    [anon_sym_LT_LT] = ACTIONS(15),
    [aux_sym__binary_op_token20] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(15),
    [aux_sym__binary_op_token21] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(13),
    [aux_sym__binary_op_token22] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [aux_sym__binary_op_token23] = ACTIONS(15),
    [aux_sym__binary_op_token24] = ACTIONS(15),
    [aux_sym__binary_op_token25] = ACTIONS(15),
    [aux_sym__binary_op_token26] = ACTIONS(15),
    [aux_sym__binary_op_token27] = ACTIONS(13),
    [aux_sym__binary_op_token28] = ACTIONS(15),
    [aux_sym__binary_op_token29] = ACTIONS(15),
    [aux_sym__binary_op_token30] = ACTIONS(15),
    [aux_sym__binary_op_token31] = ACTIONS(15),
  },
  [3] = {
    [anon_sym_u] = ACTIONS(17),
    [anon_sym_0] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym__binary_op_token1] = ACTIONS(17),
    [aux_sym__binary_op_token2] = ACTIONS(17),
    [aux_sym__binary_op_token3] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [aux_sym__binary_op_token4] = ACTIONS(17),
    [aux_sym__binary_op_token5] = ACTIONS(17),
    [aux_sym__binary_op_token6] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(17),
    [aux_sym__binary_op_token7] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(17),
    [aux_sym__binary_op_token8] = ACTIONS(17),
    [aux_sym__binary_op_token9] = ACTIONS(17),
    [aux_sym__binary_op_token10] = ACTIONS(17),
    [aux_sym__binary_op_token11] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(17),
    [aux_sym__binary_op_token12] = ACTIONS(17),
    [aux_sym__binary_op_token13] = ACTIONS(17),
    [aux_sym__binary_op_token14] = ACTIONS(17),
    [aux_sym__binary_op_token15] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_CARET_CARET] = ACTIONS(17),
    [aux_sym__binary_op_token16] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(17),
    [aux_sym__binary_op_token17] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(17),
    [aux_sym__binary_op_token18] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [aux_sym__binary_op_token19] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [aux_sym__binary_op_token20] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [aux_sym__binary_op_token21] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [aux_sym__binary_op_token22] = ACTIONS(17),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym__binary_op_token23] = ACTIONS(17),
    [aux_sym__binary_op_token24] = ACTIONS(17),
    [aux_sym__binary_op_token25] = ACTIONS(17),
    [aux_sym__binary_op_token26] = ACTIONS(17),
    [aux_sym__binary_op_token27] = ACTIONS(19),
    [aux_sym__binary_op_token28] = ACTIONS(17),
    [aux_sym__binary_op_token29] = ACTIONS(17),
    [aux_sym__binary_op_token30] = ACTIONS(17),
    [aux_sym__binary_op_token31] = ACTIONS(17),
  },
  [4] = {
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
  [5] = {
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym__binary_op_token1] = ACTIONS(29),
    [aux_sym__binary_op_token2] = ACTIONS(29),
    [aux_sym__binary_op_token3] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(27),
    [aux_sym__binary_op_token4] = ACTIONS(29),
    [aux_sym__binary_op_token5] = ACTIONS(29),
    [aux_sym__binary_op_token6] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(29),
    [aux_sym__binary_op_token7] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(29),
    [aux_sym__binary_op_token8] = ACTIONS(29),
    [aux_sym__binary_op_token9] = ACTIONS(29),
    [aux_sym__binary_op_token10] = ACTIONS(29),
    [aux_sym__binary_op_token11] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [aux_sym__binary_op_token12] = ACTIONS(29),
    [aux_sym__binary_op_token13] = ACTIONS(29),
    [aux_sym__binary_op_token14] = ACTIONS(29),
    [aux_sym__binary_op_token15] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_CARET_CARET] = ACTIONS(29),
    [aux_sym__binary_op_token16] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(27),
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
    [anon_sym_BANG] = ACTIONS(27),
    [aux_sym__binary_op_token22] = ACTIONS(29),
    [anon_sym_BANG_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [aux_sym__binary_op_token23] = ACTIONS(29),
    [aux_sym__binary_op_token24] = ACTIONS(29),
    [aux_sym__binary_op_token25] = ACTIONS(29),
    [aux_sym__binary_op_token26] = ACTIONS(29),
    [aux_sym__binary_op_token27] = ACTIONS(27),
    [aux_sym__binary_op_token28] = ACTIONS(29),
    [aux_sym__binary_op_token29] = ACTIONS(29),
    [aux_sym__binary_op_token30] = ACTIONS(29),
    [aux_sym__binary_op_token31] = ACTIONS(29),
  },
  [6] = {
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token2,
    ACTIONS(33), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(35), 1,
      aux_sym_else_statement_token1,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    STATE(31), 1,
      sym_statement_list,
    STATE(47), 1,
      sym_elif_statement,
    STATE(50), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [39] = 6,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    STATE(49), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(37), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [65] = 6,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(43), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [91] = 6,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      aux_sym_if_statement_token1,
    ACTIONS(47), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(56), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [117] = 6,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(58), 1,
      aux_sym_if_statement_token2,
    STATE(53), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [141] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(62), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [154] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(66), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [167] = 2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(70), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [180] = 4,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(72), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(76), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [197] = 4,
    ACTIONS(80), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(78), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(76), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [214] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(84), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [227] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [240] = 4,
    ACTIONS(92), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(90), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(94), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [257] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(99), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [270] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [283] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(107), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [296] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [309] = 2,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(19), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [321] = 2,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(113), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [333] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(90), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [345] = 4,
    STATE(16), 1,
      sym_binary_comparison,
    STATE(44), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(117), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [361] = 4,
    STATE(16), 1,
      sym_binary_comparison,
    STATE(37), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(117), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [377] = 3,
    STATE(26), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(117), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [390] = 6,
    ACTIONS(119), 1,
      aux_sym_if_statement_token2,
    ACTIONS(121), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(123), 1,
      aux_sym_else_statement_token1,
    STATE(33), 1,
      aux_sym_if_statement_repeat1,
    STATE(47), 1,
      sym_elif_statement,
    STATE(55), 1,
      sym_else_statement,
  [409] = 6,
    ACTIONS(121), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(123), 1,
      aux_sym_else_statement_token1,
    ACTIONS(125), 1,
      aux_sym_if_statement_token2,
    STATE(32), 1,
      aux_sym_if_statement_repeat1,
    STATE(47), 1,
      sym_elif_statement,
    STATE(52), 1,
      sym_else_statement,
  [428] = 6,
    ACTIONS(121), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(123), 1,
      aux_sym_else_statement_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token2,
    STATE(33), 1,
      aux_sym_if_statement_repeat1,
    STATE(47), 1,
      sym_elif_statement,
    STATE(51), 1,
      sym_else_statement,
  [447] = 4,
    ACTIONS(131), 1,
      aux_sym_elif_statement_token1,
    STATE(33), 1,
      aux_sym_if_statement_repeat1,
    STATE(47), 1,
      sym_elif_statement,
    ACTIONS(129), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [461] = 2,
    STATE(25), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(134), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [471] = 3,
    ACTIONS(136), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [482] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [493] = 3,
    ACTIONS(140), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [504] = 3,
    ACTIONS(142), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [515] = 3,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [526] = 3,
    ACTIONS(146), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [537] = 3,
    ACTIONS(148), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [548] = 3,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [559] = 3,
    ACTIONS(152), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [570] = 3,
    ACTIONS(154), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [581] = 3,
    ACTIONS(156), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [592] = 1,
    ACTIONS(158), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [598] = 1,
    ACTIONS(160), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [604] = 1,
    ACTIONS(162), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [610] = 1,
    ACTIONS(164), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [616] = 1,
    ACTIONS(166), 1,
      aux_sym_if_statement_token2,
  [620] = 1,
    ACTIONS(168), 1,
      aux_sym_if_statement_token2,
  [624] = 1,
    ACTIONS(170), 1,
      aux_sym_if_statement_token2,
  [628] = 1,
    ACTIONS(172), 1,
      aux_sym_if_statement_token2,
  [632] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [636] = 1,
    ACTIONS(176), 1,
      aux_sym_if_statement_token2,
  [640] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 65,
  [SMALL_STATE(10)] = 91,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 154,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 180,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 296,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 321,
  [SMALL_STATE(26)] = 333,
  [SMALL_STATE(27)] = 345,
  [SMALL_STATE(28)] = 361,
  [SMALL_STATE(29)] = 377,
  [SMALL_STATE(30)] = 390,
  [SMALL_STATE(31)] = 409,
  [SMALL_STATE(32)] = 428,
  [SMALL_STATE(33)] = 447,
  [SMALL_STATE(34)] = 461,
  [SMALL_STATE(35)] = 471,
  [SMALL_STATE(36)] = 482,
  [SMALL_STATE(37)] = 493,
  [SMALL_STATE(38)] = 504,
  [SMALL_STATE(39)] = 515,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 537,
  [SMALL_STATE(42)] = 548,
  [SMALL_STATE(43)] = 559,
  [SMALL_STATE(44)] = 570,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 592,
  [SMALL_STATE(47)] = 598,
  [SMALL_STATE(48)] = 604,
  [SMALL_STATE(49)] = 610,
  [SMALL_STATE(50)] = 616,
  [SMALL_STATE(51)] = 620,
  [SMALL_STATE(52)] = 624,
  [SMALL_STATE(53)] = 628,
  [SMALL_STATE(54)] = 632,
  [SMALL_STATE(55)] = 636,
  [SMALL_STATE(56)] = 640,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(54),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(28),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 4),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(27),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
