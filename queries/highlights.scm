; Identifier conventions
; Assume all caps names are constants

(let_binding
  (identifier) @variable)

; (variable_declaration name: (identifier) @function)
; (variable_declaration
;   (identifier) @variable)

; (assignment_expression
;   left: (identifier) @function)


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

["("
 ")"
 "["
 "]"] @punctuation.bracket

[":"
 ","
 "<>"
 ";"] @punctuation.delimiter

["let"
 "out"
 "if"
 "else"] @keyword

["*"
"/"
"%"
"**"
">"
"<"
"<="
"&&"
"||"
">="
"="
"=="
"!="
"+"
"++"
"--"
"-"] @operator

