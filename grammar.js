/**
 * @file Smartcode Treesitter Parser (SC)
 * @author RootEntry
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//

const PREC = {
  OR: 1,
  AND: 2,
  COMPARATIVE: 3,
}

const WHITESPACE = /\s/
const IDENTIFIER = /[_a-zA-Z][_a-zA-Z0-9]*/
const DECIMAL_DIGIT = /[0-9]/

const _numeral = (digit) => choice(repeat1(digit), seq(repeat1(digit), ".", repeat(digit)),
  seq(repeat(digit), ".", repeat1(digit)),
);

const _exponent_part = (...delimiters) => seq(choice(...delimiters), optional(choice("+", "-")), repeat1(DECIMAL_DIGIT))

const _list = (rule, seperator) => seq(rule, repeat(seq(seperator, rule)))

module.exports = grammar({
  name: "smartcode",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => seq(optional($.directive), optional($.fn_declaration)),

    directive: $ => "hi",

    fn_declaration: ($) => seq(field("returnType", choice($.identifier)), ":", "fn", field("name", choice($.identifier)), $._fn_body),
    _fn_body: ($) => seq("(", optional(field("parameters", $.parameter_list)), ")", "do", optional(field("body", $.block)), "end"),

    block: ($) => "h",

    parameter_list: ($) => _list(field("parameter", $.parameter), ","),

    parameter: ($) => seq(field("type", $.identifier), ":", field("name", $.identifier)),
    identifier: () => IDENTIFIER,
  }
});
