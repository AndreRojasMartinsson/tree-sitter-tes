#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym_directive = 1,
  anon_sym_COLON = 2,
  anon_sym_fn = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_do = 6,
  anon_sym_end = 7,
  sym_block = 8,
  anon_sym_COMMA = 9,
  sym_identifier = 10,
  sym_source_file = 11,
  sym_fn_declaration = 12,
  sym__fn_body = 13,
  sym_parameter_list = 14,
  sym_parameter = 15,
  aux_sym_parameter_list_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_directive] = "directive",
  [anon_sym_COLON] = ":",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [sym_block] = "block",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_fn_declaration] = "fn_declaration",
  [sym__fn_body] = "_fn_body",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_directive] = sym_directive,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [sym_block] = sym_block,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_fn_declaration] = sym_fn_declaration,
  [sym__fn_body] = sym__fn_body,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
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
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__fn_body] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_name = 2,
  field_parameter = 3,
  field_parameters = 4,
  field_returnType = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_returnType] = "returnType",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 1},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 4, .inherited = true},
    {field_name, 3},
    {field_parameters, 4, .inherited = true},
    {field_returnType, 0},
  [4] =
    {field_parameter, 0},
  [5] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [7] =
    {field_name, 2},
    {field_type, 0},
  [9] =
    {field_parameter, 1},
  [10] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [12] =
    {field_body, 3},
  [13] =
    {field_parameters, 1},
  [14] =
    {field_body, 4},
    {field_parameters, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '(', 13,
        ')', 14,
        ',', 19,
        ':', 11,
        'd', 5,
        'e', 3,
        'f', 4,
        'h', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'h') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == ')') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == 'h') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_directive);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_block);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_block);
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_block] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_fn_declaration] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_directive] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(4), 1,
      sym_parameter,
    STATE(22), 1,
      sym_parameter_list,
  [13] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(14), 1,
      sym_fn_declaration,
  [23] = 3,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_parameter_list_repeat1,
  [33] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_parameter_list_repeat1,
  [43] = 3,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_parameter_list_repeat1,
  [53] = 2,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__fn_body,
  [60] = 2,
    ACTIONS(30), 1,
      anon_sym_end,
    ACTIONS(32), 1,
      sym_block,
  [67] = 1,
    ACTIONS(34), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [72] = 2,
    ACTIONS(36), 1,
      anon_sym_end,
    ACTIONS(38), 1,
      sym_block,
  [79] = 2,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_parameter,
  [86] = 1,
    ACTIONS(40), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [91] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
  [95] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [99] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
  [103] = 1,
    ACTIONS(46), 1,
      anon_sym_COLON,
  [107] = 1,
    ACTIONS(48), 1,
      anon_sym_fn,
  [111] = 1,
    ACTIONS(50), 1,
      sym_identifier,
  [115] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [119] = 1,
    ACTIONS(54), 1,
      anon_sym_do,
  [123] = 1,
    ACTIONS(56), 1,
      anon_sym_COLON,
  [127] = 1,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
  [131] = 1,
    ACTIONS(60), 1,
      anon_sym_do,
  [135] = 1,
    ACTIONS(62), 1,
      sym_identifier,
  [139] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [143] = 1,
    ACTIONS(66), 1,
      anon_sym_end,
  [147] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [151] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [155] = 1,
    ACTIONS(72), 1,
      anon_sym_end,
  [159] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 23,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 43,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 67,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 79,
  [SMALL_STATE(12)] = 86,
  [SMALL_STATE(13)] = 91,
  [SMALL_STATE(14)] = 95,
  [SMALL_STATE(15)] = 99,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 107,
  [SMALL_STATE(18)] = 111,
  [SMALL_STATE(19)] = 115,
  [SMALL_STATE(20)] = 119,
  [SMALL_STATE(21)] = 123,
  [SMALL_STATE(22)] = 127,
  [SMALL_STATE(23)] = 131,
  [SMALL_STATE(24)] = 135,
  [SMALL_STATE(25)] = 139,
  [SMALL_STATE(26)] = 143,
  [SMALL_STATE(27)] = 147,
  [SMALL_STATE(28)] = 151,
  [SMALL_STATE(29)] = 155,
  [SMALL_STATE(30)] = 159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 6),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 6), SHIFT_REPEAT(11),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_declaration, 5, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_body, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_body, 5, 0, 7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_body, 5, 0, 8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_body, 6, 0, 9),
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

TS_PUBLIC const TSLanguage *tree_sitter_smartcode(void) {
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
