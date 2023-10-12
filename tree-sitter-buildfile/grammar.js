/**
 * @file Buildfile grammar for tree-sitter
 * @author Robin Bärtschi
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "buildfile",
  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.if_definition
        // TODO: other kinds of definitions
      ),

    if_definition: ($) =>
      seq(
        $.if_keyword,
        field("test_expression", $.test_expression),
        field("block", $.block)
      ),

    if_keyword: ($) => "if",

    test_expression: ($) =>
      seq(
        "(",
        // TODO: test
        $._test,
        ")"
      ),

    _type: ($) =>
      choice(
        "bool"
        // TODO: other kinds of types
      ),
    _test: ($) => choice(seq($._expression, "==", $._expression)),

    block: ($) => seq("{", repeat($._statement), "}"),

    _statement: ($) =>
      choice(
        $.return_statement
        // TODO: other kinds of statements
      ),

    return_statement: ($) => seq("return", $._expression, ";"),

    _expression: ($) =>
      choice(
        $.identifier,
        $.number,
        $.string,
        $.variable_lookup
        // TODO: other kinds of expressions
      ),

    _string_literal: ($) => /['|"]/,
    string: ($) => seq($._string_literal, $._string_content, $._string_literal),
    _string_content: ($) => /[\w]+/,

    identifier: ($) => /[\w]+/,

    number: ($) => /\d+/,

    variable_lookup: ($) => seq($._lookup_token, $.variable),

    variable: ($) =>
      seq($.identifier, repeat(seq($.member_access, $.identifier))),

    member_access: ($) => ".",

    _lookup_token: ($) => "$",
  },
});