[
	"math"

	"set"
	"savepos"

	"getvarchr"
	"getarray"
	"get"
	"getdstring"
	"getct"
	"getbits"

	"putvarchr"
	"putarray"
	"put"
	"putdstring"
	"putct"
	"putbits"

	"goto"

	"if"
	"elif"
	"else"
	"endif"

	"for"
	"next"

	"callfunction"
	"startfunction"
	"endfunction"

	"print"
	"log"
] @keyword

(_ type: _ @type.builtin)
(_ op: _ @operator)

(call_function_statement name: _ @function)
(start_function_statement name: _ @function)

(comment) @comment
