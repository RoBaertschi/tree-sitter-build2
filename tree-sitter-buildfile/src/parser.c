#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_if = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_bool = 4,
  anon_sym_EQ_EQ = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym__string_literal = 8,
  aux_sym__string_content_token1 = 9,
  sym_number = 10,
  sym_member_access = 11,
  sym__lookup_token = 12,
  sym_source_file = 13,
  sym__definition = 14,
  sym_if_definition = 15,
  sym_test_expression = 16,
  sym__test = 17,
  sym_block = 18,
  sym__statement = 19,
  sym__expression = 20,
  sym_string = 21,
  sym__string_content = 22,
  sym_identifier = 23,
  sym_variable_lookup = 24,
  sym_variable = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_block_repeat1 = 27,
  aux_sym_variable_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__string_literal] = "_string_literal",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym_number] = "number",
  [sym_member_access] = "member_access",
  [sym__lookup_token] = "_lookup_token",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_if_definition] = "if_definition",
  [sym_test_expression] = "test_expression",
  [sym__test] = "_test",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym__string_content] = "_string_content",
  [sym_identifier] = "identifier",
  [sym_variable_lookup] = "variable_lookup",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__string_literal] = sym__string_literal,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym_number] = sym_number,
  [sym_member_access] = sym_member_access,
  [sym__lookup_token] = sym__lookup_token,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_if_definition] = sym_if_definition,
  [sym_test_expression] = sym_test_expression,
  [sym__test] = sym__test,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym__string_content] = sym__string_content,
  [sym_identifier] = sym_identifier,
  [sym_variable_lookup] = sym_variable_lookup,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym__lookup_token] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_if_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_test_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__test] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_lookup] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_block = 1,
  field_test_expression = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_test_expression] = "test_expression",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_block, 2},
    {field_test_expression, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == 'f') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == 'l') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == 'o') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == 'o') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_member_access);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__lookup_token);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__string_literal] = ACTIONS(1),
    [aux_sym__string_content_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_member_access] = ACTIONS(1),
    [sym__lookup_token] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym__definition] = STATE(4),
    [sym_if_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym__string_literal,
    ACTIONS(9), 1,
      aux_sym__string_content_token1,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(13), 1,
      sym__lookup_token,
    STATE(24), 1,
      sym__test,
    STATE(25), 4,
      sym__expression,
      sym_string,
      sym_identifier,
      sym_variable_lookup,
  [22] = 5,
    ACTIONS(7), 1,
      sym__string_literal,
    ACTIONS(9), 1,
      aux_sym__string_content_token1,
    ACTIONS(13), 1,
      sym__lookup_token,
    ACTIONS(15), 1,
      sym_number,
    STATE(28), 4,
      sym__expression,
      sym_string,
      sym_identifier,
      sym_variable_lookup,
  [41] = 3,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym__definition,
      sym_if_definition,
      aux_sym_source_file_repeat1,
  [53] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_if,
    STATE(5), 3,
      sym__definition,
      sym_if_definition,
      aux_sym_source_file_repeat1,
  [65] = 3,
    ACTIONS(26), 1,
      sym_member_access,
    STATE(8), 1,
      aux_sym_variable_repeat1,
    ACTIONS(24), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
  [76] = 3,
    ACTIONS(30), 1,
      sym_member_access,
    STATE(7), 1,
      aux_sym_variable_repeat1,
    ACTIONS(28), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
  [87] = 3,
    ACTIONS(26), 1,
      sym_member_access,
    STATE(7), 1,
      aux_sym_variable_repeat1,
    ACTIONS(33), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
  [98] = 2,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [106] = 3,
    ACTIONS(9), 1,
      aux_sym__string_content_token1,
    STATE(6), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable,
  [116] = 2,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [124] = 1,
    ACTIONS(39), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      sym_member_access,
  [130] = 2,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [138] = 1,
    ACTIONS(28), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      sym_member_access,
  [144] = 1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_if,
  [149] = 2,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_test_expression,
  [156] = 1,
    ACTIONS(47), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
  [161] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_if,
  [166] = 2,
    ACTIONS(51), 1,
      aux_sym__string_content_token1,
    STATE(26), 1,
      sym__string_content,
  [173] = 1,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
  [178] = 2,
    ACTIONS(9), 1,
      aux_sym__string_content_token1,
    STATE(14), 1,
      sym_identifier,
  [185] = 2,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [192] = 1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_if,
  [197] = 1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
  [201] = 1,
    ACTIONS(61), 1,
      anon_sym_EQ_EQ,
  [205] = 1,
    ACTIONS(63), 1,
      sym__string_literal,
  [209] = 1,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
  [213] = 1,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
  [217] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 149,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 161,
  [SMALL_STATE(19)] = 166,
  [SMALL_STATE(20)] = 173,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 185,
  [SMALL_STATE(23)] = 192,
  [SMALL_STATE(24)] = 197,
  [SMALL_STATE(25)] = 201,
  [SMALL_STATE(26)] = 205,
  [SMALL_STATE(27)] = 209,
  [SMALL_STATE(28)] = 213,
  [SMALL_STATE(29)] = 217,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_definition, 3, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_lookup, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__test, 3),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_buildfile(void) {
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
