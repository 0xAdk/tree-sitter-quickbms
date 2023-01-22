[
	"quickbmsver"

	"cleanexit"
	"exit"
	"exitifnofilesopen"

	"math"

	"open"

	"set"
	"savepos"

	"endian"

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
	"prev"

	"continue"
	"break"

	"callfunction"
	"startfunction"
	"endfunction"

	"print"
	"log"
	"clog"
	"slog"

] @keyword

(_ type: _ @type.builtin)
(_ op: _ @operator)

(call_function_statement name: _ @function)
(start_function_statement name: _ @function)

(number) @number

(escape_sequence) @string.escape
(string) @string
(character) @character

(comment) @comment
