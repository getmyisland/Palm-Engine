#pragma once

class KeyInput {
public:
	enum class KeyInputType {
		INPUT_KEYBOARD_KEY_DOWN,
		INPUT_KEYBOARD_KEY_UP
	};

	// TODO https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
	enum class KeyInputKey {
		KEYCODE_LEFT_MOUSE, //0x01
		KEYCODE_RIGHT_MOUSE, //0x02
		KEYCODE_CONTROL_BREAK_PROCESSING, //0x03
		KEYCODE_MIDDLE_MOUSE, //0x04
		KEYCODE_BACKSPACE, //0x08
		KEYCODE_TAB, //0x09
		KEYCODE_RETURN, //0x0D
		KEYCODE_SHIFT, //0x10
		KEYCODE_CONTROL, //0x11
		KEYCODE_ALT, //0x12
		KEYCODE_PAUSE, //0x13
		KEYCODE_CAPITAL, //0x14
		KEYCODE_ESCAPE, //0x1B
		KEYCODE_SPACE, //0x20
		KEYCODE_ARROW_LEFT, //0x25
		KEYCODE_ARROW_UP, //0x26
		KEYCODE_ARROW_RIGHT, //0x27
		KEYCODE_ARROW_DOWN, //0x28
		KEYCODE_0, //0x30
		KEYCODE_1, //0x31
		KEYCODE_2, //0x32
		KEYCODE_3, //0x33
		KEYCODE_4, //0x34
		KEYCODE_5, //0x35
		KEYCODE_6, //0x36
		KEYCODE_7, //0x37
		KEYCODE_8, //0x38
		KEYCODE_9, //0x39
		KEYCODE_A, //0x41
		KEYCODE_B, //0x42
		KEYCODE_C, //0x43
		KEYCODE_D, //0x44
		KEYCODE_E, //0x45
		KEYCODE_F, //0x46
		KEYCODE_G, //0x47
		KEYCODE_H, //0x48
		KEYCODE_I, //0x49
		KEYCODE_J, //0x4A
		KEYCODE_K, //0x4B
		KEYCODE_L, //0x4C
		KEYCODE_M, //0x4D
		KEYCODE_N, //0x4E
		KEYCODE_O, //0x4F
		KEYCODE_P, //0x50
		KEYCODE_Q, //0x51
		KEYCODE_R, //0x52
		KEYCODE_S, //0x53
		KEYCODE_T, //0x54
		KEYCODE_U, //0x55
		KEYCODE_V, //0x56
		KEYCODE_W, //0x57
		KEYCODE_X, //0x58
		KEYCODE_Y, //0x59
		KEYCODE_Z, //0x5A
		KEYCODE_NUMPAD_0, //0x60
		KEYCODE_NUMPAD_1, //0x61
		KEYCODE_NUMPAD_2, //0x62
		KEYCODE_NUMPAD_3, //0x63
		KEYCODE_NUMPAD_4, //0x64
		KEYCODE_NUMPAD_5, //0x65
		KEYCODE_NUMPAD_6, //0x66
		KEYCODE_NUMPAD_7, //0x67
		KEYCODE_NUMPAD_8, //0x68
		KEYCODE_NUMPAD_9, //0x69
		KEYCODE_MULTIPLY, //0x6A
		KEYCODE_ADD, //0x6B
		KEYCODE_SEPARATOR, //0x6C
		KEYCODE_SUBTRACT, //0x6D
		KEYCODE_DECIMAL, //0x6E
		KEYCODE_DIVIDE, //0x6F
		KEYCODE_F1, //0x70
		KEYCODE_F2, //0x71
		KEYCODE_F3, //0x72
		KEYCODE_F4, //0x73
		KEYCODE_F5, //0x74
		KEYCODE_F6, //0x75
		KEYCODE_F7, //0x76
		KEYCODE_F8, //0x77
		KEYCODE_F9, //0x78
		KEYCODE_F10, //0x79
		KEYCODE_F11, //0x7A
		KEYCODE_F12, //0x7B
		KEYCODE_F13, //0x7C
		KEYCODE_F14, //0x7D
		KEYCODE_F15, //0x7E
		KEYCODE_F16, //0x7F
		KEYCODE_F17, //0x80
		KEYCODE_F18, //0x81
		KEYCODE_F19, //0x82
		KEYCODE_F20, //0x83
		KEYCODE_F21, //0x84
		KEYCODE_F22, //0x85
		KEYCODE_F23, //0x86
		KEYCODE_F24, //0x87
		KEYCODE_NUMPAD_LOCK, //0x90
		KEYCODE_LEFT_SHIFT, //0xA0
		KEYCODE_RIGHT_SHIFT, //0xA1
		KEYCODE_LEFT_CONTROL, //0xA2
		KEYCODE_RIGHT_CONTROL, //0xA3
	};

	KeyInput(KeyInputType type, char input) {
		inputType = type;
		inputChar = input;
	}
	~KeyInput() {};

	KeyInputType getKeyInputType() { return inputType; }
	char getInputChar() { return inputChar; }

private:
	KeyInputType inputType;
	char inputChar;
};

class MouseInput {

};