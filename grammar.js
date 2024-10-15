/**
 * @file Smartcode Treesitter Parser (SC)
 * @author RootEntry
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />

//

const DECIMAL_DIGIT = /[0-9]/;

const _numeral = (digit) =>
  choice(
    repeat1(digit),
    seq(repeat1(digit), ".", repeat(digit)),
    seq(repeat(digit), ".", repeat1(digit)),
  );

const _exponent_part = (...delimiters) =>
  seq(
    choice(...delimiters),
    optional(choice("+", "-")),
    repeat1(DECIMAL_DIGIT),
  );

const _list = (rule, seperator) => seq(rule, repeat(seq(seperator, rule)));

module.exports = grammar({
  name: "smartcode",

  extras: ($) => [/\s/, $.line_comment, $.block_comment],

  supertypes: ($) => [
    $._expression,
    // $._type,
    $._literal,
    $._declaration_statement,
  ],

  inline: ($) => [
    $._type_identifier,
    $._non_special_token,
    $._declaration_statement,
    $._reserved_identifier,
  ],
  precedences: ($) => [
    [
      "call",
      $.update_expression,
      "unary",
      "binary_exp",
      "binary_mul",
      "binary_add",
      "binary_compare",
      "binary_relation",
      "binary_equality",
      "logical_and",
      "logical_or",
      "ternary",
      // "call",
      // "postfix",
      // "prefix",
      // "unary",
      // "binary_exp",
      // "binary_mul",
      // "binary_add",
      // "binary_compare",
      // "binary_relation",
      // "binary_equality",
      // "logical_and",
      // "logical_or",
      // "ternary",
    ],
    ["assign", $.primary_expression],
    ["declaration", "literal"],
    // [$.primary_expression],
  ],

  conflicts: ($) => [
    // [$.binary_expression, $._initializer],
    [$._expression_no_call, $._expression],
    [$._type, $.primary_expression],

    // [$.variable_declaration, $.primary_expression],
    // [$.block, $.binary_expression],
    // [$.block, $.update_expression],
    // [$.return_statement, $.binary_expression],
    // [$.return_statement, $.update_expression],
    // [$._initializer, $.update_expression],
    // [$.binary_expression, $.prefix_expression],
    // [$.binary_expression, $.unary_expression],
    // [$.binary_expression, $.postfix_expression],
  ],
  word: ($) => $.identifier,

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => seq(repeat($._root_statement)),
    _root_statement: ($) => choice($._declaration_statement),

    _non_special_token: ($) =>
      choice(
        $._literal,
        $.identifier,
        $.self,
        alias(
          $.primitive_type,
          "'",
          "fn",
          "for",
          "if",
          "mut",
          "return",
          "while",
        ),
      ),

    empty_statement: (_) => ";",

    _declaration_statement: ($) => choice($._directive, $.function_declaration),
    // _declaration_statement: ($) => choice($.function_declaration),

    _directive: ($) => choice($.incl_directive, $.pub_directive),

    incl_directive: ($) => seq("@incl", field("path", $.path)),

    path: ($) => /[a-zA-Z_][a-zA-Z0-9_]*(\/[a-zA-Z_][a-zA-Z0-9_]*)*/,

    pub_directive: ($) => seq("@pub", field("name", $.identifier)),

    function_declaration: ($) =>
      seq(
        field("returnType", $._type),
        ":",
        "fn",
        field("name", $.identifier),
        field("parameters", $.parameters),
        "do",
        field("body", $.block),
        "end",
      ),

    parameters: ($) =>
      seq(
        "(",
        choice(
          $.void,
          seq(sepBy(",", seq(choice($.parameter, $.void))), optional(",")),
        ),
        ")",
      ),

    _type: ($) =>
      seq(
        field("element", choice($._type_identifier, $.primitive_type)),
        optional(seq("[", "]")),
      ),

    primitive_type: ($) =>
      choice("uint", "int", "bool", "str", "float", $.void),

    void: (_) => "void",

    parameter: ($) =>
      seq(field("type", $._type), ":", field("name", $.identifier)),

    block: ($) =>
      repeat1(
        choice(
          $.if_statement,
          $.for_statement,
          $.while_statement,
          $.variable_declaration,
          $.return_statement,
          $._expression,
        ),
      ),

    if_statement: ($) =>
      seq(
        "if",
        ":",
        $._expression,
        "do",
        $.block,
        choice(
          "end",
          seq("else", $.if_statement),
          seq("else", ":", $.block, "end"),
        ),
      ),
    for_statement: ($) =>
      seq(
        "for",
        ":",
        $._expression,
        ",",
        $._expression,
        ",",
        $._expression,
        "do",
        $.block,
        "end",
      ),
    while_statement: ($) =>
      seq("while", ":", $._expression, "do", $.block, "end"),

    return_statement: ($) => seq("return", $._expression),

    _lhs_expression: ($) => choice($.member_expression, $.identifier),

    assignment_expression: ($) =>
      prec.right(
        "assign",
        seq(
          field("left", choice($.parenthesized_expression, $._lhs_expression)),
          "=",
          field("right", $._expression),
        ),
      ),

    parenthesized_expression: ($) => seq("(", $._expression, ")"),

    _expressions: ($) => choice($._expression, $._sequence_expression),

    _sequence_expression: ($) => prec.right(commaSep1($._expression)),

    variable_declaration: ($) =>
      seq(
        field("returnType", $._type),
        ":",
        optional(field("mut", "mut")),
        field("name", $.identifier),
        optional($._initializer),
      ),

    _initializer: ($) => seq("=", field("value", $._expression)),

    _expression: ($) =>
      choice(
        $.primary_expression,
        $.assignment_expression,
        $.unary_expression,
        $.binary_expression,
        $.update_expression,
        $.call_expression,
        // $.postfix_expression,
        // $.prefix_expression,
      ),

    _expression_no_call: ($) =>
      choice(
        $.primary_expression,
        $.assignment_expression,
        $.unary_expression,
        $.binary_expression,
        $.update_expression,
      ),

    call_expression: ($) =>
      prec(
        9,
        seq(
          field("callee", $.primary_expression),
          field("arguments", $.arguments),
        ),
      ),

    arguments: ($) =>
      seq("(", optional(_list(field("name", $._expression), ",")), ")"),
    argument: ($) => field("name", $.identifier),

    binary_expression: ($) =>
      choice(
        ...[
          ["&&", 0],
          ["||", 1],
          ["!=", 2],
          ["==", 2],
          ["<", 3],
          ["<=", 3],
          [">=", 3],
          [">", 3],
          ["+", 4],
          ["-", 4],
          ["*", 5],
          ["/", 5],
          ["%", 5],
          ["^", 6, "right"],
        ].map(([operator, precedence, associativity]) =>
          (associativity === "right" ? prec.right : prec.left)(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression),
            ),
          ),
        ),
      ),

    // binary_expression: ($) =>
    //   choice(
    //     prec.right(8, seq($._expression, choice("++", "--"))),
    //     prec.right(7, seq(choice("!", "-", "++", "--"), $._expression)),
    //     prec.right(6, seq($._expression, "^", $._expression)),
    //     prec.left(5, seq($._expression, choice("*", "/", "%"), $._expression)),
    //     prec.left(4, seq($._expression, choice("+", "-"), $._expression)),
    //     prec.left(
    //       3,
    //       seq($._expression, choice("<", "<=", ">=", ">"), $._expression),
    //     ),
    //     prec.left(2, seq($._expression, choice("==", "!="), $._expression)),
    //     prec.left(1, seq($._expression, "&&", $._expression)),
    //     prec.left(0, seq($._expression, "||", $._expression)),
    //   ),

    // binary_expression: ($) =>
    //   seq(
    //     $._expression,
    //     field(
    //       "operator",
    //       choice(
    //         "+",
    //         "-",
    //         "*",
    //         "/",
    //         "%",
    //         "^",
    //         "&&",
    //         "||",
    //         "==",
    //         "!=",
    //         ">=",
    //         ">",
    //         "<",
    //         "<=",
    //       ),
    //     ),
    //     $._expression,
    //   ),

    unary_expression: ($) =>
      prec.left(
        7,
        seq(
          field("operator", choice("-", "!")),
          field("operand", $._expression),
        ),
      ),

    update_expression: ($) =>
      prec.left(
        8,
        choice(
          seq(
            field("operand", $._expression_no_call),
            field("operator", choice("++", "--")),
          ),
          seq(
            field("operator", choice("++", "--")),
            field("operand", $._expression_no_call),
          ),
        ),
      ),

    // prefix_expression: ($) =>
    //   prec.right(
    //     "prefix",
    //     seq(
    //       field("operator", choice("++", "--")),
    //       field("operand", $._expression),
    //     ),
    //   ),
    //
    // postfix_expression: ($) =>
    //   prec.left(
    //     "postfix",
    //     seq(
    //       field("operand", $._expression),
    //       field("operator", choice("++", "--")),
    //     ),
    //   ),

    primary_expression: ($) =>
      choice(
        $.member_expression,
        $.identifier,
        $._literal,
        $.parenthesized_expression,
        // $.call_expression,
      ),

    member_expression: ($) =>
      prec(
        10,
        seq(
          field("object", $._expression),
          ":",
          field("property", alias($.identifier, $.property_identifier)),
        ),
      ),

    comment: ($) => choice($.line_comment, $.block_comment),

    block_comment: (_) => /\/\*[^*]+\*\//,
    line_comment: (_) =>
      seq(
        "//",
        choice(
          seq(token.immediate(prec(2, /\/\//)), /.*/),
          token.immediate(prec(1, /.*/)),
        ),
      ),

    identifier: () => /[_a-zA-Z][_a-zA-Z0-9]*/,
    type_identifier: ($) => alias($.identifier, $.type_identifier),
    _type_identifier: ($) => alias($.identifier, $.type_identifier),

    _reserved_identifier: ($) => alias(choice("default"), $.identifier),

    _literal: ($) =>
      choice(
        $.string_literal,
        $.number_literal,
        $.boolean_literal,
        $.array_literal,
      ),

    array_literal: ($) => seq("[", commaSep(optional($._expression)), "]"),

    number_literal: () => {
      const decimal_digits = /[0-9][0-9_]*/;
      const signed_integer = seq(optional(choice("-", "+")), decimal_digits);
      const decimal_exponent_part = seq(choice("e", "E"), signed_integer);

      const decimal_literal = choice(
        seq(
          decimal_digits,
          ".",
          optional(decimal_digits),
          optional(decimal_exponent_part),
        ),
        seq(".", decimal_digits, optional(decimal_exponent_part)),
        seq(decimal_digits, optional(decimal_exponent_part)),
      );

      return token(decimal_literal);
    },
    string_literal: () => /"[^"]+"/,
    boolean_literal: () => choice("true", "false"),

    self: (_) => "self",
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
