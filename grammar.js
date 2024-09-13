const WHITESPACES = repeat1(
  choice(
    " ",
    "\t"
  )
)

const NUMBER = seq(/[1-9]/, /\d/)

module.exports = grammar({
  name: 'mandbconfig',

  rules: {
    file: $ => repeat($._definition),

    _definition: $ => choice(
      $.comment,
      $.mandatory_manpath,
      $.manpath_map,
      $.mandb_map,
      $.define,
      $.section,
      $.mincatwidth,
      $.maxcatwidth,
    ),

    // # comment
    comment: $ => /#.*/,

    // MANDATORY_MANPATH manpath_element
    mandatory_manpath: $ => seq(
      "MANDATORY_MANPATH",
      WHITESPACES,
      field("manpath_element", $.path)
    ),

    // MANPATH_MAP path_element manpath_element
    manpath_map: $ => seq(
      "MANPATH_MAP",
      WHITESPACES,
      field("path_element", $.path),
      WHITESPACES,
      field("manpath_element", $.path),
    ),

    // MANDB_MAP manpath_element [ catpath_element ]
    mandb_map: $ => seq(
      "MANDB_MAP",
      WHITESPACES,
      field("manpath_element", $.path),
      optional(
        seq(
          WHITESPACES,
          field("catpath_element", $.path)
        )
      ),
    ),

    // DEFINE key value
    define: $ => seq(
      "DEFINE",
      WHITESPACES,
      field("key", $.word),
      WHITESPACES,
      field("value", $.word),
    ),

    // SECTION section ...
    section: $ => seq(
      choice("SECTION", "SECTIONS"),
      WHITESPACES,
      $.word,
      repeat1(
        seq(
          WHITESPACES,
          $.word,
        )
      ),
    ),

    // MINCATWIDTH width
    mincatwidth: $ => seq(
      "MINCATWIDTH",
      WHITESPACES,
      $.width,
    ),

    // MAXCATWIDTH width
    maxcatwidth: $ => seq(
      "MAXCATWIDTH",
      WHITESPACES,
      $.width,
    ),

    // == elements ==
    path: $ => $._absolute_path,

    word: $ => repeat1(/\S/),

    width: $ => NUMBER,

    // == helpers ==
    _absolute_path: $ => seq(
      repeat1(
        seq(
          "/",
          $._dir_name
        )
      ),
      optional("/"),
    ),

    _dir_name: $ => repeat1(choice(/\S/, /\\\s/)),
  }
});
