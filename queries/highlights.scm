[
	"quickbmsver"

	"cleanexit"
	"exit"
	"exitifnofilesopen"

	"imptype"

	"string"
	"strlen"
	"math"
	"xmath"
	"sortarray"
	"findloc"

	"scandir"
	"open"
	"filexor"
	"filerot"
	"filecrypt"
	"calldll"

	"set"
	"savepos"

	"endian"
	"reverseshort"
	"flipshort"
	"reverselong"
	"fliplong"
	"reverselonglong"
	"fliplonglong"

	"idstring"
	"id"
	"memcmp"
	"strcmp"

	"getvarchr"
	"getarray"
	"get"
	"getdstring"
	"getct"
	"getbits"
	; "GetLong"
	; "GetInt"
	; "GetByte"
	; "GetString"
	; "GetNullString"

	"putvarchr"
	"putarray"
	"put"
	"putdstring"
	"putct"
	"putbits"

	"goto"
	"padding"

	"if"
	"elif"
	"elseif"
	"else"
	; "ifequal"
	; "ifgreater"
	; "iflower"
	"endif"

	"for"
	"next"
	"prev"

	"do"
	"loop"
	"while"
	"endloop"

	"continue"
	"break"

	"callfunction"
	"startfunction"
	"endfunction"

	"print"

	"namecrc"
	"append"
	"encryption"
	"log"
	"comtype"
	"codepage"
	"clog"
	"slog"

	; "FindFileID"
	; "fread"
	; "fwrite"
	; "fseek"
	; "ExtractFile"
	; "Add"
	; "Inc"
	; "Subst"
	; "Dec"
	; "Multiply"
	; "Divide"
	; "Up"
	; "Down"
	; "ftell"
	; "SETFILECNT"
	; "SETBYTESREAD"
	; "Case"
	; "PROMPTUSER"
	; "EVENTS"
	; "SEPPATH"
	; "NOFILENAMES"
	; "WriteLong"
	; "StrCReplace"
	; "StrEResizeC"
	; "SeperateHeader"
	; "Debug"
	; "CRCHash"
	; "MessageBox"
	; "SearchArray"
	; "include"
	; "Game"
	; "NOP"
	; "template"
	; "description"
	; "applies_to"
	; "fixed_start"
	; "sector-aligned"
	; "big-endian"
	; "little-endian"
	; "requires"
	; "begin"
	; "end"
	; "hex"
	; "move"
	; "uint_flex"
	; "section"
	; "endsection"
	; "numbering"
	; "zstring"
	; "Label"
	; "ConvertDataToBytes"
	; "DirectoryExists"
	; "FEof"
	; "FSkip"
	; "reimport"
	; "ReadByte"
	; "ReadDouble"
	; "ReadFloat"
	; "ReadHFloat"
	; "ReadQuad"
	; "ReadUInt"
	; "ReadUShort"
	; "ReadDString"
] @keyword

(_ type: _ @type.builtin)
(c_type) @type
(c_type_qualifier) @type.qualifier

(number) @number
(_ op: _ @operator)

(call_function_statement name: _ @function)
(start_function_statement name: _ @function)

(escape_sequence) @string.escape
(string) @string
(character) @character

[ ";" ] @punctuation.delimiter
(ignored) @comment
(comment) @comment
