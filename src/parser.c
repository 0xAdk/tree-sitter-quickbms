#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 13

enum {
  sym_variable = 1,
  sym_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_LF = 4,
  aux_sym_if_statement_token1 = 5,
  aux_sym_if_statement_token2 = 6,
  aux_sym_elif_statement_token1 = 7,
  aux_sym_else_statement_token1 = 8,
  anon_sym_LT = 9,
  aux_sym__binary_op_token1 = 10,
  aux_sym__binary_op_token2 = 11,
  aux_sym__binary_op_token3 = 12,
  anon_sym_GT = 13,
  aux_sym__binary_op_token4 = 14,
  aux_sym__binary_op_token5 = 15,
  aux_sym__binary_op_token6 = 16,
  anon_sym_LT_GT = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_BANG_EQ_EQ = 19,
  aux_sym__binary_op_token7 = 20,
  anon_sym_EQ = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_EQ_EQ_EQ = 23,
  aux_sym__binary_op_token8 = 24,
  aux_sym__binary_op_token9 = 25,
  aux_sym__binary_op_token10 = 26,
  aux_sym__binary_op_token11 = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_AMP = 30,
  anon_sym_AMP_AMP = 31,
  aux_sym__binary_op_token12 = 32,
  aux_sym__binary_op_token13 = 33,
  aux_sym__binary_op_token14 = 34,
  aux_sym__binary_op_token15 = 35,
  anon_sym_CARET = 36,
  anon_sym_CARET_CARET = 37,
  aux_sym__binary_op_token16 = 38,
  anon_sym_PIPE = 39,
  anon_sym_PIPE_PIPE = 40,
  aux_sym__binary_op_token17 = 41,
  anon_sym_PERCENT = 42,
  aux_sym__binary_op_token18 = 43,
  anon_sym_SLASH = 44,
  aux_sym__binary_op_token19 = 45,
  anon_sym_LT_LT = 46,
  aux_sym__binary_op_token20 = 47,
  anon_sym_GT_GT = 48,
  aux_sym__binary_op_token21 = 49,
  anon_sym_BANG = 50,
  aux_sym__binary_op_token22 = 51,
  anon_sym_BANG_BANG = 52,
  anon_sym_TILDE = 53,
  aux_sym__binary_op_token23 = 54,
  aux_sym__binary_op_token24 = 55,
  aux_sym__binary_op_token25 = 56,
  aux_sym__binary_op_token26 = 57,
  aux_sym__binary_op_token27 = 58,
  aux_sym__binary_op_token28 = 59,
  aux_sym__binary_op_token29 = 60,
  aux_sym__binary_op_token30 = 61,
  aux_sym__binary_op_token31 = 62,
  anon_sym_and = 63,
  anon_sym_or = 64,
  sym_statement_list = 65,
  sym__statement = 66,
  sym__statment_end = 67,
  sym__empty_statment = 68,
  sym_if_statement = 69,
  sym_elif_statement = 70,
  sym_else_statement = 71,
  sym__comparison_value = 72,
  sym_binary_comparison = 73,
  sym__binary_op = 74,
  sym_binary_expression = 75,
  aux_sym_statement_list_repeat1 = 76,
  aux_sym_if_statement_repeat1 = 77,
  aux_sym_binary_expression_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [aux_sym_if_statement_token1] = "if",
  [aux_sym_if_statement_token2] = "endif",
  [aux_sym_elif_statement_token1] = "elif",
  [aux_sym_else_statement_token1] = "else",
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
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_if_statement_token2] = aux_sym_if_statement_token2,
  [aux_sym_elif_statement_token1] = aux_sym_elif_statement_token1,
  [aux_sym_else_statement_token1] = aux_sym_else_statement_token1,
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
  [sym_variable] = {
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 7,
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
  [28] = 25,
  [29] = 27,
  [30] = 26,
  [31] = 15,
  [32] = 14,
  [33] = 20,
  [34] = 21,
  [35] = 24,
  [36] = 36,
  [37] = 18,
  [38] = 23,
  [39] = 19,
  [40] = 22,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 54,
  [56] = 51,
  [57] = 50,
  [58] = 58,
  [59] = 46,
  [60] = 47,
  [61] = 61,
  [62] = 62,
  [63] = 43,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 68,
  [74] = 74,
  [75] = 70,
  [76] = 76,
  [77] = 72,
  [78] = 69,
  [79] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(130);
      if (lookahead == '!') ADVANCE(182);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ';') ADVANCE(134);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == '^') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '~') ADVANCE(185);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(182);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '^') ADVANCE(168);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '~') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 7:
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 12:
      if (lookahead == '|') ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 48:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 49:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 50:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(51);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 51:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 63:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 74:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 82:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 93:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 94:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 97:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 98:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 124:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 125:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 126:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(184);
      if (lookahead == '=') ADVANCE(150);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 129},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 129},
  [4] = {.lex_state = 129},
  [5] = {.lex_state = 129},
  [6] = {.lex_state = 129},
  [7] = {.lex_state = 129},
  [8] = {.lex_state = 129},
  [9] = {.lex_state = 129},
  [10] = {.lex_state = 129},
  [11] = {.lex_state = 129},
  [12] = {.lex_state = 129},
  [13] = {.lex_state = 129},
  [14] = {.lex_state = 129},
  [15] = {.lex_state = 129},
  [16] = {.lex_state = 129},
  [17] = {.lex_state = 129},
  [18] = {.lex_state = 129},
  [19] = {.lex_state = 129},
  [20] = {.lex_state = 129},
  [21] = {.lex_state = 129},
  [22] = {.lex_state = 129},
  [23] = {.lex_state = 129},
  [24] = {.lex_state = 129},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 129},
  [32] = {.lex_state = 129},
  [33] = {.lex_state = 129},
  [34] = {.lex_state = 129},
  [35] = {.lex_state = 129},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 129},
  [38] = {.lex_state = 129},
  [39] = {.lex_state = 129},
  [40] = {.lex_state = 129},
  [41] = {.lex_state = 129},
  [42] = {.lex_state = 129},
  [43] = {.lex_state = 129},
  [44] = {.lex_state = 128},
  [45] = {.lex_state = 129},
  [46] = {.lex_state = 129},
  [47] = {.lex_state = 129},
  [48] = {.lex_state = 128},
  [49] = {.lex_state = 129},
  [50] = {.lex_state = 129},
  [51] = {.lex_state = 129},
  [52] = {.lex_state = 129},
  [53] = {.lex_state = 129},
  [54] = {.lex_state = 129},
  [55] = {.lex_state = 129},
  [56] = {.lex_state = 129},
  [57] = {.lex_state = 129},
  [58] = {.lex_state = 129},
  [59] = {.lex_state = 129},
  [60] = {.lex_state = 129},
  [61] = {.lex_state = 128},
  [62] = {.lex_state = 129},
  [63] = {.lex_state = 129},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 128},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 128},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 129},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 129},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_elif_statement_token1] = ACTIONS(1),
    [aux_sym_else_statement_token1] = ACTIONS(1),
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
    [sym_statement_list] = STATE(74),
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
    [sym__binary_op] = STATE(67),
    [anon_sym_LT] = ACTIONS(9),
    [aux_sym__binary_op_token1] = ACTIONS(11),
    [aux_sym__binary_op_token2] = ACTIONS(11),
    [aux_sym__binary_op_token3] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(9),
    [aux_sym__binary_op_token4] = ACTIONS(11),
    [aux_sym__binary_op_token5] = ACTIONS(11),
    [aux_sym__binary_op_token6] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(9),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(11),
    [aux_sym__binary_op_token7] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(11),
    [aux_sym__binary_op_token8] = ACTIONS(11),
    [aux_sym__binary_op_token9] = ACTIONS(11),
    [aux_sym__binary_op_token10] = ACTIONS(11),
    [aux_sym__binary_op_token11] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [aux_sym__binary_op_token12] = ACTIONS(11),
    [aux_sym__binary_op_token13] = ACTIONS(11),
    [aux_sym__binary_op_token14] = ACTIONS(11),
    [aux_sym__binary_op_token15] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_CARET_CARET] = ACTIONS(11),
    [aux_sym__binary_op_token16] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(9),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [aux_sym__binary_op_token17] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [aux_sym__binary_op_token18] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [aux_sym__binary_op_token19] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(11),
    [aux_sym__binary_op_token20] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [aux_sym__binary_op_token21] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(9),
    [aux_sym__binary_op_token22] = ACTIONS(11),
    [anon_sym_BANG_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [aux_sym__binary_op_token23] = ACTIONS(11),
    [aux_sym__binary_op_token24] = ACTIONS(11),
    [aux_sym__binary_op_token25] = ACTIONS(11),
    [aux_sym__binary_op_token26] = ACTIONS(11),
    [aux_sym__binary_op_token27] = ACTIONS(9),
    [aux_sym__binary_op_token28] = ACTIONS(11),
    [aux_sym__binary_op_token29] = ACTIONS(11),
    [aux_sym__binary_op_token30] = ACTIONS(11),
    [aux_sym__binary_op_token31] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token2,
    ACTIONS(21), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(23), 1,
      aux_sym_else_statement_token1,
    STATE(26), 1,
      aux_sym_if_statement_repeat1,
    STATE(27), 1,
      sym_statement_list,
    STATE(64), 1,
      sym_elif_statement,
    STATE(68), 1,
      sym_else_statement,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(6), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [39] = 11,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(23), 1,
      aux_sym_else_statement_token1,
    ACTIONS(25), 1,
      aux_sym_if_statement_token2,
    STATE(29), 1,
      sym_statement_list,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    STATE(73), 1,
      sym_else_statement,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(6), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [78] = 6,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    STATE(66), 1,
      sym_statement_list,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(27), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(6), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [104] = 5,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(31), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(7), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [127] = 5,
    ACTIONS(36), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(42), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(7), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [150] = 6,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      aux_sym_if_statement_token1,
    ACTIONS(44), 1,
      aux_sym_if_statement_token2,
    STATE(76), 1,
      sym_statement_list,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(6), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [174] = 5,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [195] = 5,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      aux_sym_if_statement_token1,
    ACTIONS(52), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(10), 5,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_if_statement,
      aux_sym_statement_list_repeat1,
  [216] = 4,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(61), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(65), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [233] = 4,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(67), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(71), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [250] = 4,
    ACTIONS(76), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(74), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(65), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [267] = 2,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(78), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [279] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(82), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [291] = 2,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(86), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [303] = 2,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(67), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [315] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(90), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [327] = 2,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(94), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [339] = 2,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(98), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [351] = 2,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(102), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [363] = 2,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(106), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [375] = 2,
    ACTIONS(112), 1,
      anon_sym_LF,
    ACTIONS(110), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [387] = 2,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(114), 6,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [399] = 6,
    ACTIONS(118), 1,
      aux_sym_if_statement_token2,
    ACTIONS(120), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(122), 1,
      aux_sym_else_statement_token1,
    STATE(36), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    STATE(78), 1,
      sym_else_statement,
  [418] = 6,
    ACTIONS(120), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(122), 1,
      aux_sym_else_statement_token1,
    ACTIONS(124), 1,
      aux_sym_if_statement_token2,
    STATE(36), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    STATE(72), 1,
      sym_else_statement,
  [437] = 6,
    ACTIONS(120), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(122), 1,
      aux_sym_else_statement_token1,
    ACTIONS(126), 1,
      aux_sym_if_statement_token2,
    STATE(28), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    STATE(70), 1,
      sym_else_statement,
  [456] = 6,
    ACTIONS(120), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(122), 1,
      aux_sym_else_statement_token1,
    ACTIONS(128), 1,
      aux_sym_if_statement_token2,
    STATE(36), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    STATE(69), 1,
      sym_else_statement,
  [475] = 6,
    ACTIONS(120), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(122), 1,
      aux_sym_else_statement_token1,
    ACTIONS(130), 1,
      aux_sym_if_statement_token2,
    STATE(25), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    STATE(75), 1,
      sym_else_statement,
  [494] = 6,
    ACTIONS(120), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(122), 1,
      aux_sym_else_statement_token1,
    ACTIONS(132), 1,
      aux_sym_if_statement_token2,
    STATE(36), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    STATE(77), 1,
      sym_else_statement,
  [513] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(82), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [523] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(78), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [533] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(98), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [543] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [553] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(114), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [563] = 4,
    ACTIONS(136), 1,
      aux_sym_elif_statement_token1,
    STATE(36), 1,
      aux_sym_if_statement_repeat1,
    STATE(64), 1,
      sym_elif_statement,
    ACTIONS(134), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [577] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(90), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [587] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(110), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [597] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(94), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [607] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(106), 3,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_if_statement_token1,
  [617] = 3,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [628] = 3,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [639] = 3,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [650] = 4,
    ACTIONS(145), 1,
      sym_variable,
    STATE(2), 1,
      sym__comparison_value,
    STATE(11), 1,
      sym_binary_comparison,
    STATE(45), 1,
      sym_binary_expression,
  [663] = 3,
    ACTIONS(147), 1,
      anon_sym_LF,
    STATE(4), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [674] = 3,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [685] = 3,
    ACTIONS(151), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [696] = 4,
    ACTIONS(145), 1,
      sym_variable,
    STATE(2), 1,
      sym__comparison_value,
    STATE(11), 1,
      sym_binary_comparison,
    STATE(49), 1,
      sym_binary_expression,
  [709] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(3), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [720] = 3,
    ACTIONS(155), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [731] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [742] = 3,
    ACTIONS(159), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [753] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [764] = 3,
    ACTIONS(163), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [775] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [786] = 3,
    ACTIONS(167), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [797] = 3,
    ACTIONS(169), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [808] = 3,
    ACTIONS(171), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [819] = 3,
    ACTIONS(173), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [830] = 3,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [841] = 4,
    ACTIONS(145), 1,
      sym_variable,
    STATE(2), 1,
      sym__comparison_value,
    STATE(11), 1,
      sym_binary_comparison,
    STATE(58), 1,
      sym_binary_expression,
  [854] = 3,
    ACTIONS(177), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [865] = 3,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statment_end,
    ACTIONS(13), 2,
      sym_comment,
      anon_sym_SEMI,
  [876] = 1,
    ACTIONS(181), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [882] = 3,
    ACTIONS(145), 1,
      sym_variable,
    STATE(2), 1,
      sym__comparison_value,
    STATE(17), 1,
      sym_binary_comparison,
  [892] = 1,
    ACTIONS(183), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [898] = 2,
    ACTIONS(185), 1,
      sym_variable,
    STATE(16), 1,
      sym__comparison_value,
  [905] = 1,
    ACTIONS(187), 1,
      aux_sym_if_statement_token2,
  [909] = 1,
    ACTIONS(189), 1,
      aux_sym_if_statement_token2,
  [913] = 1,
    ACTIONS(191), 1,
      aux_sym_if_statement_token2,
  [917] = 1,
    ACTIONS(193), 1,
      anon_sym_LF,
  [921] = 1,
    ACTIONS(195), 1,
      aux_sym_if_statement_token2,
  [925] = 1,
    ACTIONS(197), 1,
      aux_sym_if_statement_token2,
  [929] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [933] = 1,
    ACTIONS(201), 1,
      aux_sym_if_statement_token2,
  [937] = 1,
    ACTIONS(203), 1,
      aux_sym_if_statement_token2,
  [941] = 1,
    ACTIONS(205), 1,
      aux_sym_if_statement_token2,
  [945] = 1,
    ACTIONS(207), 1,
      aux_sym_if_statement_token2,
  [949] = 1,
    ACTIONS(209), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 303,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 339,
  [SMALL_STATE(21)] = 351,
  [SMALL_STATE(22)] = 363,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 399,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 437,
  [SMALL_STATE(28)] = 456,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 494,
  [SMALL_STATE(31)] = 513,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 533,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 553,
  [SMALL_STATE(36)] = 563,
  [SMALL_STATE(37)] = 577,
  [SMALL_STATE(38)] = 587,
  [SMALL_STATE(39)] = 597,
  [SMALL_STATE(40)] = 607,
  [SMALL_STATE(41)] = 617,
  [SMALL_STATE(42)] = 628,
  [SMALL_STATE(43)] = 639,
  [SMALL_STATE(44)] = 650,
  [SMALL_STATE(45)] = 663,
  [SMALL_STATE(46)] = 674,
  [SMALL_STATE(47)] = 685,
  [SMALL_STATE(48)] = 696,
  [SMALL_STATE(49)] = 709,
  [SMALL_STATE(50)] = 720,
  [SMALL_STATE(51)] = 731,
  [SMALL_STATE(52)] = 742,
  [SMALL_STATE(53)] = 753,
  [SMALL_STATE(54)] = 764,
  [SMALL_STATE(55)] = 775,
  [SMALL_STATE(56)] = 786,
  [SMALL_STATE(57)] = 797,
  [SMALL_STATE(58)] = 808,
  [SMALL_STATE(59)] = 819,
  [SMALL_STATE(60)] = 830,
  [SMALL_STATE(61)] = 841,
  [SMALL_STATE(62)] = 854,
  [SMALL_STATE(63)] = 865,
  [SMALL_STATE(64)] = 876,
  [SMALL_STATE(65)] = 882,
  [SMALL_STATE(66)] = 892,
  [SMALL_STATE(67)] = 898,
  [SMALL_STATE(68)] = 905,
  [SMALL_STATE(69)] = 909,
  [SMALL_STATE(70)] = 913,
  [SMALL_STATE(71)] = 917,
  [SMALL_STATE(72)] = 921,
  [SMALL_STATE(73)] = 925,
  [SMALL_STATE(74)] = 929,
  [SMALL_STATE(75)] = 933,
  [SMALL_STATE(76)] = 937,
  [SMALL_STATE(77)] = 941,
  [SMALL_STATE(78)] = 945,
  [SMALL_STATE(79)] = 949,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(71),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(44),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(79),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(48),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(65),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 7),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 4),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(61),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
