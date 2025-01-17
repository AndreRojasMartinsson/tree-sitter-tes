#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_let = 2,
  anon_sym_SEMI = 3,
  anon_sym_out = 4,
  anon_sym_COMMA = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LT_GT = 8,
  anon_sym_AMP_AMP = 9,
  anon_sym_PIPE_PIPE = 10,
  anon_sym_BANG_EQ = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_LT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_STAR_STAR = 22,
  anon_sym_POUND = 23,
  aux_sym_line_comment_token1 = 24,
  aux_sym_line_comment_token2 = 25,
  aux_sym_line_comment_token3 = 26,
  sym_number_literal = 27,
  sym_string_literal = 28,
  sym_program = 29,
  sym__root_statement = 30,
  sym_let_binding = 31,
  sym_out_statement = 32,
  sym_parenthesized_expression = 33,
  sym__initializer = 34,
  sym__expression = 35,
  sym_binary_expression = 36,
  sym_primary_expression = 37,
  sym_line_comment = 38,
  sym__literal = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_out_statement_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_let] = "let",
  [anon_sym_SEMI] = ";",
  [anon_sym_out] = "out",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_POUND] = "#",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [aux_sym_line_comment_token3] = "line_comment_token3",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [sym_program] = "program",
  [sym__root_statement] = "_root_statement",
  [sym_let_binding] = "let_binding",
  [sym_out_statement] = "out_statement",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__initializer] = "_initializer",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_line_comment] = "line_comment",
  [sym__literal] = "_literal",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_out_statement_repeat1] = "out_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [aux_sym_line_comment_token3] = aux_sym_line_comment_token3,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_program] = sym_program,
  [sym__root_statement] = sym__root_statement,
  [sym_let_binding] = sym_let_binding,
  [sym_out_statement] = sym_out_statement,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__initializer] = sym__initializer,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_line_comment] = sym_line_comment,
  [sym__literal] = sym__literal,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_out_statement_repeat1] = aux_sym_out_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__root_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_out_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__initializer] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_out_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_format_str = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_format_str] = "format_str",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_format_str, 1},
  [1] =
    {field_value, 1},
  [2] =
    {field_name, 1},
    {field_value, 2, .inherited = true},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 4,
        '"', 11,
        '#', 37,
        '%', 33,
        '&', 3,
        '(', 17,
        ')', 18,
        '*', 31,
        '+', 29,
        ',', 16,
        '-', 30,
        '.', 9,
        '/', 32,
        ';', 15,
        '<', 25,
        '=', 5,
        '>', 28,
        '|', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '<') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '|') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 4,
        '"', 11,
        '#', 35,
        '%', 33,
        '&', 3,
        '(', 17,
        ')', 18,
        '*', 31,
        '+', 29,
        ',', 16,
        '-', 30,
        '.', 9,
        '/', 32,
        ';', 15,
        '<', 25,
        '=', 5,
        '>', 28,
        '|', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 4,
        '"', 11,
        '#', 35,
        '%', 33,
        '&', 3,
        '(', 17,
        ')', 18,
        '*', 31,
        '+', 29,
        ',', 16,
        '-', 30,
        '.', 9,
        '/', 32,
        ';', 15,
        '<', 24,
        '=', 5,
        '>', 28,
        '|', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'l') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 13},
  [45] = {(TSStateId)(-1)},
  [46] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_line_comment_token1] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(41),
    [sym__root_statement] = STATE(33),
    [sym_let_binding] = STATE(30),
    [sym_out_statement] = STATE(30),
    [sym_line_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(13), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [28] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    STATE(3), 1,
      sym_line_comment,
    ACTIONS(19), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(17), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [58] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(4), 1,
      sym_line_comment,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(23), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [86] = 14,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(43), 1,
      anon_sym_STAR,
    STATE(5), 1,
      sym_line_comment,
    STATE(35), 1,
      aux_sym_out_statement_repeat1,
    ACTIONS(35), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [134] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(47), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [162] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(51), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [190] = 11,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(43), 1,
      anon_sym_STAR,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(35), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [232] = 9,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_STAR,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
  [270] = 10,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_STAR,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(35), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [310] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_STAR,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [346] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_STAR,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [380] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(19), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(17), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [410] = 12,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(43), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(35), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [453] = 12,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(35), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [495] = 12,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_STAR_STAR,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(35), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [537] = 9,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__expression,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [568] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__expression,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [596] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__expression,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [624] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__expression,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [652] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__expression,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [680] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym__expression,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [708] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym__expression,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [736] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__expression,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [764] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__expression,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [792] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__expression,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [820] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__expression,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_parenthesized_expression,
      sym__literal,
    STATE(6), 2,
      sym_binary_expression,
      sym_primary_expression,
  [848] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_let,
    ACTIONS(74), 1,
      anon_sym_out,
    STATE(33), 1,
      sym__root_statement,
    STATE(28), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    STATE(30), 2,
      sym_let_binding,
      sym_out_statement,
  [872] = 8,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_out,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_program_repeat1,
    STATE(29), 1,
      sym_line_comment,
    STATE(33), 1,
      sym__root_statement,
    STATE(30), 2,
      sym_let_binding,
      sym_out_statement,
  [898] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_out,
  [910] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_out,
  [922] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_out,
  [934] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_out,
  [946] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_out,
  [958] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_line_comment,
    STATE(37), 1,
      aux_sym_out_statement_repeat1,
  [974] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_out,
  [986] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(37), 2,
      sym_line_comment,
      aux_sym_out_statement_repeat1,
  [1000] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      aux_sym_line_comment_token1,
    ACTIONS(98), 1,
      aux_sym_line_comment_token3,
    STATE(38), 1,
      sym_line_comment,
  [1013] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_LT_GT,
    STATE(39), 1,
      sym_line_comment,
    STATE(44), 1,
      sym__initializer,
  [1026] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(40), 1,
      sym_line_comment,
  [1036] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_line_comment,
  [1046] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      sym_string_literal,
    STATE(42), 1,
      sym_line_comment,
  [1056] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      aux_sym_line_comment_token2,
    STATE(43), 1,
      sym_line_comment,
  [1066] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_line_comment,
  [1076] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [1080] = 1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 310,
  [SMALL_STATE(12)] = 346,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 453,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 537,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 596,
  [SMALL_STATE(20)] = 624,
  [SMALL_STATE(21)] = 652,
  [SMALL_STATE(22)] = 680,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 736,
  [SMALL_STATE(25)] = 764,
  [SMALL_STATE(26)] = 792,
  [SMALL_STATE(27)] = 820,
  [SMALL_STATE(28)] = 848,
  [SMALL_STATE(29)] = 872,
  [SMALL_STATE(30)] = 898,
  [SMALL_STATE(31)] = 910,
  [SMALL_STATE(32)] = 922,
  [SMALL_STATE(33)] = 934,
  [SMALL_STATE(34)] = 946,
  [SMALL_STATE(35)] = 958,
  [SMALL_STATE(36)] = 974,
  [SMALL_STATE(37)] = 986,
  [SMALL_STATE(38)] = 1000,
  [SMALL_STATE(39)] = 1013,
  [SMALL_STATE(40)] = 1026,
  [SMALL_STATE(41)] = 1036,
  [SMALL_STATE(42)] = 1046,
  [SMALL_STATE(43)] = 1056,
  [SMALL_STATE(44)] = 1066,
  [SMALL_STATE(45)] = 1076,
  [SMALL_STATE(46)] = 1080,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_out_statement_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 2, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_statement, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_statement, 3, 0, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_statement, 4, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 4, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_statement, 5, 0, 1),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_out_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tes(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
