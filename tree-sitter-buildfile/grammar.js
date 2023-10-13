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
        $.if_definition,
        // TODO: other kinds of definitions
      ),

    if_definition: ($) =>
      seq(
        "if",
        field("test_expression", $.test_expression),
        field("block", $.block),
      ),

    test_expression: ($) =>
      seq(
        "(",
        // TODO: test
        $._test,
        ")",
      ),

    _type: (_) =>
      choice(
        "bool",
        // TODO: other kinds of types
      ),
    _test: ($) => choice(seq($._expression, "==", $._expression)),

    block: ($) => seq("{", repeat($._statement), "}"),

    _statement: ($) => choice(),
    //    $.return_statement,
    // TODO: other kinds of statements

    // return_statement: ($) => seq("return", $._expression, ";"),

    _expression: ($) =>
      choice(
        $.identifier,
        $.number,
        $.string,
        $.variable_lookup,
        // TODO: other kinds of expressions
      ),

    _string_literal: (_) => /['|"]/,
    string: ($) => seq($._string_literal, $._string_content, $._string_literal),
    _string_content: (_) => /[\w]+/,

    identifier: (_) => /[\w]+/,

    number: (_) => /\d+/,

    variable_lookup: ($) => seq($._lookup_token, $.variable),

    variable: ($) =>
      seq($.identifier, repeat(seq($.member_access, $.identifier))),

    member_access: (_) => ".",

    _lookup_token: (_) => "$",
  },
});
