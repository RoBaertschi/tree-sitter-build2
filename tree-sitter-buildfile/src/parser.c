#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  sym_if_keyword = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_bool = 4,
  anon_sym_EQ_EQ = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_return = 8,
  anon_sym_SEMI = 9,
  sym__string_literal = 10,
  aux_sym__string_content_token1 = 11,
  sym_number = 12,
  sym_member_access = 13,
  sym__lookup_token = 14,
  sym_source_file = 15,
  sym__definition = 16,
  sym_if_definition = 17,
  sym_test_expression = 18,
  sym__test = 19,
  sym_block = 20,
  sym__statement = 21,
  sym_return_statement = 22,
  sym__expression = 23,
  sym_string = 24,
  sym__string_content = 25,
  sym_identifier = 26,
  sym_variable_lookup = 27,
  sym_variable = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_block_repeat1 = 30,
  aux_sym_variable_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_if_keyword] = "if_keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
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
  [sym_return_statement] = "return_statement",
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
  [sym_if_keyword] = sym_if_keyword,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_return_statement] = sym_return_statement,
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
  [sym_if_keyword] = {
    .visible = true,
    .named = true,
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_return_statement] = {
    .visible = true,
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '|') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '|') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_if_keyword);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_member_access);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__lookup_token);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_if_keyword] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__string_literal] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_member_access] = ACTIONS(1),
    [sym__lookup_token] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__definition] = STATE(6),
    [sym_if_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_if_keyword] = ACTIONS(5),
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
    STATE(31), 1,
      sym__test,
    STATE(28), 4,
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
    STATE(29), 4,
      sym__expression,
      sym_string,
      sym_identifier,
      sym_variable_lookup,
  [41] = 5,
    ACTIONS(7), 1,
      sym__string_literal,
    ACTIONS(9), 1,
      aux_sym__string_content_token1,
    ACTIONS(13), 1,
      sym__lookup_token,
    ACTIONS(17), 1,
      sym_number,
    STATE(30), 4,
      sym__expression,
      sym_string,
      sym_identifier,
      sym_variable_lookup,
  [60] = 3,
    ACTIONS(21), 1,
      sym_member_access,
    STATE(5), 1,
      aux_sym_variable_repeat1,
    ACTIONS(19), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_SEMI,
  [72] = 3,
    ACTIONS(5), 1,
      sym_if_keyword,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym__definition,
      sym_if_definition,
      aux_sym_source_file_repeat1,
  [84] = 3,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_return,
    STATE(7), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [96] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_if_keyword,
    STATE(8), 3,
      sym__definition,
      sym_if_definition,
      aux_sym_source_file_repeat1,
  [108] = 3,
    ACTIONS(38), 1,
      sym_member_access,
    STATE(5), 1,
      aux_sym_variable_repeat1,
    ACTIONS(36), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_SEMI,
  [120] = 3,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_return,
    STATE(11), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [132] = 3,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(7), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [144] = 3,
    ACTIONS(38), 1,
      sym_member_access,
    STATE(9), 1,
      aux_sym_variable_repeat1,
    ACTIONS(46), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_SEMI,
  [156] = 1,
    ACTIONS(19), 4,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_SEMI,
      sym_member_access,
  [163] = 1,
    ACTIONS(48), 4,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_SEMI,
      sym_member_access,
  [170] = 3,
    ACTIONS(9), 1,
      aux_sym__string_content_token1,
    STATE(12), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable,
  [180] = 1,
    ACTIONS(50), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_SEMI,
  [186] = 1,
    ACTIONS(52), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_SEMI,
  [192] = 2,
    ACTIONS(54), 1,
      aux_sym__string_content_token1,
    STATE(27), 1,
      sym__string_content,
  [199] = 1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_if_keyword,
  [204] = 2,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_test_expression,
  [211] = 1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_if_keyword,
  [216] = 2,
    ACTIONS(9), 1,
      aux_sym__string_content_token1,
    STATE(13), 1,
      sym_identifier,
  [223] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_if_keyword,
  [228] = 2,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [235] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [240] = 1,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
  [244] = 1,
    ACTIONS(70), 1,
      sym__string_literal,
  [248] = 1,
    ACTIONS(72), 1,
      anon_sym_EQ_EQ,
  [252] = 1,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
  [256] = 1,
    ACTIONS(76), 1,
      anon_sym_SEMI,
  [260] = 1,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
  [264] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 186,
  [SMALL_STATE(18)] = 192,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 211,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 235,
  [SMALL_STATE(26)] = 240,
  [SMALL_STATE(27)] = 244,
  [SMALL_STATE(28)] = 248,
  [SMALL_STATE(29)] = 252,
  [SMALL_STATE(30)] = 256,
  [SMALL_STATE(31)] = 260,
  [SMALL_STATE(32)] = 264,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(22),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_lookup, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_definition, 3, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_expression, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__test, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
