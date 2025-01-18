; Identifier conventions
; Assume all caps names are constants
(type_identifier) @type
(primitive_type) @type.builtin

(let_binding
  (identifier) @variable)

(function_declaration 
  (identifier) @function)

(call_expression
 callee: (identifier) @function)

(assignment_expression
  left: (identifier) @variable)


; (identifier) @variable

(string_literal) @string
(number_literal) @number

(line_comment) @comment

; ((identifier) @variable.builtin
;  (#match? @variable.builtin "^(log|Math|Object|Array|Number|Map|Set)$"))


((identifier) @punctuation.delimiter
  (#match? @punctuation.delimiter "^_[_a-z][a-z0-9_]+$"))

((identifier) @constant
  (#match? @constant "^[A-Z][A-Z0-9_]+$"))

["{"
 "}"
 "("
 ")"
 "["
 "]"] @punctuation.bracket

(parameter name: (identifier) @variable.parameter)
; (argument name: (identifier) @variable.parameter)

[","
 "<>"
 ":"
 ";"] @punctuation.delimiter

["let"
 "out"
 "if"
 "while"
 "for"
 "func"
 "pub"
 "else"] @keyword

["*"
"/"
"%"
"*<>"
"/<>"
"+<>"
"-<>"
"%<>"
">"
"("
")"
"<"
"<="
"&&"
"||"
">="
"=="
"!="
"+"
"<<"
">>"
"-"] @operator

