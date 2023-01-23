[
	"quickbmsver"

	"cleanexit"
	"exit"
	"exitifnofilesopen"

	"string"
	"strlen"
	"math"
	"xmath"
	"findloc"

	"open"
	"filexor"
	"calldll"

	"set"
	"savepos"

	"endian"

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
	"clog"
	"slog"

	; "FindFileID"
	; "fread"
	; "fwrite"
	; "fseek"
	; "ImpType"
	; "ExtractFile"
	; "Codepage"
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
	; "ReverseShort"
	; "FlipShort"
	; "ReverseLong"
	; "FlipLong"
	; "ReverseLongLong"
	; "FlipLongLong"
	; "PROMPTUSER"
	; "EVENTS"
	; "SEPPATH"
	; "NOFILENAMES"
	; "WriteLong"
	; "StrCReplace"
	; "StrEResizeC"
	; "SeperateHeader"
	; "FileCrypt"
	; "Debug"
	; "CRCHash"
	; "MessageBox"
	; "SortArray"
	; "SearchArray"
	; "ScanDir"
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

(_ op: _ @operator)

(call_function_statement name: _ @function)
(start_function_statement name: _ @function)

(number) @number

(escape_sequence) @string.escape
(string) @string
(character) @character

[ ";" ] @punctuation.delimiter
(ignored) @comment
(comment) @comment
