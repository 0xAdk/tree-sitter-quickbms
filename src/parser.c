#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
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
  aux_sym_version_statement_token1 = 7,
  aux_sym_if_statement_token1 = 8,
  aux_sym_if_statement_token2 = 9,
  aux_sym_elif_statement_token1 = 10,
  aux_sym_else_statement_token1 = 11,
  anon_sym_u = 12,
  anon_sym_0 = 13,
  anon_sym_LT = 14,
  aux_sym__binary_op_token1 = 15,
  aux_sym__binary_op_token2 = 16,
  aux_sym__binary_op_token3 = 17,
  anon_sym_GT = 18,
  aux_sym__binary_op_token4 = 19,
  aux_sym__binary_op_token5 = 20,
  aux_sym__binary_op_token6 = 21,
  anon_sym_LT_GT = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_BANG_EQ_EQ = 24,
  aux_sym__binary_op_token7 = 25,
  anon_sym_EQ = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_EQ_EQ_EQ = 28,
  aux_sym__binary_op_token8 = 29,
  aux_sym__binary_op_token9 = 30,
  aux_sym__binary_op_token10 = 31,
  aux_sym__binary_op_token11 = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_AMP = 35,
  anon_sym_AMP_AMP = 36,
  aux_sym__binary_op_token12 = 37,
  aux_sym__binary_op_token13 = 38,
  aux_sym__binary_op_token14 = 39,
  aux_sym__binary_op_token15 = 40,
  anon_sym_CARET = 41,
  anon_sym_CARET_CARET = 42,
  aux_sym__binary_op_token16 = 43,
  anon_sym_PIPE = 44,
  anon_sym_PIPE_PIPE = 45,
  aux_sym__binary_op_token17 = 46,
  anon_sym_PERCENT = 47,
  aux_sym__binary_op_token18 = 48,
  anon_sym_SLASH = 49,
  aux_sym__binary_op_token19 = 50,
  anon_sym_LT_LT = 51,
  aux_sym__binary_op_token20 = 52,
  anon_sym_GT_GT = 53,
  aux_sym__binary_op_token21 = 54,
  anon_sym_BANG = 55,
  aux_sym__binary_op_token22 = 56,
  anon_sym_BANG_BANG = 57,
  anon_sym_TILDE = 58,
  aux_sym__binary_op_token23 = 59,
  aux_sym__binary_op_token24 = 60,
  aux_sym__binary_op_token25 = 61,
  aux_sym__binary_op_token26 = 62,
  aux_sym__binary_op_token27 = 63,
  aux_sym__binary_op_token28 = 64,
  aux_sym__binary_op_token29 = 65,
  aux_sym__binary_op_token30 = 66,
  aux_sym__binary_op_token31 = 67,
  anon_sym_and = 68,
  anon_sym_or = 69,
  sym_statement_list = 70,
  sym_variable = 71,
  sym__statement = 72,
  sym__statment_end = 73,
  sym__empty_statment = 74,
  sym_version_statement = 75,
  sym_if_statement = 76,
  sym_elif_statement = 77,
  sym_else_statement = 78,
  sym__comparison_value = 79,
  sym_binary_comparison = 80,
  sym__binary_op = 81,
  sym_binary_expression = 82,
  aux_sym_statement_list_repeat1 = 83,
  aux_sym_if_statement_repeat1 = 84,
  aux_sym_binary_expression_repeat1 = 85,
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
  [sym_version_statement] = "version_statement",
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
  [aux_sym_version_statement_token1] = aux_sym_version_statement_token1,
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
  [sym_version_statement] = sym_version_statement,
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
  [aux_sym_version_statement_token1] = {
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
  [sym_version_statement] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 3,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(197);
      if (lookahead == '&') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '<') ADVANCE(164);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == '^') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(136);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '%') ADVANCE(197);
      if (lookahead == '&') ADVANCE(185);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == '<') ADVANCE(164);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '^') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(109);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(186);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(153);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 15:
      if (lookahead == '|') ADVANCE(195);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 54:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 55:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 56:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 57:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 59:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(135);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 77:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 101:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 102:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 103:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 104:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 105:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 107:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(135);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 136:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 137:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 138:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 139:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 140:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '>') ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(207);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 142},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 142},
  [14] = {.lex_state = 142},
  [15] = {.lex_state = 142},
  [16] = {.lex_state = 142},
  [17] = {.lex_state = 142},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 142},
  [21] = {.lex_state = 142},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 142},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 142},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 142},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 142},
  [37] = {.lex_state = 142},
  [38] = {.lex_state = 142},
  [39] = {.lex_state = 142},
  [40] = {.lex_state = 142},
  [41] = {.lex_state = 142},
  [42] = {.lex_state = 142},
  [43] = {.lex_state = 142},
  [44] = {.lex_state = 142},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 142},
  [47] = {.lex_state = 142},
  [48] = {.lex_state = 142},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 142},
  [59] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_variable_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_version_statement_token1] = ACTIONS(1),
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
    [sym_statement_list] = STATE(55),
    [sym__statement] = STATE(9),
    [sym__statment_end] = STATE(9),
    [sym__empty_statment] = STATE(9),
    [sym_version_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [aux_sym_statement_list_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
  },
  [2] = {
    [sym__binary_op] = STATE(35),
    [anon_sym_u] = ACTIONS(11),
    [anon_sym_0] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [aux_sym__binary_op_token1] = ACTIONS(17),
    [aux_sym__binary_op_token2] = ACTIONS(17),
    [aux_sym__binary_op_token3] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(15),
    [aux_sym__binary_op_token4] = ACTIONS(17),
    [aux_sym__binary_op_token5] = ACTIONS(17),
    [aux_sym__binary_op_token6] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(17),
    [aux_sym__binary_op_token7] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(17),
    [aux_sym__binary_op_token8] = ACTIONS(17),
    [aux_sym__binary_op_token9] = ACTIONS(17),
    [aux_sym__binary_op_token10] = ACTIONS(17),
    [aux_sym__binary_op_token11] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(17),
    [aux_sym__binary_op_token12] = ACTIONS(17),
    [aux_sym__binary_op_token13] = ACTIONS(17),
    [aux_sym__binary_op_token14] = ACTIONS(17),
    [aux_sym__binary_op_token15] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_CARET_CARET] = ACTIONS(17),
    [aux_sym__binary_op_token16] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(15),
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
    [anon_sym_BANG] = ACTIONS(15),
    [aux_sym__binary_op_token22] = ACTIONS(17),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym__binary_op_token23] = ACTIONS(17),
    [aux_sym__binary_op_token24] = ACTIONS(17),
    [aux_sym__binary_op_token25] = ACTIONS(17),
    [aux_sym__binary_op_token26] = ACTIONS(17),
    [aux_sym__binary_op_token27] = ACTIONS(15),
    [aux_sym__binary_op_token28] = ACTIONS(17),
    [aux_sym__binary_op_token29] = ACTIONS(17),
    [aux_sym__binary_op_token30] = ACTIONS(17),
    [aux_sym__binary_op_token31] = ACTIONS(17),
  },
  [3] = {
    [anon_sym_u] = ACTIONS(19),
    [anon_sym_0] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [aux_sym__binary_op_token1] = ACTIONS(19),
    [aux_sym__binary_op_token2] = ACTIONS(19),
    [aux_sym__binary_op_token3] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [aux_sym__binary_op_token4] = ACTIONS(19),
    [aux_sym__binary_op_token5] = ACTIONS(19),
    [aux_sym__binary_op_token6] = ACTIONS(19),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(19),
    [aux_sym__binary_op_token7] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(19),
    [aux_sym__binary_op_token8] = ACTIONS(19),
    [aux_sym__binary_op_token9] = ACTIONS(19),
    [aux_sym__binary_op_token10] = ACTIONS(19),
    [aux_sym__binary_op_token11] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(19),
    [aux_sym__binary_op_token12] = ACTIONS(19),
    [aux_sym__binary_op_token13] = ACTIONS(19),
    [aux_sym__binary_op_token14] = ACTIONS(19),
    [aux_sym__binary_op_token15] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_CARET_CARET] = ACTIONS(19),
    [aux_sym__binary_op_token16] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [aux_sym__binary_op_token17] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(19),
    [aux_sym__binary_op_token18] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [aux_sym__binary_op_token19] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(19),
    [aux_sym__binary_op_token20] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(19),
    [aux_sym__binary_op_token21] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [aux_sym__binary_op_token22] = ACTIONS(19),
    [anon_sym_BANG_BANG] = ACTIONS(19),
    [anon_sym_TILDE] = ACTIONS(19),
    [aux_sym__binary_op_token23] = ACTIONS(19),
    [aux_sym__binary_op_token24] = ACTIONS(19),
    [aux_sym__binary_op_token25] = ACTIONS(19),
    [aux_sym__binary_op_token26] = ACTIONS(19),
    [aux_sym__binary_op_token27] = ACTIONS(21),
    [aux_sym__binary_op_token28] = ACTIONS(19),
    [aux_sym__binary_op_token29] = ACTIONS(19),
    [aux_sym__binary_op_token30] = ACTIONS(19),
    [aux_sym__binary_op_token31] = ACTIONS(19),
  },
  [4] = {
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
  [5] = {
    [anon_sym_LT] = ACTIONS(29),
    [aux_sym__binary_op_token1] = ACTIONS(31),
    [aux_sym__binary_op_token2] = ACTIONS(31),
    [aux_sym__binary_op_token3] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(29),
    [aux_sym__binary_op_token4] = ACTIONS(31),
    [aux_sym__binary_op_token5] = ACTIONS(31),
    [aux_sym__binary_op_token6] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(31),
    [aux_sym__binary_op_token7] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(31),
    [aux_sym__binary_op_token8] = ACTIONS(31),
    [aux_sym__binary_op_token9] = ACTIONS(31),
    [aux_sym__binary_op_token10] = ACTIONS(31),
    [aux_sym__binary_op_token11] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(31),
    [aux_sym__binary_op_token12] = ACTIONS(31),
    [aux_sym__binary_op_token13] = ACTIONS(31),
    [aux_sym__binary_op_token14] = ACTIONS(31),
    [aux_sym__binary_op_token15] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_CARET_CARET] = ACTIONS(31),
    [aux_sym__binary_op_token16] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(31),
    [aux_sym__binary_op_token17] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(31),
    [aux_sym__binary_op_token18] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [aux_sym__binary_op_token19] = ACTIONS(31),
    [anon_sym_LT_LT] = ACTIONS(31),
    [aux_sym__binary_op_token20] = ACTIONS(31),
    [anon_sym_GT_GT] = ACTIONS(31),
    [aux_sym__binary_op_token21] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__binary_op_token22] = ACTIONS(31),
    [anon_sym_BANG_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [aux_sym__binary_op_token23] = ACTIONS(31),
    [aux_sym__binary_op_token24] = ACTIONS(31),
    [aux_sym__binary_op_token25] = ACTIONS(31),
    [aux_sym__binary_op_token26] = ACTIONS(31),
    [aux_sym__binary_op_token27] = ACTIONS(29),
    [aux_sym__binary_op_token28] = ACTIONS(31),
    [aux_sym__binary_op_token29] = ACTIONS(31),
    [aux_sym__binary_op_token30] = ACTIONS(31),
    [aux_sym__binary_op_token31] = ACTIONS(31),
  },
  [6] = {
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_if_statement_token2,
    ACTIONS(35), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(37), 1,
      aux_sym_else_statement_token1,
    STATE(31), 1,
      sym_statement_list,
    STATE(33), 1,
      aux_sym_if_statement_repeat1,
    STATE(52), 1,
      sym_elif_statement,
    STATE(59), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 6,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [43] = 7,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    STATE(51), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(39), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 6,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [73] = 7,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(45), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 6,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [103] = 7,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      aux_sym_version_statement_token1,
    ACTIONS(58), 1,
      aux_sym_if_statement_token1,
    ACTIONS(49), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(61), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 6,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [133] = 7,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(63), 1,
      aux_sym_if_statement_token2,
    STATE(53), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 6,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [161] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [175] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [189] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [203] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [217] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [231] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [245] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(91), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [259] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(95), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [273] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(99), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [287] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 7,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [301] = 4,
    ACTIONS(107), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(105), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(109), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [318] = 4,
    ACTIONS(114), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(112), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(116), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [335] = 4,
    ACTIONS(120), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(118), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(116), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [352] = 4,
    STATE(23), 1,
      sym_binary_comparison,
    STATE(36), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(122), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [368] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(124), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [380] = 4,
    STATE(23), 1,
      sym_binary_comparison,
    STATE(43), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(122), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [396] = 2,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(21), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [408] = 2,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(105), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [420] = 6,
    ACTIONS(128), 1,
      aux_sym_if_statement_token2,
    ACTIONS(130), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(132), 1,
      aux_sym_else_statement_token1,
    STATE(34), 1,
      aux_sym_if_statement_repeat1,
    STATE(52), 1,
      sym_elif_statement,
    STATE(54), 1,
      sym_else_statement,
  [439] = 6,
    ACTIONS(130), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(132), 1,
      aux_sym_else_statement_token1,
    ACTIONS(134), 1,
      aux_sym_if_statement_token2,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    STATE(52), 1,
      sym_elif_statement,
    STATE(57), 1,
      sym_else_statement,
  [458] = 3,
    STATE(29), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(122), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [471] = 6,
    ACTIONS(130), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(132), 1,
      aux_sym_else_statement_token1,
    ACTIONS(136), 1,
      aux_sym_if_statement_token2,
    STATE(34), 1,
      aux_sym_if_statement_repeat1,
    STATE(52), 1,
      sym_elif_statement,
    STATE(56), 1,
      sym_else_statement,
  [490] = 4,
    ACTIONS(140), 1,
      aux_sym_elif_statement_token1,
    STATE(34), 1,
      aux_sym_if_statement_repeat1,
    STATE(52), 1,
      sym_elif_statement,
    ACTIONS(138), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [504] = 2,
    STATE(26), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(143), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [514] = 3,
    ACTIONS(145), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [525] = 3,
    ACTIONS(147), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [536] = 3,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [547] = 3,
    ACTIONS(151), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [558] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [569] = 3,
    ACTIONS(155), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [580] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [591] = 3,
    ACTIONS(159), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [602] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [613] = 2,
    STATE(44), 1,
      sym_variable,
    ACTIONS(143), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [622] = 3,
    ACTIONS(163), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [633] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [644] = 3,
    ACTIONS(167), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [655] = 1,
    ACTIONS(169), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [661] = 1,
    ACTIONS(171), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [667] = 1,
    ACTIONS(173), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [673] = 1,
    ACTIONS(175), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [679] = 1,
    ACTIONS(177), 1,
      aux_sym_if_statement_token2,
  [683] = 1,
    ACTIONS(179), 1,
      aux_sym_if_statement_token2,
  [687] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [691] = 1,
    ACTIONS(183), 1,
      aux_sym_if_statement_token2,
  [695] = 1,
    ACTIONS(185), 1,
      aux_sym_if_statement_token2,
  [699] = 1,
    ACTIONS(187), 1,
      anon_sym_LF,
  [703] = 1,
    ACTIONS(189), 1,
      aux_sym_if_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 43,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 203,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 245,
  [SMALL_STATE(19)] = 259,
  [SMALL_STATE(20)] = 273,
  [SMALL_STATE(21)] = 287,
  [SMALL_STATE(22)] = 301,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 335,
  [SMALL_STATE(25)] = 352,
  [SMALL_STATE(26)] = 368,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 396,
  [SMALL_STATE(29)] = 408,
  [SMALL_STATE(30)] = 420,
  [SMALL_STATE(31)] = 439,
  [SMALL_STATE(32)] = 458,
  [SMALL_STATE(33)] = 471,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 504,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 525,
  [SMALL_STATE(38)] = 536,
  [SMALL_STATE(39)] = 547,
  [SMALL_STATE(40)] = 558,
  [SMALL_STATE(41)] = 569,
  [SMALL_STATE(42)] = 580,
  [SMALL_STATE(43)] = 591,
  [SMALL_STATE(44)] = 602,
  [SMALL_STATE(45)] = 613,
  [SMALL_STATE(46)] = 622,
  [SMALL_STATE(47)] = 633,
  [SMALL_STATE(48)] = 644,
  [SMALL_STATE(49)] = 655,
  [SMALL_STATE(50)] = 661,
  [SMALL_STATE(51)] = 667,
  [SMALL_STATE(52)] = 673,
  [SMALL_STATE(53)] = 679,
  [SMALL_STATE(54)] = 683,
  [SMALL_STATE(55)] = 687,
  [SMALL_STATE(56)] = 691,
  [SMALL_STATE(57)] = 695,
  [SMALL_STATE(58)] = 699,
  [SMALL_STATE(59)] = 703,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(58),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(45),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(32),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 4),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(27),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
