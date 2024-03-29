#include <string>
#include <map>

// Makes the written keys to virtual keys
std::map<std::string, int> keyMap = {
    {"0x01", 0x01},
    {"0x02", 0x02},
    {"0x03", 0x03},
    {"0x04", 0x04},
    {"0x05", 0x05},
    {"0x06", 0x06},
    {"0x08", 0x08},
    {"0x09", 0x09},
    {"0x0C", 0x0C},
    {"0x0D", 0x0D},
    {"0x13", 0x13},
    {"0x21", 0x21},
    {"0x22", 0x22},
    {"0x23", 0x23},
    {"0x24", 0x24},
    {"0x25", 0x25},
    {"0x26", 0x26},
    {"0x27", 0x27},
    {"0x28", 0x28},
    {"0x29", 0x29},
    {"0x2A", 0x2A},
    {"0x2B", 0x2B},
    {"0x2C", 0x2C},
    {"0x2D", 0x2D},
    {"0x2E", 0x2E},
    {"0x2F", 0x2F},
    {"0x30", 0x30},
    {"0x31", 0x31},
    {"0x32", 0x32},
    {"0x33", 0x33},
    {"0x34", 0x34},
    {"0x35", 0x35},
    {"0x36", 0x36},
    {"0x37", 0x37},
    {"0x38", 0x38},
    {"0x39", 0x39},
    {"0x41", 0x41},
    {"0x42", 0x42},
    {"0x43", 0x43},
    {"0x44", 0x44},
    {"0x45", 0x45},
    {"0x46", 0x46},
    {"0x47", 0x47},
    {"0x48", 0x48},
    {"0x49", 0x49},
    {"0x4A", 0x4A},
    {"0x4B", 0x4B},
    {"0x4C", 0x4C},
    {"0x4D", 0x4D},
    {"0x4E", 0x4E},
    {"0x4F", 0x4F},
    {"0x50", 0x50},
    {"0x51", 0x51},
    {"0x52", 0x52},
    {"0x53", 0x53},
    {"0x54", 0x54},
    {"0x55", 0x55},
    {"0x56", 0x56},
    {"0x57", 0x57},
    {"0x58", 0x58},
    {"0x59", 0x59},
    {"0x5A", 0x5A},
    {"0x60", 0x60},
    {"0x61", 0x61},
    {"0x62", 0x62},
    {"0x63", 0x63},
    {"0x64", 0x64},
    {"0x65", 0x65},
    {"0x66", 0x66},
    {"0x67", 0x67},
    {"0x68", 0x68},
    {"0x69", 0x69},
    {"0x6A", 0x6A},
    {"0x6B", 0x6B},
    {"0x6C", 0x6C},
    {"0x6D", 0x6D},
    {"0x6E", 0x6E},
    {"0x6F", 0x6F},
    {"0x70", 0x70},
    {"0x71", 0x71},
    {"0x72", 0x72},
    {"0x73", 0x73},
    {"0x74", 0x74},
    {"0x75", 0x75},
    {"0x76", 0x76},
    {"0x77", 0x77},
    {"0x78", 0x78},
    {"0x79", 0x79},
    {"0x7A", 0x7A},
    {"0x7B", 0x7B},
    {"0x7C", 0x7C},
    {"0x7D", 0x7D},
    {"0x7E", 0x7E},
    {"0x7F", 0x7F},
    {"0x80", 0x80},
    {"0x81", 0x81},
    {"0x82", 0x82},
    {"0x83", 0x83},
    {"0x84", 0x84},
    {"0x85", 0x85},
    {"0x86", 0x86},
    {"0x87", 0x87},
    {"0x90", 0x90},
    {"0x91", 0x91},
};

// Changes the key codes to text
std::map<std::string, std::string> KeyToText = {
    {"0x01", "L mouse"},
    {"0x02", "R mouse"},
    {"0x03", "Control-break processing"},
    {"0x04", "Middle mouse"},
    {"0x05", "X1 mouse"},
    {"0x06", "X2 mouse"},
    {"0x08", "BACKSPACE"},
    {"0x09", "TAB"},
    {"0x0C", "CLEAR"},
    {"0x0D", "ENTER"},
    {"0x13", "PAUSE"},
    {"0x21", "PAGE UP"},
    {"0x22", "PAGE DOWN"},
    {"0x23", "END"},
    {"0x24", "HOME"},
    {"0x25", "LEFT ARROW"},
    {"0x26", "UP ARROW"},
    {"0x27", "RIGHT ARROW"},
    {"0x28", "DOWN ARROW"},
    {"0x29", "SELECT"},
    {"0x2A", "PRINT"},
    {"0x2B", "EXECUTE"},
    {"0x2C", "PRINT SCREEN "},
    {"0x2D", "INS"},
    {"0x2E", "DEL"},
    {"0x2F", "HELP"},
    {"0x30", "0"},
    {"0x31", "1"},
    {"0x32", "2"},
    {"0x33", "3"},
    {"0x34", "4"},
    {"0x35", "5"},
    {"0x36", "6"},
    {"0x37", "7"},
    {"0x38", "8"},
    {"0x39", "9"},
    {"0x41", "A"},
    {"0x42", "B"},
    {"0x43", "C"},
    {"0x44", "D"},
    {"0x45", "E"},
    {"0x46", "F"},
    {"0x47", "G"},
    {"0x48", "H"},
    {"0x49", "I"},
    {"0x4A", "J"},
    {"0x4B", "K"},
    {"0x4C", "L"},
    {"0x4D", "M"},
    {"0x4E", "N"},
    {"0x4F", "O"},
    {"0x50", "P"},
    {"0x51", "Q"},
    {"0x52", "R"},
    {"0x53", "S"},
    {"0x54", "T"},
    {"0x55", "U"},
    {"0x56", "V"},
    {"0x57", "W"},
    {"0x58", "X"},
    {"0x59", "Y"},
    {"0x5A", "Z"},
    {"0x60", "NumPad 0"},
    {"0x61", "NumPad 1"},
    {"0x62", "NumPad 2"},
    {"0x63", "NumPad 3"},
    {"0x64", "NumPad 4"},
    {"0x65", "NumPad 5"},
    {"0x66", "NumPad 6"},
    {"0x67", "NumPad 7"},
    {"0x68", "NumPad 8"},
    {"0x69", "NumPad 9"},
    {"0x6A", "Multiply"},
    {"0x6B", "Add"},
    {"0x6C", "Separator"},
    {"0x6D", "Subtract"},
    {"0x6E", "Decimal"},
    {"0x6F", "Divide"},
    {"0x70", "F1"},
    {"0x71", "F2"},
    {"0x72", "F3"},
    {"0x73", "F4"},
    {"0x74", "F5"},
    {"0x75", "F6"},
    {"0x76", "F7"},
    {"0x77", "F8"},
    {"0x78", "F9"},
    {"0x79", "F10"},
    {"0x7A", "F11"},
    {"0x7B", "F12"},
    {"0x7C", "F13"},
    {"0x7D", "F14"},
    {"0x7E", "F15"},
    {"0x7F", "F16"},
    {"0x80", "F17"},
    {"0x81", "F18"},
    {"0x82", "F19"},
    {"0x83", "F20"},
    {"0x84", "F21"},
    {"0x85", "F22"},
    {"0x86", "F23"},
    {"0x87", "F24"},
    {"0x90", "NUM LOCK"},
    {"0x91", "SCROLL LOCK"}
};