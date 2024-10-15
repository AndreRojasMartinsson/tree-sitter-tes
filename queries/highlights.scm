
; Identifiers
(type_identifier) @type
(primitive_type) @type.builtin

; Identifier conventions
; Assume all caps names are constants

(incl_directive
  path: (path) @tag)

(pub_directive
  name: (identifier) @tag)



(function_declaration 
  (identifier) @function)

; (variable_declaration name: (identifier) @function)
(variable_declaration
  (identifier) @variable)

(assignment_expression
  left: (identifier) @function)


; (identifier) @variable

(call_expression
 callee: (primary_expression) @function)

(member_expression
  property: (property_identifier) @function)

(member_expression
  object: (_expression) @function.builtin)

(string_literal) @string
(number_literal) @number
; (boolean_literal) @boolean
(boolean_literal) @constant.builtin

(line_comment) @comment
(block_comment) @comment


((identifier) @variable.builtin
 (#match? @variable.builtin "^(log|Math|Object|Array|Number|Map|Set)$"))


((identifier) @punctuation.delimiter
  (#match? @punctuation.delimiter "^_[_a-z][a-z0-9_]+$"))

((identifier) @constant
  (#match? @constant "^[A-Z][A-Z0-9_]+$"))

["("
 ")"
 "["
 "]"] @punctuation.bracket

[":"
 ","] @punctuation.delimiter

(parameter name: (identifier) @variable.parameter)
; (argument name: (identifier) @variable.parameter)

["do"
 "end"
 "fn"
 "while"
 "for"
 "if"
 "else"
 "return"
 "mut"
 "@incl"
 "@pub"] @keyword

(self) @variable.builtin

["*"
"/"
"%"
"^"
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


; ;;; Builtins
; ;; Keywords
; ["if"
;  "do"
;  "else"
;  "end"] @keyword.conditional
;
; ["for"
;  "do"
;  "end"] @keyword.repeat
;
; ["while"
;  "do"
;  "end"] @keyword.repeat
;
; ["return"
;  (return_statement)] @keyword.return
;
; ["do"
;  "end"] @keyword
;
; ;; Operators
; [
;  "!"
;  "&&"
;  "||"
;  ] @keyword.operator
;
; ["="
;  "!="
;  "=="
;  "<="
;  ">="
;  "<"
;  ">"
;  "+"
;  "-"
;  "%"
;  "/"
;  "*"
;  "^"] @operator
;
; ;; Punctuation
; ["," ":" "."] @punctuation.delimiter
; ; [(left_paren)
;  ; (right_paren)] @punctuation.bracket
;
; ;; Variables
; (identifier) @variable
; (
;  (identifier) @variable.builtin
;  (#match? @variable.builtin "self"))
;
; ;; Constants
; (boolean_literal) @boolean
; (string_literal) @string
; (number_literal) @number
;
; ;; Functions
; (fn_declaration name: (identifier) @function)
; (function_call_paren) @function.bracket
; ("fn") @keyword.function
;
; ;; Type Declarations
; (type_identifier) @type
;
; ;; Literal
; (number_literal) @number
; (string_literal) @string
; (boolean_literal) @number
;
; ;; Variable assignments
; "=" @operator
;
; ;; Control flow
; "for" @keyword
; "if" @keyword
; "else" @keyword
;
; ;; Function calls and method access
; (identifier) @function.call
;
; ;; Comments
; ; "//.*" @keyword

