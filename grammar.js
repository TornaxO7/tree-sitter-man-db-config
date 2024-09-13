module.exports = grammar({
  name: 'mandbconfig',

  rules: {
    config_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.comment,
      $.mandatory_manpath,
    ),

    comment: $ => /#.*/,

    // == mandatory_manpath ==
    mandatory_manpath: $ => seq(
      "MANDATORY_MANPATH",
      /\s+/,
      field("manpath_element", $.manpath_element)
    ),

    manpath_element: $ => seq(
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
