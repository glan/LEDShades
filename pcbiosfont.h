// Standard ASCII portion of PC BIOS style font

char Font[127][8] PROGMEM = {
  	{0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000},	// ASCII value 0x00 " <null> "
	{0b01111110,0b10000001,0b10010101,0b10110001,0b10110001,0b10010101,0b10000001,0b01111110},	// ASCII value 0x01 " <smile> "
	{0b01111110,0b11111111,0b11101011,0b11001111,0b11001111,0b11101011,0b11111111,0b01111110},	// ASCII value 0x02 " <inverse smile> "
	{0b00001110,0b00011111,0b00111111,0b01111110,0b00111111,0b00011111,0b00001110,0b00000000},	// ASCII value 0x03 " <heart> "
	{0b00001000,0b00011100,0b00111110,0b01111111,0b00111110,0b00011100,0b00001000,0b00000000},	// ASCII value 0x04 " <diamond> "
	{0b00111000,0b00111010,0b10011111,0b11111111,0b10011111,0b00111010,0b00111000,0b00000000},	// ASCII value 0x05 " <club> "
	{0b00010000,0b00111000,0b10111100,0b11111111,0b10111100,0b00111000,0b00010000,0b00000000},	// ASCII value 0x06 " <spade> "
	{0b00000000,0b00000000,0b00011000,0b00111100,0b00111100,0b00011000,0b00000000,0b00000000},	// ASCII value 0x07 " <dot> "
	{0b11111111,0b11111111,0b11100111,0b11000011,0b11000011,0b11100111,0b11111111,0b11111111},	// ASCII value 0x08 " <inverse dot> "
	{0b00000000,0b00111100,0b01100110,0b01000010,0b01000010,0b01100110,0b00111100,0b00000000},	// ASCII value 0x09 " <circle> "
	{0b11111111,0b11000011,0b10011001,0b10111101,0b10111101,0b10011001,0b11000011,0b11111111},	// ASCII value 0x0A " <inverse circle> "
	{0b01110000,0b11111000,0b10001000,0b10001000,0b11111101,0b01111111,0b00000111,0b00001111},	// ASCII value 0x0B " <male sign> "
	{0b00000000,0b01001110,0b01011111,0b11110001,0b11110001,0b01011111,0b01001110,0b00000000},	// ASCII value 0x0C " <female sign> "
	{0b11000000,0b11100000,0b11111111,0b01111111,0b00000101,0b00000101,0b00000111,0b00000111},	// ASCII value 0x0D " <quarter note> "
	{0b11000000,0b11111111,0b01111111,0b00000101,0b00000101,0b01100101,0b01111111,0b00111111},	// ASCII value 0x0E " <eighth note> "
	{0b10011001,0b01011010,0b00111100,0b11100111,0b11100111,0b00111100,0b01011010,0b10011001},	// ASCII value 0x0F " <burst> "
	{0b01111111,0b00111110,0b00111110,0b00011100,0b00011100,0b00001000,0b00001000,0b00000000},	// ASCII value 0x10 " <right triangle> "
	{0b00001000,0b00001000,0b00011100,0b00011100,0b00111110,0b00111110,0b01111111,0b00000000},	// ASCII value 0x11 " <left triangle> "
	{0b00000000,0b00100100,0b01100110,0b11111111,0b11111111,0b01100110,0b00100100,0b00000000},	// ASCII value 0x12 " <updown> "
	{0b00000000,0b01011111,0b01011111,0b00000000,0b00000000,0b01011111,0b01011111,0b00000000},	// ASCII value 0x13 " <double exclaim> "
	{0b00000110,0b00001111,0b00001001,0b01111111,0b01111111,0b00000001,0b01111111,0b01111111},	// ASCII value 0x14 " <paragraph> "
	{0b11011010,0b10111111,0b10100101,0b10100101,0b11111101,0b01011001,0b00000011,0b00000010},	// ASCII value 0x15 " <swirl>  "
	{0b00000000,0b01110000,0b01110000,0b01110000,0b01110000,0b01110000,0b01110000,0b00000000},	// ASCII value 0x16 " <half block> "
	{0b10000000,0b10010100,0b10110110,0b11111111,0b11111111,0b10110110,0b10010100,0b10000000},	// ASCII value 0x17 " <updown underscore> "
	{0b00000000,0b00000100,0b00000110,0b01111111,0b01111111,0b00000110,0b00000100,0b00000000},	// ASCII value 0x18 " <up> "
	{0b00000000,0b00010000,0b00110000,0b01111111,0b01111111,0b00110000,0b00010000,0b00000000},	// ASCII value 0x19 " <down> "
	{0b00001000,0b00001000,0b00001000,0b00101010,0b00111110,0b00011100,0b00001000,0b00000000},	// ASCII value 0x1A " <right> "
	{0b00001000,0b00011100,0b00111110,0b00101010,0b00001000,0b00001000,0b00001000,0b00000000},	// ASCII value 0x1B " <left> "
	{0b00111100,0b00111100,0b00100000,0b00100000,0b00100000,0b00100000,0b00100000,0b00000000},	// ASCII value 0x1C " <enter> "
	{0b00001000,0b00011100,0b00111110,0b00001000,0b00001000,0b00111110,0b00011100,0b00001000},	// ASCII value 0x1D " <leftright> "
	{0b00110000,0b00111000,0b00111100,0b00111110,0b00111110,0b00111100,0b00111000,0b00110000},	// ASCII value 0x1E " <up triangle> "
	{0b00000110,0b00001110,0b00011110,0b00111110,0b00111110,0b00011110,0b00001110,0b00000110},	// ASCII value 0x1F " <down triangle> "
	{0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000},	// ASCII value  32 "   "
	{0b00000000,0b00000110,0b01011111,0b01011111,0b00000110,0b00000000,0b00000000,0b00000000},	// ASCII value  33 " ! "
	{0b00000000,0b00000111,0b00000111,0b00000000,0b00000111,0b00000111,0b00000000,0b00000000},	// ASCII value  34 " " "
	{0b00010100,0b01111111,0b01111111,0b00010100,0b01111111,0b01111111,0b00010100,0b00000000},	// ASCII value  35 " # "
	{0b00100100,0b00101110,0b01101011,0b01101011,0b00111010,0b00010010,0b00000000,0b00000000},	// ASCII value  36 " $ "
	{0b01000110,0b01100110,0b00110000,0b00011000,0b00001100,0b01100110,0b01100010,0b00000000},	// ASCII value  37 " % "
	{0b00110000,0b01111010,0b01001111,0b01011101,0b00110111,0b01111010,0b01001000,0b00000000},	// ASCII value  38 " & "
	{0b00000100,0b00000111,0b00000011,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000},	// ASCII value  39 " ' "
	{0b00000000,0b00011100,0b00111110,0b01100011,0b01000001,0b00000000,0b00000000,0b00000000},	// ASCII value  40 " ( "
	{0b00000000,0b01000001,0b01100011,0b00111110,0b00011100,0b00000000,0b00000000,0b00000000},	// ASCII value  41 " ) "
	{0b00001000,0b00101010,0b00111110,0b00011100,0b00011100,0b00111110,0b00101010,0b00001000},	// ASCII value  42 " * "
	{0b00001000,0b00001000,0b00111110,0b00111110,0b00001000,0b00001000,0b00000000,0b00000000},	// ASCII value  43 " + "
	{0b00000000,0b10100000,0b11100000,0b01100000,0b00000000,0b00000000,0b00000000,0b00000000},	// ASCII value  44 " , "
	{0b00001000,0b00001000,0b00001000,0b00001000,0b00001000,0b00001000,0b00000000,0b00000000},	// ASCII value  45 " - "
	{0b00000000,0b00000000,0b01100000,0b01100000,0b00000000,0b00000000,0b00000000,0b00000000},	// ASCII value  46 " . "
	{0b01100000,0b00110000,0b00011000,0b00001100,0b00000110,0b00000011,0b00000001,0b00000000},	// ASCII value  47 " / "
	{0b00111110,0b01111111,0b01011001,0b01001101,0b01111111,0b00111110,0b00000000,0b00000000},	// ASCII value  48 " 0 "
	{0b01000010,0b01000010,0b01111111,0b01111111,0b01000000,0b01000000,0b00000000,0b00000000},	// ASCII value  49 " 1 "
	{0b01100010,0b01110011,0b01011001,0b01001001,0b01101111,0b01100110,0b00000000,0b00000000},	// ASCII value  50 " 2 "
	{0b00100010,0b01100011,0b01001001,0b01001001,0b01111111,0b00110110,0b00000000,0b00000000},	// ASCII value  51 " 3 "
	{0b00011000,0b00011100,0b00010110,0b00010011,0b01111111,0b01111111,0b00010000,0b00000000},	// ASCII value  52 " 4 "
	{0b00100111,0b01100111,0b01000101,0b01000101,0b01111101,0b00111001,0b00000000,0b00000000},	// ASCII value  53 " 5 "
	{0b00111100,0b01111110,0b01001011,0b01001001,0b01111001,0b00110000,0b00000000,0b00000000},	// ASCII value  54 " 6 "
	{0b00000011,0b01100011,0b01110001,0b00011001,0b00001111,0b00000111,0b00000000,0b00000000},	// ASCII value  55 " 7 "
	{0b00110110,0b01111111,0b01001001,0b01001001,0b01111111,0b00110110,0b00000000,0b00000000},	// ASCII value  56 " 8 "
	{0b00000110,0b01001111,0b01001001,0b01101001,0b00111111,0b00011110,0b00000000,0b00000000},	// ASCII value  57 " 9 "
	{0b00000000,0b00000000,0b01101100,0b01101100,0b00000000,0b00000000,0b00000000,0b00000000},	// ASCII value  58 " : "
	{0b00000000,0b10100000,0b11101100,0b01101100,0b00000000,0b00000000,0b00000000,0b00000000},	// ASCII value  59 " ; "
	{0b00001000,0b00011100,0b00110110,0b01100011,0b01000001,0b00000000,0b00000000,0b00000000},	// ASCII value  60 " < "
	{0b00010100,0b00010100,0b00010100,0b00010100,0b00010100,0b00010100,0b00000000,0b00000000},	// ASCII value  61 " = "
	{0b00000000,0b01000001,0b01100011,0b00110110,0b00011100,0b00001000,0b00000000,0b00000000},	// ASCII value  62 " > "
	{0b00000010,0b00000011,0b11010001,0b11011001,0b00001111,0b00000110,0b00000000,0b00000000},	// ASCII value  63 " ? "
	{0b00111110,0b01111111,0b01000001,0b01011101,0b01011101,0b00011111,0b00011110,0b00000000},	// ASCII value  64 " @ "
	{0b01111100,0b01111110,0b00010011,0b00010011,0b01111110,0b01111100,0b00000000,0b00000000},	// ASCII value  65 " A "
	{0b01000001,0b01111111,0b01111111,0b01001001,0b01001001,0b01111111,0b00110110,0b00000000},	// ASCII value  66 " B "
	{0b00011100,0b00111110,0b01100011,0b01000001,0b01000001,0b01100011,0b00100010,0b00000000},	// ASCII value  67 " C "
	{0b01000001,0b01111111,0b01111111,0b01000001,0b01100011,0b01111111,0b00011100,0b00000000},	// ASCII value  68 " D "
	{0b01000001,0b01111111,0b01111111,0b01001001,0b01011101,0b01000001,0b01100011,0b00000000},	// ASCII value  69 " E "
	{0b01000001,0b01111111,0b01111111,0b01001001,0b00011101,0b00000001,0b00000011,0b00000000},	// ASCII value  70 " F "
	{0b00011100,0b00111110,0b01100011,0b01000001,0b01010001,0b01110011,0b01110010,0b00000000},	// ASCII value  71 " G "
	{0b01111111,0b01111111,0b00001000,0b00001000,0b01111111,0b01111111,0b00000000,0b00000000},	// ASCII value  72 " H "
	{0b00000000,0b01000001,0b01111111,0b01111111,0b01000001,0b00000000,0b00000000,0b00000000},	// ASCII value  73 " I "
	{0b00110000,0b01110000,0b01000000,0b01000001,0b01111111,0b00111111,0b00000001,0b00000000},	// ASCII value  74 " J "
	{0b01000001,0b01111111,0b01111111,0b00001000,0b00011100,0b01110111,0b01100011,0b00000000},	// ASCII value  75 " K "
	{0b01000001,0b01111111,0b01111111,0b01000001,0b01000000,0b01100000,0b01110000,0b00000000},	// ASCII value  76 " L "
	{0b01111111,0b01111111,0b00000110,0b00001100,0b00000110,0b01111111,0b01111111,0b00000000},	// ASCII value  77 " M "
	{0b01111111,0b01111111,0b00000110,0b00001100,0b00011000,0b01111111,0b01111111,0b00000000},	// ASCII value  78 " N "
	{0b00011100,0b00111110,0b01100011,0b01000001,0b01100011,0b00111110,0b00011100,0b00000000},	// ASCII value  79 " O "
	{0b01000001,0b01111111,0b01111111,0b01001001,0b00001001,0b00001111,0b00000110,0b00000000},	// ASCII value  80 " P "
	{0b00011110,0b00111111,0b00100001,0b01110001,0b01111111,0b01011110,0b00000000,0b00000000},	// ASCII value  81 " Q "
	{0b01000001,0b01111111,0b01111111,0b00011001,0b00111001,0b01101111,0b01000110,0b00000000},	// ASCII value  82 " R "
	{0b00100110,0b01100111,0b01001101,0b01011001,0b01111011,0b00110010,0b00000000,0b00000000},	// ASCII value  83 " S "
	{0b00000011,0b01000001,0b01111111,0b01111111,0b01000001,0b00000011,0b00000000,0b00000000},	// ASCII value  84 " T "
	{0b01111111,0b01111111,0b01000000,0b01000000,0b01111111,0b01111111,0b00000000,0b00000000},	// ASCII value  85 " U "
	{0b00011111,0b00111111,0b01100000,0b01100000,0b00111111,0b00011111,0b00000000,0b00000000},	// ASCII value  86 " V "
	{0b01111111,0b01111111,0b00110000,0b00011000,0b00110000,0b01111111,0b01111111,0b00000000},	// ASCII value  87 " W "
	{0b01100011,0b01110111,0b00011100,0b00001000,0b00011100,0b01110111,0b01100011,0b00000000},	// ASCII value  88 " X "
	{0b00000111,0b01001111,0b01111000,0b01111000,0b01001111,0b00000111,0b00000000,0b00000000},	// ASCII value  89 " Y "
	{0b01100111,0b01110011,0b01011001,0b01001101,0b01000111,0b01100011,0b01110001,0b00000000},	// ASCII value  90 " Z "
	{0b00000000,0b01111111,0b01111111,0b01000001,0b01000001,0b00000000,0b00000000,0b00000000},	// ASCII value  91 " [ "
	{0b00000001,0b00000011,0b00000110,0b00001100,0b00011000,0b00110000,0b01100000,0b00000000},	// ASCII value  92 " \ "
	{0b00000000,0b01000001,0b01000001,0b01111111,0b01111111,0b00000000,0b00000000,0b00000000},	// ASCII value  93 " ] "
	{0b00001000,0b00001100,0b00000110,0b00000011,0b00000110,0b00001100,0b00001000,0b00000000},	// ASCII value  94 " ^ "
	{0b10000000,0b10000000,0b10000000,0b10000000,0b10000000,0b10000000,0b10000000,0b10000000},	// ASCII value  95 " _ "
	{0b00000000,0b00000000,0b00000011,0b00000111,0b00000100,0b00000000,0b00000000,0b00000000},	// ASCII value  96 " ` "
	{0b00100000,0b01110100,0b01010100,0b01010100,0b00111100,0b01111000,0b01000000,0b00000000},	// ASCII value  97 " a "
	{0b01000001,0b00111111,0b01111111,0b01000100,0b01000100,0b01111100,0b00111000,0b00000000},	// ASCII value  98 " b "
	{0b00111000,0b01111100,0b01000100,0b01000100,0b01101100,0b00101000,0b00000000,0b00000000},	// ASCII value  99 " c "
	{0b00110000,0b01111000,0b01001000,0b01001001,0b00111111,0b01111111,0b01000000,0b00000000},	// ASCII value 100 " d "
	{0b00111000,0b01111100,0b01010100,0b01010100,0b01011100,0b00011000,0b00000000,0b00000000},	// ASCII value 101 " e "
	{0b01001000,0b01111110,0b01111111,0b01001001,0b00000011,0b00000010,0b00000000,0b00000000},	// ASCII value 102 " f "
	{0b10011000,0b10111100,0b10100100,0b10100100,0b11111000,0b01111100,0b00000100,0b00000000},	// ASCII value 103 " g "
	{0b01000001,0b01111111,0b01111111,0b00001000,0b00000100,0b01111100,0b01111000,0b00000000},	// ASCII value 104 " h "
	{0b00000000,0b01000100,0b01111101,0b01111101,0b01000000,0b00000000,0b00000000,0b00000000},	// ASCII value 105 " i "
	{0b01000000,0b11000100,0b10000100,0b11111101,0b01111101,0b00000000,0b00000000,0b00000000},	// ASCII value 106 " j "
	{0b01000001,0b01111111,0b01111111,0b00010000,0b00111000,0b01101100,0b01000100,0b00000000},	// ASCII value 107 " k "
	{0b00000000,0b01000001,0b01111111,0b01111111,0b01000000,0b00000000,0b00000000,0b00000000},	// ASCII value 108 " l "
	{0b01111100,0b01111100,0b00001100,0b00011000,0b00001100,0b01111100,0b01111000,0b00000000},	// ASCII value 109 " m "
	{0b01111100,0b01111100,0b00000100,0b00000100,0b01111100,0b01111000,0b00000000,0b00000000},	// ASCII value 110 " n "
	{0b00111000,0b01111100,0b01000100,0b01000100,0b01111100,0b00111000,0b00000000,0b00000000},	// ASCII value 111 " o "
	{0b10000100,0b11111100,0b11111000,0b10100100,0b00100100,0b00111100,0b00011000,0b00000000},	// ASCII value 112 " p "
	{0b00011000,0b00111100,0b00100100,0b10100100,0b11111000,0b11111100,0b10000100,0b00000000},	// ASCII value 113 " q "
	{0b01000100,0b01111100,0b01111000,0b01000100,0b00011100,0b00011000,0b00000000,0b00000000},	// ASCII value 114 " r "
	{0b01001000,0b01011100,0b01010100,0b01010100,0b01110100,0b00100100,0b00000000,0b00000000},	// ASCII value 115 " s "
	{0b00000000,0b00000100,0b00111110,0b01111111,0b01000100,0b00100100,0b00000000,0b00000000},	// ASCII value 116 " t "
	{0b00111100,0b01111100,0b01000000,0b01000000,0b00111100,0b01111100,0b01000000,0b00000000},	// ASCII value 117 " u "
	{0b00011100,0b00111100,0b01100000,0b01100000,0b00111100,0b00011100,0b00000000,0b00000000},	// ASCII value 118 " v "
	{0b00111100,0b01111100,0b01100000,0b00110000,0b01100000,0b01111100,0b00111100,0b00000000},	// ASCII value 119 " w "
	{0b01000100,0b01101100,0b00111000,0b00010000,0b00111000,0b01101100,0b01000100,0b00000000},	// ASCII value 120 " x "
	{0b10011100,0b10111100,0b10100000,0b10100000,0b11111100,0b01111100,0b00000000,0b00000000},	// ASCII value 121 " y "
	{0b01001100,0b01100100,0b01110100,0b01011100,0b01001100,0b01100100,0b00000000,0b00000000},	// ASCII value 122 " z "
	{0b00001000,0b00001000,0b00111110,0b01110111,0b01000001,0b01000001,0b00000000,0b00000000},	// ASCII value 123 " { "
	{0b00000000,0b00000000,0b00000000,0b01110111,0b01110111,0b00000000,0b00000000,0b00000000},	// ASCII value 124 " | "
	{0b01000001,0b01000001,0b01110111,0b00111110,0b00001000,0b00001000,0b00000000,0b00000000},	// ASCII value 125 " } "
	{0b00000010,0b00000011,0b00000001,0b00000011,0b00000010,0b00000011,0b00000001,0b00000000},	// ASCII value 126 " ~ "
};
