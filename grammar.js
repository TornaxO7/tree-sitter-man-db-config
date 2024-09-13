const WHITESPACES = repeat1(
  choice(
    " ",
    "\t"
  )
)

module.exports = grammar({
  name: 'mandbconfig',

  rules: {
    file: $ => repeat($._definition),

    _definition: $ => choice(
      $.comment,
      $.mandatory_manpath,
      $.manpath_map,
      $.mandb_map,
    ),

    comment: $ => /#.*/,

    mandatory_manpath: $ => seq(
      "MANDATORY_MANPATH",
      WHITESPACES,
      field("manpath_element", $.path)
    ),

    manpath_map: $ => seq(
      "MANPATH_MAP",
      WHITESPACES,
      field("path_element", $.path),
      WHITESPACES,
      field("manpath_element", $.path),
    ),

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

    // == elements ==
    path: $ => $._absolute_path,

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
