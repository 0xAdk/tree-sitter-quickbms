#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

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
  aux_sym_if_statement_token1 = 10,
  aux_sym_if_statement_token2 = 11,
  aux_sym_elif_statement_token1 = 12,
  aux_sym_else_statement_token1 = 13,
  anon_sym_u = 14,
  anon_sym_0 = 15,
  anon_sym_LT = 16,
  aux_sym__binary_op_token1 = 17,
  aux_sym__binary_op_token2 = 18,
  aux_sym__binary_op_token3 = 19,
  anon_sym_GT = 20,
  aux_sym__binary_op_token4 = 21,
  aux_sym__binary_op_token5 = 22,
  aux_sym__binary_op_token6 = 23,
  anon_sym_LT_GT = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_BANG_EQ_EQ = 26,
  aux_sym__binary_op_token7 = 27,
  anon_sym_EQ = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_EQ_EQ_EQ = 30,
  aux_sym__binary_op_token8 = 31,
  aux_sym__binary_op_token9 = 32,
  aux_sym__binary_op_token10 = 33,
  aux_sym__binary_op_token11 = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_AMP = 37,
  anon_sym_AMP_AMP = 38,
  aux_sym__binary_op_token12 = 39,
  aux_sym__binary_op_token13 = 40,
  aux_sym__binary_op_token14 = 41,
  aux_sym__binary_op_token15 = 42,
  anon_sym_CARET = 43,
  anon_sym_CARET_CARET = 44,
  aux_sym__binary_op_token16 = 45,
  anon_sym_PIPE = 46,
  anon_sym_PIPE_PIPE = 47,
  aux_sym__binary_op_token17 = 48,
  anon_sym_PERCENT = 49,
  aux_sym__binary_op_token18 = 50,
  anon_sym_SLASH = 51,
  aux_sym__binary_op_token19 = 52,
  anon_sym_LT_LT = 53,
  aux_sym__binary_op_token20 = 54,
  anon_sym_GT_GT = 55,
  aux_sym__binary_op_token21 = 56,
  anon_sym_BANG = 57,
  aux_sym__binary_op_token22 = 58,
  anon_sym_BANG_BANG = 59,
  anon_sym_TILDE = 60,
  aux_sym__binary_op_token23 = 61,
  aux_sym__binary_op_token24 = 62,
  aux_sym__binary_op_token25 = 63,
  aux_sym__binary_op_token26 = 64,
  aux_sym__binary_op_token27 = 65,
  aux_sym__binary_op_token28 = 66,
  aux_sym__binary_op_token29 = 67,
  aux_sym__binary_op_token30 = 68,
  aux_sym__binary_op_token31 = 69,
  anon_sym_and = 70,
  anon_sym_or = 71,
  aux_sym_print_statement_token1 = 72,
  sym_statement_list = 73,
  sym_variable = 74,
  sym__statement = 75,
  sym__statment_end = 76,
  sym__empty_statment = 77,
  sym_version_statement = 78,
  sym_get_statement = 79,
  sym_if_statement = 80,
  sym_elif_statement = 81,
  sym_else_statement = 82,
  sym__comparison_value = 83,
  sym_binary_comparison = 84,
  sym__binary_op = 85,
  sym_binary_expression = 86,
  sym_print_statement = 87,
  aux_sym_statement_list_repeat1 = 88,
  aux_sym_if_statement_repeat1 = 89,
  aux_sym_binary_expression_repeat1 = 90,
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_message, 1},
  [1] =
    {field_name, 1},
    {field_type, 2},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_alternative, 0},
  [6] =
    {field_file_number, 3},
    {field_name, 1},
    {field_type, 2},
  [9] =
    {field_condition, 1},
  [10] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [12] =
    {field_consequence, 2},
  [13] =
    {field_condition, 1},
    {field_consequence, 3},
  [15] =
    {field_alternative, 3},
    {field_condition, 1},
  [17] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [19] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [22] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [25] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [28] =
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
  [32] = 3,
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
  [68] = 3,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(152);
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '&') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(180);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == '^') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == '~') ADVANCE(224);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(65);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '&') ADVANCE(201);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '<') ADVANCE(180);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == '^') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == '~') ADVANCE(224);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(65);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(202);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(167);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 16:
      if (lookahead == '|') ADVANCE(211);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 57:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 58:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 59:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 63:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 105:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 107:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 108:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 109:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 111:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 112:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 145:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 146:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 147:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 148:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 149:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_variable_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_variable_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_get_statement_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_elif_statement_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__binary_op_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__binary_op_token2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__binary_op_token3);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '>') ADVANCE(219);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__binary_op_token4);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__binary_op_token5);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__binary_op_token6);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__binary_op_token7);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__binary_op_token8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__binary_op_token9);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__binary_op_token10);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__binary_op_token11);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__binary_op_token12);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__binary_op_token13);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__binary_op_token14);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__binary_op_token15);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__binary_op_token16);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__binary_op_token17);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__binary_op_token18);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__binary_op_token19);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__binary_op_token20);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__binary_op_token21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(223);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__binary_op_token22);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__binary_op_token23);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__binary_op_token24);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__binary_op_token25);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__binary_op_token26);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__binary_op_token27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__binary_op_token28);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__binary_op_token29);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__binary_op_token30);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__binary_op_token31);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 151},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 151},
  [8] = {.lex_state = 151},
  [9] = {.lex_state = 151},
  [10] = {.lex_state = 151},
  [11] = {.lex_state = 151},
  [12] = {.lex_state = 151},
  [13] = {.lex_state = 151},
  [14] = {.lex_state = 151},
  [15] = {.lex_state = 151},
  [16] = {.lex_state = 151},
  [17] = {.lex_state = 151},
  [18] = {.lex_state = 151},
  [19] = {.lex_state = 151},
  [20] = {.lex_state = 151},
  [21] = {.lex_state = 151},
  [22] = {.lex_state = 151},
  [23] = {.lex_state = 151},
  [24] = {.lex_state = 151},
  [25] = {.lex_state = 151},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 151},
  [28] = {.lex_state = 151},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 151},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 151},
  [33] = {.lex_state = 151},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 151},
  [41] = {.lex_state = 151},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 151},
  [44] = {.lex_state = 151},
  [45] = {.lex_state = 151},
  [46] = {.lex_state = 151},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 151},
  [49] = {.lex_state = 151},
  [50] = {.lex_state = 151},
  [51] = {.lex_state = 151},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 151},
  [54] = {.lex_state = 151},
  [55] = {.lex_state = 151},
  [56] = {.lex_state = 151},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 151},
  [63] = {.lex_state = 149},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 149},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_variable_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_version_statement_token1] = ACTIONS(1),
    [aux_sym_get_statement_token1] = ACTIONS(1),
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
    [sym_statement_list] = STATE(66),
    [sym__statement] = STATE(9),
    [sym__statment_end] = STATE(9),
    [sym__empty_statment] = STATE(9),
    [sym_version_statement] = STATE(9),
    [sym_get_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_print_statement] = STATE(9),
    [aux_sym_statement_list_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_version_statement_token1] = ACTIONS(7),
    [aux_sym_get_statement_token1] = ACTIONS(9),
    [aux_sym_if_statement_token1] = ACTIONS(11),
    [aux_sym_print_statement_token1] = ACTIONS(13),
  },
  [2] = {
    [sym__binary_op] = STATE(38),
    [anon_sym_u] = ACTIONS(15),
    [anon_sym_0] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym__binary_op_token1] = ACTIONS(21),
    [aux_sym__binary_op_token2] = ACTIONS(21),
    [aux_sym__binary_op_token3] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(19),
    [aux_sym__binary_op_token4] = ACTIONS(21),
    [aux_sym__binary_op_token5] = ACTIONS(21),
    [aux_sym__binary_op_token6] = ACTIONS(21),
    [anon_sym_LT_GT] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(21),
    [aux_sym__binary_op_token7] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(21),
    [aux_sym__binary_op_token8] = ACTIONS(21),
    [aux_sym__binary_op_token9] = ACTIONS(21),
    [aux_sym__binary_op_token10] = ACTIONS(21),
    [aux_sym__binary_op_token11] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [aux_sym__binary_op_token12] = ACTIONS(21),
    [aux_sym__binary_op_token13] = ACTIONS(21),
    [aux_sym__binary_op_token14] = ACTIONS(21),
    [aux_sym__binary_op_token15] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_CARET_CARET] = ACTIONS(21),
    [aux_sym__binary_op_token16] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [aux_sym__binary_op_token17] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [aux_sym__binary_op_token18] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [aux_sym__binary_op_token19] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [aux_sym__binary_op_token20] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [aux_sym__binary_op_token21] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(19),
    [aux_sym__binary_op_token22] = ACTIONS(21),
    [anon_sym_BANG_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [aux_sym__binary_op_token23] = ACTIONS(21),
    [aux_sym__binary_op_token24] = ACTIONS(21),
    [aux_sym__binary_op_token25] = ACTIONS(21),
    [aux_sym__binary_op_token26] = ACTIONS(21),
    [aux_sym__binary_op_token27] = ACTIONS(19),
    [aux_sym__binary_op_token28] = ACTIONS(21),
    [aux_sym__binary_op_token29] = ACTIONS(21),
    [aux_sym__binary_op_token30] = ACTIONS(21),
    [aux_sym__binary_op_token31] = ACTIONS(21),
  },
  [3] = {
    [anon_sym_u] = ACTIONS(23),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [aux_sym__binary_op_token1] = ACTIONS(23),
    [aux_sym__binary_op_token2] = ACTIONS(23),
    [aux_sym__binary_op_token3] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [aux_sym__binary_op_token4] = ACTIONS(23),
    [aux_sym__binary_op_token5] = ACTIONS(23),
    [aux_sym__binary_op_token6] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(23),
    [aux_sym__binary_op_token7] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(23),
    [aux_sym__binary_op_token8] = ACTIONS(23),
    [aux_sym__binary_op_token9] = ACTIONS(23),
    [aux_sym__binary_op_token10] = ACTIONS(23),
    [aux_sym__binary_op_token11] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [aux_sym__binary_op_token12] = ACTIONS(23),
    [aux_sym__binary_op_token13] = ACTIONS(23),
    [aux_sym__binary_op_token14] = ACTIONS(23),
    [aux_sym__binary_op_token15] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_CARET_CARET] = ACTIONS(23),
    [aux_sym__binary_op_token16] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
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
    [anon_sym_BANG] = ACTIONS(25),
    [aux_sym__binary_op_token22] = ACTIONS(23),
    [anon_sym_BANG_BANG] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [aux_sym__binary_op_token23] = ACTIONS(23),
    [aux_sym__binary_op_token24] = ACTIONS(23),
    [aux_sym__binary_op_token25] = ACTIONS(23),
    [aux_sym__binary_op_token26] = ACTIONS(23),
    [aux_sym__binary_op_token27] = ACTIONS(25),
    [aux_sym__binary_op_token28] = ACTIONS(23),
    [aux_sym__binary_op_token29] = ACTIONS(23),
    [aux_sym__binary_op_token30] = ACTIONS(23),
    [aux_sym__binary_op_token31] = ACTIONS(23),
  },
  [4] = {
    [anon_sym_0] = ACTIONS(27),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(37), 1,
      aux_sym_if_statement_token2,
    ACTIONS(39), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(41), 1,
      aux_sym_else_statement_token1,
    STATE(34), 1,
      aux_sym_if_statement_repeat1,
    STATE(36), 1,
      sym_statement_list,
    STATE(60), 1,
      sym_elif_statement,
    STATE(65), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 8,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [51] = 9,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    STATE(57), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(43), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(9), 8,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [89] = 9,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(49), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 8,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [127] = 9,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      aux_sym_version_statement_token1,
    ACTIONS(62), 1,
      aux_sym_get_statement_token1,
    ACTIONS(65), 1,
      aux_sym_if_statement_token1,
    ACTIONS(70), 1,
      aux_sym_print_statement_token1,
    ACTIONS(53), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(68), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
    STATE(10), 8,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [165] = 9,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      aux_sym_version_statement_token1,
    ACTIONS(9), 1,
      aux_sym_get_statement_token1,
    ACTIONS(11), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(73), 1,
      aux_sym_if_statement_token2,
    STATE(64), 1,
      sym_statement_list,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    STATE(9), 8,
      sym__statement,
      sym__statment_end,
      sym__empty_statment,
      sym_version_statement,
      sym_get_statement,
      sym_if_statement,
      sym_print_statement,
      aux_sym_statement_list_repeat1,
  [201] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(77), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [217] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [233] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [249] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [265] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(93), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [281] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(97), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [297] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(101), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [313] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(105), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [329] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(109), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [345] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(113), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [361] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(117), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [377] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(121), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [393] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(125), 9,
      sym_comment,
      anon_sym_SEMI,
      aux_sym_version_statement_token1,
      aux_sym_get_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
      aux_sym_print_statement_token1,
  [409] = 4,
    ACTIONS(129), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(127), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(131), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [426] = 5,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym__statment_end,
    STATE(54), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(133), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [445] = 4,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(137), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(131), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [462] = 4,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym_binary_expression_repeat1,
    ACTIONS(141), 2,
      sym_comment,
      anon_sym_SEMI,
    ACTIONS(145), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [479] = 4,
    STATE(25), 1,
      sym_binary_comparison,
    STATE(44), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(148), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [495] = 2,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(141), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [507] = 4,
    STATE(25), 1,
      sym_binary_comparison,
    STATE(40), 1,
      sym_binary_expression,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(148), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [523] = 2,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [535] = 2,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(150), 6,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [547] = 6,
    ACTIONS(154), 1,
      aux_sym_if_statement_token2,
    ACTIONS(156), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(158), 1,
      aux_sym_else_statement_token1,
    STATE(39), 1,
      aux_sym_if_statement_repeat1,
    STATE(60), 1,
      sym_elif_statement,
    STATE(67), 1,
      sym_else_statement,
  [566] = 3,
    STATE(30), 1,
      sym_binary_comparison,
    STATE(2), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(148), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [579] = 6,
    ACTIONS(156), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(158), 1,
      aux_sym_else_statement_token1,
    ACTIONS(160), 1,
      aux_sym_if_statement_token2,
    STATE(37), 1,
      aux_sym_if_statement_repeat1,
    STATE(60), 1,
      sym_elif_statement,
    STATE(69), 1,
      sym_else_statement,
  [598] = 6,
    ACTIONS(156), 1,
      aux_sym_elif_statement_token1,
    ACTIONS(158), 1,
      aux_sym_else_statement_token1,
    ACTIONS(162), 1,
      aux_sym_if_statement_token2,
    STATE(39), 1,
      aux_sym_if_statement_repeat1,
    STATE(60), 1,
      sym_elif_statement,
    STATE(61), 1,
      sym_else_statement,
  [617] = 2,
    STATE(33), 2,
      sym_variable,
      sym__comparison_value,
    ACTIONS(133), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [627] = 4,
    ACTIONS(166), 1,
      aux_sym_elif_statement_token1,
    STATE(39), 1,
      aux_sym_if_statement_repeat1,
    STATE(60), 1,
      sym_elif_statement,
    ACTIONS(164), 2,
      aux_sym_if_statement_token2,
      aux_sym_else_statement_token1,
  [641] = 3,
    ACTIONS(169), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [652] = 3,
    ACTIONS(171), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [663] = 2,
    STATE(55), 1,
      sym_variable,
    ACTIONS(133), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [672] = 3,
    ACTIONS(173), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [683] = 3,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [694] = 3,
    ACTIONS(177), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [705] = 3,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [716] = 2,
    STATE(63), 1,
      sym_variable,
    ACTIONS(181), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [725] = 3,
    ACTIONS(183), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [736] = 3,
    ACTIONS(185), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [747] = 3,
    ACTIONS(187), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [758] = 3,
    ACTIONS(189), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [769] = 2,
    STATE(45), 1,
      sym_variable,
    ACTIONS(133), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [778] = 3,
    ACTIONS(191), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [789] = 3,
    ACTIONS(193), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [800] = 3,
    ACTIONS(195), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [811] = 3,
    ACTIONS(197), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__statment_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_SEMI,
  [822] = 1,
    ACTIONS(199), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [828] = 1,
    ACTIONS(201), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [834] = 1,
    ACTIONS(203), 3,
      aux_sym_variable_token1,
      aux_sym_variable_token2,
      aux_sym_variable_token3,
  [840] = 1,
    ACTIONS(205), 3,
      aux_sym_if_statement_token2,
      aux_sym_elif_statement_token1,
      aux_sym_else_statement_token1,
  [846] = 1,
    ACTIONS(207), 1,
      aux_sym_if_statement_token2,
  [850] = 1,
    ACTIONS(209), 1,
      anon_sym_LF,
  [854] = 1,
    ACTIONS(211), 1,
      sym_type,
  [858] = 1,
    ACTIONS(213), 1,
      aux_sym_if_statement_token2,
  [862] = 1,
    ACTIONS(215), 1,
      aux_sym_if_statement_token2,
  [866] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [870] = 1,
    ACTIONS(219), 1,
      aux_sym_if_statement_token2,
  [874] = 1,
    ACTIONS(23), 1,
      sym_type,
  [878] = 1,
    ACTIONS(221), 1,
      aux_sym_if_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 51,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 165,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 329,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 361,
  [SMALL_STATE(23)] = 377,
  [SMALL_STATE(24)] = 393,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 462,
  [SMALL_STATE(29)] = 479,
  [SMALL_STATE(30)] = 495,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 535,
  [SMALL_STATE(34)] = 547,
  [SMALL_STATE(35)] = 566,
  [SMALL_STATE(36)] = 579,
  [SMALL_STATE(37)] = 598,
  [SMALL_STATE(38)] = 617,
  [SMALL_STATE(39)] = 627,
  [SMALL_STATE(40)] = 641,
  [SMALL_STATE(41)] = 652,
  [SMALL_STATE(42)] = 663,
  [SMALL_STATE(43)] = 672,
  [SMALL_STATE(44)] = 683,
  [SMALL_STATE(45)] = 694,
  [SMALL_STATE(46)] = 705,
  [SMALL_STATE(47)] = 716,
  [SMALL_STATE(48)] = 725,
  [SMALL_STATE(49)] = 736,
  [SMALL_STATE(50)] = 747,
  [SMALL_STATE(51)] = 758,
  [SMALL_STATE(52)] = 769,
  [SMALL_STATE(53)] = 778,
  [SMALL_STATE(54)] = 789,
  [SMALL_STATE(55)] = 800,
  [SMALL_STATE(56)] = 811,
  [SMALL_STATE(57)] = 822,
  [SMALL_STATE(58)] = 828,
  [SMALL_STATE(59)] = 834,
  [SMALL_STATE(60)] = 840,
  [SMALL_STATE(61)] = 846,
  [SMALL_STATE(62)] = 850,
  [SMALL_STATE(63)] = 854,
  [SMALL_STATE(64)] = 858,
  [SMALL_STATE(65)] = 862,
  [SMALL_STATE(66)] = 866,
  [SMALL_STATE(67)] = 870,
  [SMALL_STATE(68)] = 874,
  [SMALL_STATE(69)] = 878,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_list, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(62),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(42),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(31),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(52),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 11),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 9),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statment_end, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statment_end, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 12),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 5, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 5, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 13),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_statement, 4, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_statement, 4, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_expression_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binary_expression_repeat1, 2), SHIFT_REPEAT(35),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_comparison, 3, .production_id = 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_comparison, 3, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7), SHIFT_REPEAT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 4, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
