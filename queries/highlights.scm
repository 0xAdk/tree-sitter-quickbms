[
	"quickbmsver"

	"cleanexit"
	"exit"
	"exitifnofilesopen"

	"math"
	; "XMath"

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

	; "Loop"
	; "EndLoop"
	;
	; "Do"
	; "While"

	"continue"
	"break"

	"callfunction"
	"startfunction"
	"endfunction"

	"print"

	"append"
	"log"
	"clog"
	"slog"

	; "FindLoc"
	; "FindFileID"
	; "fread"
	; "fwrite"
	; "fseek"
	; "IDString"
	; "ID"
	; "memcmp"
	; "strcmp"
	; "ImpType"
	; "ExtractFile"
	; "NameCRC"
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
	; "String"
	; "Case"
	; "ComType"
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
	; "FileXOR"
	; "FileCrypt"
	; "Strlen"
	; "Debug"
	; "Padding"
	; "Encryption"
	; "CRCHash"
	; "MessageBox"
	; "SortArray"
	; "SearchArray"
	; "ScanDir"
	; "CallDLL"
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
