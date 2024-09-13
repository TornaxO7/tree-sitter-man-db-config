const WHITESPACE = repeat1(
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
    ),

    comment: $ => /#.*/,

    mandatory_manpath: $ => seq(
      "MANDATORY_MANPATH",
      WHITESPACE,
      field("manpath_element", $.path)
    ),

    manpath_map: $ => seq(
      "MANPATH_MAP",
      WHITESPACE,
      field("path_element", $.path),
      WHITESPACE,
      field("manpath_element", $.path),
    ),

    // == elements ==
    path: $ => seq(
      repeat1(
        seq(
          "/",
          $._dir_name
        )
      ),
      optional("/"),
    ),

    // == helpers ==

    _dir_name: $ => repeat1(choice(/\S/, /\\\s/)),
  }
});
