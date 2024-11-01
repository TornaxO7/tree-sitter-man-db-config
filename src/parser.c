#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_MANDATORY_MANPATH = 2,
  anon_sym_SPACE = 3,
  anon_sym_TAB = 4,
  anon_sym_MANPATH_MAP = 5,
  anon_sym_MANDB_MAP = 6,
  anon_sym_DEFINE = 7,
  anon_sym_SECTION = 8,
  anon_sym_SECTIONS = 9,
  anon_sym_MINCATWIDTH = 10,
  anon_sym_MAXCATWIDTH = 11,
  anon_sym_CATWIDTH = 12,
  sym_nocache = 13,
  aux_sym_word_token1 = 14,
  aux_sym_width_token1 = 15,
  aux_sym_width_token2 = 16,
  anon_sym_SLASH = 17,
  aux_sym__dir_name_token1 = 18,
  sym_file = 19,
  sym__definition = 20,
  sym_mandatory_manpath = 21,
  sym_manpath_map = 22,
  sym_mandb_map = 23,
  sym_define = 24,
  sym_section = 25,
  sym_mincatwidth = 26,
  sym_maxcatwidth = 27,
  sym_catwidth = 28,
  sym_path = 29,
  sym_word = 30,
  sym_width = 31,
  sym__absolute_path = 32,
  aux_sym__dir_name = 33,
  aux_sym_file_repeat1 = 34,
  aux_sym_mandatory_manpath_repeat1 = 35,
  aux_sym_section_repeat1 = 36,
  aux_sym_word_repeat1 = 37,
  aux_sym_width_repeat1 = 38,
  aux_sym__absolute_path_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_MANDATORY_MANPATH] = "MANDATORY_MANPATH",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_MANPATH_MAP] = "MANPATH_MAP",
  [anon_sym_MANDB_MAP] = "MANDB_MAP",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_SECTION] = "SECTION",
  [anon_sym_SECTIONS] = "SECTIONS",
  [anon_sym_MINCATWIDTH] = "MINCATWIDTH",
  [anon_sym_MAXCATWIDTH] = "MAXCATWIDTH",
  [anon_sym_CATWIDTH] = "CATWIDTH",
  [sym_nocache] = "nocache",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_width_token1] = "width_token1",
  [aux_sym_width_token2] = "width_token2",
  [anon_sym_SLASH] = "/",
  [aux_sym__dir_name_token1] = "_dir_name_token1",
  [sym_file] = "file",
  [sym__definition] = "_definition",
  [sym_mandatory_manpath] = "mandatory_manpath",
  [sym_manpath_map] = "manpath_map",
  [sym_mandb_map] = "mandb_map",
  [sym_define] = "define",
  [sym_section] = "section",
  [sym_mincatwidth] = "mincatwidth",
  [sym_maxcatwidth] = "maxcatwidth",
  [sym_catwidth] = "catwidth",
  [sym_path] = "path",
  [sym_word] = "word",
  [sym_width] = "width",
  [sym__absolute_path] = "_absolute_path",
  [aux_sym__dir_name] = "_dir_name",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_mandatory_manpath_repeat1] = "mandatory_manpath_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_word_repeat1] = "word_repeat1",
  [aux_sym_width_repeat1] = "width_repeat1",
  [aux_sym__absolute_path_repeat1] = "_absolute_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_MANDATORY_MANPATH] = anon_sym_MANDATORY_MANPATH,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_MANPATH_MAP] = anon_sym_MANPATH_MAP,
  [anon_sym_MANDB_MAP] = anon_sym_MANDB_MAP,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_SECTION] = anon_sym_SECTION,
  [anon_sym_SECTIONS] = anon_sym_SECTIONS,
  [anon_sym_MINCATWIDTH] = anon_sym_MINCATWIDTH,
  [anon_sym_MAXCATWIDTH] = anon_sym_MAXCATWIDTH,
  [anon_sym_CATWIDTH] = anon_sym_CATWIDTH,
  [sym_nocache] = sym_nocache,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_width_token1] = aux_sym_width_token1,
  [aux_sym_width_token2] = aux_sym_width_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__dir_name_token1] = aux_sym__dir_name_token1,
  [sym_file] = sym_file,
  [sym__definition] = sym__definition,
  [sym_mandatory_manpath] = sym_mandatory_manpath,
  [sym_manpath_map] = sym_manpath_map,
  [sym_mandb_map] = sym_mandb_map,
  [sym_define] = sym_define,
  [sym_section] = sym_section,
  [sym_mincatwidth] = sym_mincatwidth,
  [sym_maxcatwidth] = sym_maxcatwidth,
  [sym_catwidth] = sym_catwidth,
  [sym_path] = sym_path,
  [sym_word] = sym_word,
  [sym_width] = sym_width,
  [sym__absolute_path] = sym__absolute_path,
  [aux_sym__dir_name] = aux_sym__dir_name,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_mandatory_manpath_repeat1] = aux_sym_mandatory_manpath_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_word_repeat1] = aux_sym_word_repeat1,
  [aux_sym_width_repeat1] = aux_sym_width_repeat1,
  [aux_sym__absolute_path_repeat1] = aux_sym__absolute_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MANDATORY_MANPATH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MANPATH_MAP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MANDB_MAP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SECTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINCATWIDTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAXCATWIDTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CATWIDTH] = {
    .visible = true,
    .named = false,
  },
  [sym_nocache] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_width_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_width_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__dir_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_mandatory_manpath] = {
    .visible = true,
    .named = true,
  },
  [sym_manpath_map] = {
    .visible = true,
    .named = true,
  },
  [sym_mandb_map] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_mincatwidth] = {
    .visible = true,
    .named = true,
  },
  [sym_maxcatwidth] = {
    .visible = true,
    .named = true,
  },
  [sym_catwidth] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_path] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__dir_name] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mandatory_manpath_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_width_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__absolute_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_catpath_element = 1,
  field_key = 2,
  field_manpath_element = 3,
  field_path_element = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_catpath_element] = "catpath_element",
  [field_key] = "key",
  [field_manpath_element] = "manpath_element",
  [field_path_element] = "path_element",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_manpath_element, 2},
  [1] =
    {field_manpath_element, 4},
    {field_path_element, 2},
  [3] =
    {field_catpath_element, 4},
    {field_manpath_element, 2},
  [5] =
    {field_key, 2},
    {field_value, 4},
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
  [11] = 5,
  [12] = 12,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 6,
  [18] = 8,
  [19] = 9,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 12,
  [25] = 14,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 20,
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
  [40] = 5,
  [41] = 4,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 6,
  [51] = 9,
  [52] = 12,
  [53] = 49,
  [54] = 14,
  [55] = 8,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 56,
  [66] = 66,
  [67] = 56,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '#', 82,
        '/', 104,
        '0', 95,
        'C', 96,
        'D', 98,
        'M', 97,
        'N', 100,
        'S', 99,
        '\\', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(85);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(101);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(85);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '/') ADVANCE(104);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(85);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(101);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(85);
      if (lookahead == ' ') ADVANCE(84);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'B') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'H') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'H') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(7);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(8);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(12);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 55:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'W') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'W') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'W') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'Y') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == '\\') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 74:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '\t', 85,
        ' ', 84,
        '#', 82,
        '/', 104,
        'C', 96,
        'D', 98,
        'M', 97,
        'N', 100,
        'S', 99,
        '\\', 101,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(74);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 75:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '\t', 85,
        ' ', 84,
        '#', 82,
        'C', 96,
        'D', 98,
        'M', 97,
        'N', 100,
        'S', 99,
        '\\', 101,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(75);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 76:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '\t', 85,
        ' ', 84,
        '#', 82,
        'C', 96,
        'D', 98,
        'M', 97,
        'N', 100,
        'S', 99,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 77:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '#', 82,
        '/', 104,
        'C', 96,
        'D', 98,
        'M', 97,
        'N', 100,
        'S', 99,
        '\\', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(5);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(6);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_MANDATORY_MANPATH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(85);
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(85);
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_MANPATH_MAP);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_MANDB_MAP);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SECTION);
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SECTIONS);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_MINCATWIDTH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_MAXCATWIDTH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_CATWIDTH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_nocache);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_width_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_width_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__dir_name_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 77},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 77},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 78},
  [18] = {.lex_state = 79},
  [19] = {.lex_state = 79},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 74},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 74},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 70},
  [57] = {.lex_state = 74},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 70},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 70},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_MANDATORY_MANPATH] = ACTIONS(1),
    [anon_sym_MANPATH_MAP] = ACTIONS(1),
    [anon_sym_MANDB_MAP] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_SECTION] = ACTIONS(1),
    [anon_sym_SECTIONS] = ACTIONS(1),
    [anon_sym_MINCATWIDTH] = ACTIONS(1),
    [anon_sym_MAXCATWIDTH] = ACTIONS(1),
    [anon_sym_CATWIDTH] = ACTIONS(1),
    [sym_nocache] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_width_token1] = ACTIONS(1),
    [aux_sym_width_token2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym__dir_name_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(69),
    [sym__definition] = STATE(3),
    [sym_mandatory_manpath] = STATE(3),
    [sym_manpath_map] = STATE(3),
    [sym_mandb_map] = STATE(3),
    [sym_define] = STATE(3),
    [sym_section] = STATE(3),
    [sym_mincatwidth] = STATE(3),
    [sym_maxcatwidth] = STATE(3),
    [sym_catwidth] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_MANDATORY_MANPATH] = ACTIONS(7),
    [anon_sym_MANPATH_MAP] = ACTIONS(9),
    [anon_sym_MANDB_MAP] = ACTIONS(11),
    [anon_sym_DEFINE] = ACTIONS(13),
    [anon_sym_SECTION] = ACTIONS(15),
    [anon_sym_SECTIONS] = ACTIONS(17),
    [anon_sym_MINCATWIDTH] = ACTIONS(19),
    [anon_sym_MAXCATWIDTH] = ACTIONS(21),
    [anon_sym_CATWIDTH] = ACTIONS(23),
    [sym_nocache] = ACTIONS(5),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_mandatory_manpath] = STATE(2),
    [sym_manpath_map] = STATE(2),
    [sym_mandb_map] = STATE(2),
    [sym_define] = STATE(2),
    [sym_section] = STATE(2),
    [sym_mincatwidth] = STATE(2),
    [sym_maxcatwidth] = STATE(2),
    [sym_catwidth] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
    [anon_sym_MANDATORY_MANPATH] = ACTIONS(30),
    [anon_sym_MANPATH_MAP] = ACTIONS(33),
    [anon_sym_MANDB_MAP] = ACTIONS(36),
    [anon_sym_DEFINE] = ACTIONS(39),
    [anon_sym_SECTION] = ACTIONS(42),
    [anon_sym_SECTIONS] = ACTIONS(45),
    [anon_sym_MINCATWIDTH] = ACTIONS(48),
    [anon_sym_MAXCATWIDTH] = ACTIONS(51),
    [anon_sym_CATWIDTH] = ACTIONS(54),
    [sym_nocache] = ACTIONS(27),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_mandatory_manpath] = STATE(2),
    [sym_manpath_map] = STATE(2),
    [sym_mandb_map] = STATE(2),
    [sym_define] = STATE(2),
    [sym_section] = STATE(2),
    [sym_mincatwidth] = STATE(2),
    [sym_maxcatwidth] = STATE(2),
    [sym_catwidth] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
    [anon_sym_MANDATORY_MANPATH] = ACTIONS(7),
    [anon_sym_MANPATH_MAP] = ACTIONS(9),
    [anon_sym_MANDB_MAP] = ACTIONS(11),
    [anon_sym_DEFINE] = ACTIONS(13),
    [anon_sym_SECTION] = ACTIONS(15),
    [anon_sym_SECTIONS] = ACTIONS(17),
    [anon_sym_MINCATWIDTH] = ACTIONS(19),
    [anon_sym_MAXCATWIDTH] = ACTIONS(21),
    [anon_sym_CATWIDTH] = ACTIONS(23),
    [sym_nocache] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym__dir_name,
    ACTIONS(65), 2,
      aux_sym_word_token1,
      aux_sym__dir_name_token1,
    ACTIONS(63), 14,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
      anon_sym_SLASH,
  [27] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym__dir_name,
    ACTIONS(71), 2,
      aux_sym_word_token1,
      aux_sym__dir_name_token1,
    ACTIONS(69), 14,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
      anon_sym_SLASH,
  [54] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym__dir_name,
    ACTIONS(78), 2,
      aux_sym_word_token1,
      aux_sym__dir_name_token1,
    ACTIONS(76), 13,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [80] = 5,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_section_repeat1,
    STATE(42), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(84), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(82), 11,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [107] = 4,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_word_token1,
    STATE(8), 1,
      aux_sym_word_repeat1,
    ACTIONS(88), 13,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [132] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_word_token1,
    STATE(8), 1,
      aux_sym_word_repeat1,
    ACTIONS(95), 13,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [157] = 5,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_section_repeat1,
    STATE(42), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(103), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(101), 11,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [184] = 5,
    ACTIONS(69), 1,
      anon_sym_SECTION,
    ACTIONS(106), 1,
      aux_sym_word_token1,
    ACTIONS(109), 1,
      aux_sym__dir_name_token1,
    STATE(11), 1,
      aux_sym__dir_name,
    ACTIONS(67), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
      anon_sym_SLASH,
  [211] = 4,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      aux_sym__absolute_path_repeat1,
    ACTIONS(63), 13,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [236] = 5,
    ACTIONS(63), 1,
      anon_sym_SECTION,
    ACTIONS(115), 1,
      aux_sym_word_token1,
    ACTIONS(117), 1,
      aux_sym__dir_name_token1,
    STATE(11), 1,
      aux_sym__dir_name,
    ACTIONS(61), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
      anon_sym_SLASH,
  [263] = 4,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      aux_sym__absolute_path_repeat1,
    ACTIONS(121), 13,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [288] = 5,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_section_repeat1,
    STATE(42), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(84), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(127), 11,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [315] = 4,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(133), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(131), 11,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [339] = 5,
    ACTIONS(76), 1,
      anon_sym_SECTION,
    ACTIONS(135), 1,
      aux_sym_word_token1,
    ACTIONS(137), 1,
      aux_sym__dir_name_token1,
    STATE(13), 1,
      aux_sym__dir_name,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [365] = 4,
    ACTIONS(88), 1,
      anon_sym_SECTION,
    ACTIONS(139), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [388] = 4,
    ACTIONS(95), 1,
      anon_sym_SECTION,
    ACTIONS(142), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [411] = 2,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 13,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [430] = 4,
    ACTIONS(150), 1,
      anon_sym_SECTION,
    ACTIONS(152), 1,
      aux_sym_width_token2,
    STATE(21), 1,
      aux_sym_width_repeat1,
    ACTIONS(148), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [453] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 13,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTION,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [472] = 4,
    ACTIONS(157), 1,
      anon_sym_SECTION,
    ACTIONS(159), 1,
      aux_sym_width_token2,
    STATE(21), 1,
      aux_sym_width_repeat1,
    ACTIONS(155), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [495] = 4,
    ACTIONS(63), 1,
      anon_sym_SECTION,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym__absolute_path_repeat1,
    ACTIONS(61), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [518] = 4,
    ACTIONS(121), 1,
      anon_sym_SECTION,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym__absolute_path_repeat1,
    ACTIONS(119), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [541] = 4,
    ACTIONS(168), 1,
      anon_sym_SECTION,
    ACTIONS(170), 1,
      aux_sym_width_token2,
    STATE(23), 1,
      aux_sym_width_repeat1,
    ACTIONS(166), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [564] = 2,
    ACTIONS(174), 1,
      anon_sym_SECTION,
    ACTIONS(172), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [581] = 2,
    ACTIONS(178), 1,
      anon_sym_SECTION,
    ACTIONS(176), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [598] = 2,
    ACTIONS(146), 1,
      anon_sym_SECTION,
    ACTIONS(144), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [615] = 2,
    ACTIONS(182), 1,
      anon_sym_SECTION,
    ACTIONS(180), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [632] = 2,
    ACTIONS(186), 1,
      anon_sym_SECTION,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [649] = 2,
    ACTIONS(190), 1,
      anon_sym_SECTION,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [666] = 2,
    ACTIONS(194), 1,
      anon_sym_SECTION,
    ACTIONS(192), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [683] = 2,
    ACTIONS(198), 1,
      anon_sym_SECTION,
    ACTIONS(196), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_MANDATORY_MANPATH,
      anon_sym_MANPATH_MAP,
      anon_sym_MANDB_MAP,
      anon_sym_DEFINE,
      anon_sym_SECTIONS,
      anon_sym_MINCATWIDTH,
      anon_sym_MAXCATWIDTH,
      anon_sym_CATWIDTH,
      sym_nocache,
  [700] = 6,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym__absolute_path_repeat1,
    STATE(29), 1,
      sym__absolute_path,
    STATE(32), 1,
      sym_path,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [720] = 6,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym__absolute_path_repeat1,
    STATE(16), 1,
      sym_path,
    STATE(20), 1,
      sym__absolute_path,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [740] = 6,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym__absolute_path_repeat1,
    STATE(29), 1,
      sym__absolute_path,
    STATE(33), 1,
      sym_path,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [760] = 6,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym__absolute_path,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    STATE(54), 1,
      aux_sym__absolute_path_repeat1,
    STATE(59), 1,
      sym_path,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [780] = 6,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym__absolute_path_repeat1,
    STATE(29), 1,
      sym__absolute_path,
    STATE(31), 1,
      sym_path,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [800] = 3,
    STATE(40), 1,
      aux_sym__dir_name,
    ACTIONS(208), 2,
      aux_sym_word_token1,
      aux_sym__dir_name_token1,
    ACTIONS(69), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_SLASH,
  [813] = 3,
    STATE(40), 1,
      aux_sym__dir_name,
    ACTIONS(211), 2,
      aux_sym_word_token1,
      aux_sym__dir_name_token1,
    ACTIONS(63), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_SLASH,
  [826] = 5,
    ACTIONS(215), 1,
      aux_sym_word_token1,
    STATE(9), 1,
      aux_sym_word_repeat1,
    STATE(22), 1,
      sym_word,
    STATE(53), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(213), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [843] = 5,
    ACTIONS(215), 1,
      aux_sym_word_token1,
    STATE(9), 1,
      aux_sym_word_repeat1,
    STATE(15), 1,
      sym_word,
    STATE(53), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(213), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [860] = 5,
    ACTIONS(217), 1,
      aux_sym_word_token1,
    STATE(51), 1,
      aux_sym_word_repeat1,
    STATE(53), 1,
      aux_sym_mandatory_manpath_repeat1,
    STATE(57), 1,
      sym_word,
    ACTIONS(213), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [877] = 5,
    ACTIONS(219), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      aux_sym_word_repeat1,
    STATE(30), 1,
      sym_word,
    STATE(53), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(213), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [894] = 4,
    ACTIONS(221), 1,
      aux_sym_width_token1,
    STATE(28), 1,
      sym_width,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [908] = 4,
    ACTIONS(221), 1,
      aux_sym_width_token1,
    STATE(27), 1,
      sym_width,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [922] = 4,
    ACTIONS(221), 1,
      aux_sym_width_token1,
    STATE(34), 1,
      sym_width,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [936] = 3,
    STATE(49), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(223), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(226), 2,
      aux_sym_width_token1,
      anon_sym_SLASH,
  [948] = 3,
    STATE(41), 1,
      aux_sym__dir_name,
    ACTIONS(76), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(228), 2,
      aux_sym_word_token1,
      aux_sym__dir_name_token1,
  [960] = 3,
    ACTIONS(230), 1,
      aux_sym_word_token1,
    STATE(55), 1,
      aux_sym_word_repeat1,
    ACTIONS(95), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [971] = 3,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym__absolute_path_repeat1,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [982] = 3,
    ACTIONS(226), 1,
      aux_sym_word_token1,
    STATE(53), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(235), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [993] = 3,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym__absolute_path_repeat1,
    ACTIONS(121), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1004] = 3,
    ACTIONS(240), 1,
      aux_sym_word_token1,
    STATE(55), 1,
      aux_sym_word_repeat1,
    ACTIONS(88), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1015] = 3,
    ACTIONS(135), 1,
      aux_sym_word_token1,
    ACTIONS(137), 1,
      aux_sym__dir_name_token1,
    STATE(13), 1,
      aux_sym__dir_name,
  [1025] = 2,
    STATE(45), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(243), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1033] = 2,
    STATE(37), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(245), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1041] = 2,
    STATE(35), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(247), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1049] = 2,
    STATE(46), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(249), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1057] = 2,
    STATE(47), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(251), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1065] = 2,
    STATE(48), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(253), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1073] = 2,
    STATE(43), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(255), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1081] = 2,
    STATE(44), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(257), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1089] = 3,
    ACTIONS(228), 1,
      aux_sym_word_token1,
    ACTIONS(259), 1,
      aux_sym__dir_name_token1,
    STATE(41), 1,
      aux_sym__dir_name,
  [1099] = 2,
    STATE(36), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(261), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1107] = 3,
    ACTIONS(78), 1,
      aux_sym_word_token1,
    ACTIONS(263), 1,
      aux_sym__dir_name_token1,
    STATE(4), 1,
      aux_sym__dir_name,
  [1117] = 2,
    STATE(38), 1,
      aux_sym_mandatory_manpath_repeat1,
    ACTIONS(265), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1125] = 1,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 27,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 315,
  [SMALL_STATE(17)] = 339,
  [SMALL_STATE(18)] = 365,
  [SMALL_STATE(19)] = 388,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 430,
  [SMALL_STATE(22)] = 453,
  [SMALL_STATE(23)] = 472,
  [SMALL_STATE(24)] = 495,
  [SMALL_STATE(25)] = 518,
  [SMALL_STATE(26)] = 541,
  [SMALL_STATE(27)] = 564,
  [SMALL_STATE(28)] = 581,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 615,
  [SMALL_STATE(31)] = 632,
  [SMALL_STATE(32)] = 649,
  [SMALL_STATE(33)] = 666,
  [SMALL_STATE(34)] = 683,
  [SMALL_STATE(35)] = 700,
  [SMALL_STATE(36)] = 720,
  [SMALL_STATE(37)] = 740,
  [SMALL_STATE(38)] = 760,
  [SMALL_STATE(39)] = 780,
  [SMALL_STATE(40)] = 800,
  [SMALL_STATE(41)] = 813,
  [SMALL_STATE(42)] = 826,
  [SMALL_STATE(43)] = 843,
  [SMALL_STATE(44)] = 860,
  [SMALL_STATE(45)] = 877,
  [SMALL_STATE(46)] = 894,
  [SMALL_STATE(47)] = 908,
  [SMALL_STATE(48)] = 922,
  [SMALL_STATE(49)] = 936,
  [SMALL_STATE(50)] = 948,
  [SMALL_STATE(51)] = 960,
  [SMALL_STATE(52)] = 971,
  [SMALL_STATE(53)] = 982,
  [SMALL_STATE(54)] = 993,
  [SMALL_STATE(55)] = 1004,
  [SMALL_STATE(56)] = 1015,
  [SMALL_STATE(57)] = 1025,
  [SMALL_STATE(58)] = 1033,
  [SMALL_STATE(59)] = 1041,
  [SMALL_STATE(60)] = 1049,
  [SMALL_STATE(61)] = 1057,
  [SMALL_STATE(62)] = 1065,
  [SMALL_STATE(63)] = 1073,
  [SMALL_STATE(64)] = 1081,
  [SMALL_STATE(65)] = 1089,
  [SMALL_STATE(66)] = 1099,
  [SMALL_STATE(67)] = 1107,
  [SMALL_STATE(68)] = 1117,
  [SMALL_STATE(69)] = 1125,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__absolute_path_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__absolute_path_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dir_name, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__dir_name, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dir_name, 2, 0, 0), SHIFT_REPEAT(5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_path, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute_path, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dir_name, 2, 0, 0), SHIFT_REPEAT(11),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dir_name, 2, 0, 0), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__absolute_path_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_path, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute_path, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandb_map, 3, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandb_map, 3, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_width_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_width_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_width_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__absolute_path_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxcatwidth, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maxcatwidth, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catwidth, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catwidth, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 5, 0, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 5, 0, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandb_map, 5, 0, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandb_map, 5, 0, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manpath_map, 5, 0, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manpath_map, 5, 0, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandatory_manpath, 3, 0, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandatory_manpath, 3, 0, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mincatwidth, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mincatwidth, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dir_name, 2, 0, 0), SHIFT_REPEAT(40),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandatory_manpath_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandatory_manpath_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__absolute_path_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandatory_manpath_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [267] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_mandbconfig(void) {
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
