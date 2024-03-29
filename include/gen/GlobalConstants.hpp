#ifndef GODOT_CPP_GLOBALCONSTANTS_HPP
#define GODOT_CPP_GLOBALCONSTANTS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

namespace godot {


class GlobalConstants : public _Wrapped {
public: enum { ___CLASS_IS_SCRIPT = 0, };

private:
	static GlobalConstants *_singleton;

	GlobalConstants();

	struct ___method_bindings {
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline GlobalConstants *get_singleton()
	{
		if (!GlobalConstants::_singleton) {
			GlobalConstants::_singleton = new GlobalConstants;
		}
		return GlobalConstants::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "GlobalConstants"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GlobalConstants"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int BUTTON_LEFT = 1;
	const static int BUTTON_MASK_LEFT = 1;
	const static int BUTTON_MASK_MIDDLE = 4;
	const static int BUTTON_MASK_RIGHT = 2;
	const static int BUTTON_MASK_XBUTTON1 = 128;
	const static int BUTTON_MASK_XBUTTON2 = 256;
	const static int BUTTON_MIDDLE = 3;
	const static int BUTTON_RIGHT = 2;
	const static int BUTTON_WHEEL_DOWN = 5;
	const static int BUTTON_WHEEL_LEFT = 6;
	const static int BUTTON_WHEEL_RIGHT = 7;
	const static int BUTTON_WHEEL_UP = 4;
	const static int BUTTON_XBUTTON1 = 8;
	const static int BUTTON_XBUTTON2 = 9;
	const static int CORNER_BOTTOM_LEFT = 3;
	const static int CORNER_BOTTOM_RIGHT = 2;
	const static int CORNER_TOP_LEFT = 0;
	const static int CORNER_TOP_RIGHT = 1;
	const static int ERR_ALREADY_EXISTS = 32;
	const static int ERR_ALREADY_IN_USE = 22;
	const static int ERR_BUG = 47;
	const static int ERR_BUSY = 44;
	const static int ERR_CANT_ACQUIRE_RESOURCE = 28;
	const static int ERR_CANT_CONNECT = 25;
	const static int ERR_CANT_CREATE = 20;
	const static int ERR_CANT_FORK = 29;
	const static int ERR_CANT_OPEN = 19;
	const static int ERR_CANT_RESOLVE = 26;
	const static int ERR_COMPILATION_FAILED = 36;
	const static int ERR_CONNECTION_ERROR = 27;
	const static int ERR_CYCLIC_LINK = 40;
	const static int ERR_DATABASE_CANT_READ = 34;
	const static int ERR_DATABASE_CANT_WRITE = 35;
	const static int ERR_DOES_NOT_EXIST = 33;
	const static int ERR_DUPLICATE_SYMBOL = 42;
	const static int ERR_FILE_ALREADY_IN_USE = 11;
	const static int ERR_FILE_BAD_DRIVE = 8;
	const static int ERR_FILE_BAD_PATH = 9;
	const static int ERR_FILE_CANT_OPEN = 12;
	const static int ERR_FILE_CANT_READ = 14;
	const static int ERR_FILE_CANT_WRITE = 13;
	const static int ERR_FILE_CORRUPT = 16;
	const static int ERR_FILE_EOF = 18;
	const static int ERR_FILE_MISSING_DEPENDENCIES = 17;
	const static int ERR_FILE_NOT_FOUND = 7;
	const static int ERR_FILE_NO_PERMISSION = 10;
	const static int ERR_FILE_UNRECOGNIZED = 15;
	const static int ERR_HELP = 46;
	const static int ERR_INVALID_DATA = 30;
	const static int ERR_INVALID_DECLARATION = 41;
	const static int ERR_INVALID_PARAMETER = 31;
	const static int ERR_LINK_FAILED = 38;
	const static int ERR_LOCKED = 23;
	const static int ERR_METHOD_NOT_FOUND = 37;
	const static int ERR_OUT_OF_MEMORY = 6;
	const static int ERR_PARAMETER_RANGE_ERROR = 5;
	const static int ERR_PARSE_ERROR = 43;
	const static int ERR_PRINTER_ON_FIRE = 48;
	const static int ERR_QUERY_FAILED = 21;
	const static int ERR_SCRIPT_FAILED = 39;
	const static int ERR_SKIP = 45;
	const static int ERR_TIMEOUT = 24;
	const static int ERR_UNAUTHORIZED = 4;
	const static int ERR_UNAVAILABLE = 2;
	const static int ERR_UNCONFIGURED = 3;
	const static int FAILED = 1;
	const static int HALIGN_CENTER = 1;
	const static int HALIGN_LEFT = 0;
	const static int HALIGN_RIGHT = 2;
	const static int HORIZONTAL = 0;
	const static int JOY_ANALOG_L2 = 6;
	const static int JOY_ANALOG_LX = 0;
	const static int JOY_ANALOG_LY = 1;
	const static int JOY_ANALOG_R2 = 7;
	const static int JOY_ANALOG_RX = 2;
	const static int JOY_ANALOG_RY = 3;
	const static int JOY_AXIS_0 = 0;
	const static int JOY_AXIS_1 = 1;
	const static int JOY_AXIS_2 = 2;
	const static int JOY_AXIS_3 = 3;
	const static int JOY_AXIS_4 = 4;
	const static int JOY_AXIS_5 = 5;
	const static int JOY_AXIS_6 = 6;
	const static int JOY_AXIS_7 = 7;
	const static int JOY_AXIS_8 = 8;
	const static int JOY_AXIS_9 = 9;
	const static int JOY_AXIS_MAX = 10;
	const static int JOY_BUTTON_0 = 0;
	const static int JOY_BUTTON_1 = 1;
	const static int JOY_BUTTON_10 = 10;
	const static int JOY_BUTTON_11 = 11;
	const static int JOY_BUTTON_12 = 12;
	const static int JOY_BUTTON_13 = 13;
	const static int JOY_BUTTON_14 = 14;
	const static int JOY_BUTTON_15 = 15;
	const static int JOY_BUTTON_16 = 16;
	const static int JOY_BUTTON_17 = 17;
	const static int JOY_BUTTON_18 = 18;
	const static int JOY_BUTTON_19 = 19;
	const static int JOY_BUTTON_2 = 2;
	const static int JOY_BUTTON_20 = 20;
	const static int JOY_BUTTON_21 = 21;
	const static int JOY_BUTTON_22 = 22;
	const static int JOY_BUTTON_3 = 3;
	const static int JOY_BUTTON_4 = 4;
	const static int JOY_BUTTON_5 = 5;
	const static int JOY_BUTTON_6 = 6;
	const static int JOY_BUTTON_7 = 7;
	const static int JOY_BUTTON_8 = 8;
	const static int JOY_BUTTON_9 = 9;
	const static int JOY_BUTTON_MAX = 23;
	const static int JOY_DPAD_DOWN = 13;
	const static int JOY_DPAD_LEFT = 14;
	const static int JOY_DPAD_RIGHT = 15;
	const static int JOY_DPAD_UP = 12;
	const static int JOY_DS_A = 1;
	const static int JOY_DS_B = 0;
	const static int JOY_DS_X = 3;
	const static int JOY_DS_Y = 2;
	const static int JOY_GUIDE = 16;
	const static int JOY_INVALID_OPTION = -1;
	const static int JOY_L = 4;
	const static int JOY_L2 = 6;
	const static int JOY_L3 = 8;
	const static int JOY_MISC1 = 17;
	const static int JOY_OCULUS_AX = 7;
	const static int JOY_OCULUS_BY = 1;
	const static int JOY_OCULUS_MENU = 3;
	const static int JOY_OPENVR_MENU = 1;
	const static int JOY_OPENVR_TOUCHPADX = 0;
	const static int JOY_OPENVR_TOUCHPADY = 1;
	const static int JOY_PADDLE1 = 18;
	const static int JOY_PADDLE2 = 19;
	const static int JOY_PADDLE3 = 20;
	const static int JOY_PADDLE4 = 21;
	const static int JOY_R = 5;
	const static int JOY_R2 = 7;
	const static int JOY_R3 = 9;
	const static int JOY_SELECT = 10;
	const static int JOY_SONY_CIRCLE = 1;
	const static int JOY_SONY_SQUARE = 2;
	const static int JOY_SONY_TRIANGLE = 3;
	const static int JOY_SONY_X = 0;
	const static int JOY_START = 11;
	const static int JOY_TOUCHPAD = 22;
	const static int JOY_VR_ANALOG_GRIP = 4;
	const static int JOY_VR_ANALOG_TRIGGER = 2;
	const static int JOY_VR_GRIP = 2;
	const static int JOY_VR_PAD = 14;
	const static int JOY_VR_TRIGGER = 15;
	const static int JOY_XBOX_A = 0;
	const static int JOY_XBOX_B = 1;
	const static int JOY_XBOX_X = 2;
	const static int JOY_XBOX_Y = 3;
	const static int KEY_0 = 48;
	const static int KEY_1 = 49;
	const static int KEY_2 = 50;
	const static int KEY_3 = 51;
	const static int KEY_4 = 52;
	const static int KEY_5 = 53;
	const static int KEY_6 = 54;
	const static int KEY_7 = 55;
	const static int KEY_8 = 56;
	const static int KEY_9 = 57;
	const static int KEY_A = 65;
	const static int KEY_AACUTE = 193;
	const static int KEY_ACIRCUMFLEX = 194;
	const static int KEY_ACUTE = 180;
	const static int KEY_ADIAERESIS = 196;
	const static int KEY_AE = 198;
	const static int KEY_AGRAVE = 192;
	const static int KEY_ALT = 16777240;
	const static int KEY_AMPERSAND = 38;
	const static int KEY_APOSTROPHE = 39;
	const static int KEY_ARING = 197;
	const static int KEY_ASCIICIRCUM = 94;
	const static int KEY_ASCIITILDE = 126;
	const static int KEY_ASTERISK = 42;
	const static int KEY_AT = 64;
	const static int KEY_ATILDE = 195;
	const static int KEY_B = 66;
	const static int KEY_BACK = 16777280;
	const static int KEY_BACKSLASH = 92;
	const static int KEY_BACKSPACE = 16777220;
	const static int KEY_BACKTAB = 16777219;
	const static int KEY_BAR = 124;
	const static int KEY_BASSBOOST = 16777287;
	const static int KEY_BASSDOWN = 16777289;
	const static int KEY_BASSUP = 16777288;
	const static int KEY_BRACELEFT = 123;
	const static int KEY_BRACERIGHT = 125;
	const static int KEY_BRACKETLEFT = 91;
	const static int KEY_BRACKETRIGHT = 93;
	const static int KEY_BROKENBAR = 166;
	const static int KEY_C = 67;
	const static int KEY_CAPSLOCK = 16777241;
	const static int KEY_CCEDILLA = 199;
	const static int KEY_CEDILLA = 184;
	const static int KEY_CENT = 162;
	const static int KEY_CLEAR = 16777228;
	const static int KEY_CODE_MASK = 33554431;
	const static int KEY_COLON = 58;
	const static int KEY_COMMA = 44;
	const static int KEY_CONTROL = 16777238;
	const static int KEY_COPYRIGHT = 169;
	const static int KEY_CURRENCY = 164;
	const static int KEY_D = 68;
	const static int KEY_DEGREE = 176;
	const static int KEY_DELETE = 16777224;
	const static int KEY_DIAERESIS = 168;
	const static int KEY_DIRECTION_L = 16777266;
	const static int KEY_DIRECTION_R = 16777267;
	const static int KEY_DIVISION = 247;
	const static int KEY_DOLLAR = 36;
	const static int KEY_DOWN = 16777234;
	const static int KEY_E = 69;
	const static int KEY_EACUTE = 201;
	const static int KEY_ECIRCUMFLEX = 202;
	const static int KEY_EDIAERESIS = 203;
	const static int KEY_EGRAVE = 200;
	const static int KEY_END = 16777230;
	const static int KEY_ENTER = 16777221;
	const static int KEY_EQUAL = 61;
	const static int KEY_ESCAPE = 16777217;
	const static int KEY_ETH = 208;
	const static int KEY_EXCLAM = 33;
	const static int KEY_EXCLAMDOWN = 161;
	const static int KEY_F = 70;
	const static int KEY_F1 = 16777244;
	const static int KEY_F10 = 16777253;
	const static int KEY_F11 = 16777254;
	const static int KEY_F12 = 16777255;
	const static int KEY_F13 = 16777256;
	const static int KEY_F14 = 16777257;
	const static int KEY_F15 = 16777258;
	const static int KEY_F16 = 16777259;
	const static int KEY_F2 = 16777245;
	const static int KEY_F3 = 16777246;
	const static int KEY_F4 = 16777247;
	const static int KEY_F5 = 16777248;
	const static int KEY_F6 = 16777249;
	const static int KEY_F7 = 16777250;
	const static int KEY_F8 = 16777251;
	const static int KEY_F9 = 16777252;
	const static int KEY_FAVORITES = 16777298;
	const static int KEY_FORWARD = 16777281;
	const static int KEY_G = 71;
	const static int KEY_GREATER = 62;
	const static int KEY_GUILLEMOTLEFT = 171;
	const static int KEY_GUILLEMOTRIGHT = 187;
	const static int KEY_H = 72;
	const static int KEY_HELP = 16777265;
	const static int KEY_HOME = 16777229;
	const static int KEY_HOMEPAGE = 16777297;
	const static int KEY_HYPER_L = 16777263;
	const static int KEY_HYPER_R = 16777264;
	const static int KEY_HYPHEN = 173;
	const static int KEY_I = 73;
	const static int KEY_IACUTE = 205;
	const static int KEY_ICIRCUMFLEX = 206;
	const static int KEY_IDIAERESIS = 207;
	const static int KEY_IGRAVE = 204;
	const static int KEY_INSERT = 16777223;
	const static int KEY_J = 74;
	const static int KEY_K = 75;
	const static int KEY_KP_0 = 16777350;
	const static int KEY_KP_1 = 16777351;
	const static int KEY_KP_2 = 16777352;
	const static int KEY_KP_3 = 16777353;
	const static int KEY_KP_4 = 16777354;
	const static int KEY_KP_5 = 16777355;
	const static int KEY_KP_6 = 16777356;
	const static int KEY_KP_7 = 16777357;
	const static int KEY_KP_8 = 16777358;
	const static int KEY_KP_9 = 16777359;
	const static int KEY_KP_ADD = 16777349;
	const static int KEY_KP_DIVIDE = 16777346;
	const static int KEY_KP_ENTER = 16777222;
	const static int KEY_KP_MULTIPLY = 16777345;
	const static int KEY_KP_PERIOD = 16777348;
	const static int KEY_KP_SUBTRACT = 16777347;
	const static int KEY_L = 76;
	const static int KEY_LAUNCH0 = 16777304;
	const static int KEY_LAUNCH1 = 16777305;
	const static int KEY_LAUNCH2 = 16777306;
	const static int KEY_LAUNCH3 = 16777307;
	const static int KEY_LAUNCH4 = 16777308;
	const static int KEY_LAUNCH5 = 16777309;
	const static int KEY_LAUNCH6 = 16777310;
	const static int KEY_LAUNCH7 = 16777311;
	const static int KEY_LAUNCH8 = 16777312;
	const static int KEY_LAUNCH9 = 16777313;
	const static int KEY_LAUNCHA = 16777314;
	const static int KEY_LAUNCHB = 16777315;
	const static int KEY_LAUNCHC = 16777316;
	const static int KEY_LAUNCHD = 16777317;
	const static int KEY_LAUNCHE = 16777318;
	const static int KEY_LAUNCHF = 16777319;
	const static int KEY_LAUNCHMAIL = 16777302;
	const static int KEY_LAUNCHMEDIA = 16777303;
	const static int KEY_LEFT = 16777231;
	const static int KEY_LESS = 60;
	const static int KEY_M = 77;
	const static int KEY_MACRON = 175;
	const static int KEY_MASCULINE = 186;
	const static int KEY_MASK_ALT = 67108864;
	const static int KEY_MASK_CMD = 268435456;
	const static int KEY_MASK_CTRL = 268435456;
	const static int KEY_MASK_GROUP_SWITCH = 1073741824;
	const static int KEY_MASK_KPAD = 536870912;
	const static int KEY_MASK_META = 134217728;
	const static int KEY_MASK_SHIFT = 33554432;
	const static int KEY_MEDIANEXT = 16777295;
	const static int KEY_MEDIAPLAY = 16777292;
	const static int KEY_MEDIAPREVIOUS = 16777294;
	const static int KEY_MEDIARECORD = 16777296;
	const static int KEY_MEDIASTOP = 16777293;
	const static int KEY_MENU = 16777262;
	const static int KEY_META = 16777239;
	const static int KEY_MINUS = 45;
	const static int KEY_MODIFIER_MASK = -16777216;
	const static int KEY_MU = 181;
	const static int KEY_MULTIPLY = 215;
	const static int KEY_N = 78;
	const static int KEY_NOBREAKSPACE = 160;
	const static int KEY_NOTSIGN = 172;
	const static int KEY_NTILDE = 209;
	const static int KEY_NUMBERSIGN = 35;
	const static int KEY_NUMLOCK = 16777242;
	const static int KEY_O = 79;
	const static int KEY_OACUTE = 211;
	const static int KEY_OCIRCUMFLEX = 212;
	const static int KEY_ODIAERESIS = 214;
	const static int KEY_OGRAVE = 210;
	const static int KEY_ONEHALF = 189;
	const static int KEY_ONEQUARTER = 188;
	const static int KEY_ONESUPERIOR = 185;
	const static int KEY_OOBLIQUE = 216;
	const static int KEY_OPENURL = 16777301;
	const static int KEY_ORDFEMININE = 170;
	const static int KEY_OTILDE = 213;
	const static int KEY_P = 80;
	const static int KEY_PAGEDOWN = 16777236;
	const static int KEY_PAGEUP = 16777235;
	const static int KEY_PARAGRAPH = 182;
	const static int KEY_PARENLEFT = 40;
	const static int KEY_PARENRIGHT = 41;
	const static int KEY_PAUSE = 16777225;
	const static int KEY_PERCENT = 37;
	const static int KEY_PERIOD = 46;
	const static int KEY_PERIODCENTERED = 183;
	const static int KEY_PLUS = 43;
	const static int KEY_PLUSMINUS = 177;
	const static int KEY_PRINT = 16777226;
	const static int KEY_Q = 81;
	const static int KEY_QUESTION = 63;
	const static int KEY_QUESTIONDOWN = 191;
	const static int KEY_QUOTEDBL = 34;
	const static int KEY_QUOTELEFT = 96;
	const static int KEY_R = 82;
	const static int KEY_REFRESH = 16777283;
	const static int KEY_REGISTERED = 174;
	const static int KEY_RIGHT = 16777233;
	const static int KEY_S = 83;
	const static int KEY_SCROLLLOCK = 16777243;
	const static int KEY_SEARCH = 16777299;
	const static int KEY_SECTION = 167;
	const static int KEY_SEMICOLON = 59;
	const static int KEY_SHIFT = 16777237;
	const static int KEY_SLASH = 47;
	const static int KEY_SPACE = 32;
	const static int KEY_SSHARP = 223;
	const static int KEY_STANDBY = 16777300;
	const static int KEY_STERLING = 163;
	const static int KEY_STOP = 16777282;
	const static int KEY_SUPER_L = 16777260;
	const static int KEY_SUPER_R = 16777261;
	const static int KEY_SYSREQ = 16777227;
	const static int KEY_T = 84;
	const static int KEY_TAB = 16777218;
	const static int KEY_THORN = 222;
	const static int KEY_THREEQUARTERS = 190;
	const static int KEY_THREESUPERIOR = 179;
	const static int KEY_TREBLEDOWN = 16777291;
	const static int KEY_TREBLEUP = 16777290;
	const static int KEY_TWOSUPERIOR = 178;
	const static int KEY_U = 85;
	const static int KEY_UACUTE = 218;
	const static int KEY_UCIRCUMFLEX = 219;
	const static int KEY_UDIAERESIS = 220;
	const static int KEY_UGRAVE = 217;
	const static int KEY_UNDERSCORE = 95;
	const static int KEY_UNKNOWN = 33554431;
	const static int KEY_UP = 16777232;
	const static int KEY_V = 86;
	const static int KEY_VOLUMEDOWN = 16777284;
	const static int KEY_VOLUMEMUTE = 16777285;
	const static int KEY_VOLUMEUP = 16777286;
	const static int KEY_W = 87;
	const static int KEY_X = 88;
	const static int KEY_Y = 89;
	const static int KEY_YACUTE = 221;
	const static int KEY_YDIAERESIS = 255;
	const static int KEY_YEN = 165;
	const static int KEY_Z = 90;
	const static int MARGIN_BOTTOM = 3;
	const static int MARGIN_LEFT = 0;
	const static int MARGIN_RIGHT = 2;
	const static int MARGIN_TOP = 1;
	const static int METHOD_FLAGS_DEFAULT = 1;
	const static int METHOD_FLAG_CONST = 8;
	const static int METHOD_FLAG_EDITOR = 2;
	const static int METHOD_FLAG_FROM_SCRIPT = 64;
	const static int METHOD_FLAG_NORMAL = 1;
	const static int METHOD_FLAG_NOSCRIPT = 4;
	const static int METHOD_FLAG_REVERSE = 16;
	const static int METHOD_FLAG_VIRTUAL = 32;
	const static int MIDI_MESSAGE_AFTERTOUCH = 10;
	const static int MIDI_MESSAGE_CHANNEL_PRESSURE = 13;
	const static int MIDI_MESSAGE_CONTROL_CHANGE = 11;
	const static int MIDI_MESSAGE_NOTE_OFF = 8;
	const static int MIDI_MESSAGE_NOTE_ON = 9;
	const static int MIDI_MESSAGE_PITCH_BEND = 14;
	const static int MIDI_MESSAGE_PROGRAM_CHANGE = 12;
	const static int OK = 0;
	const static int OP_ADD = 6;
	const static int OP_AND = 20;
	const static int OP_BIT_AND = 16;
	const static int OP_BIT_NEGATE = 19;
	const static int OP_BIT_OR = 17;
	const static int OP_BIT_XOR = 18;
	const static int OP_DIVIDE = 9;
	const static int OP_EQUAL = 0;
	const static int OP_GREATER = 4;
	const static int OP_GREATER_EQUAL = 5;
	const static int OP_IN = 24;
	const static int OP_LESS = 2;
	const static int OP_LESS_EQUAL = 3;
	const static int OP_MAX = 25;
	const static int OP_MODULE = 12;
	const static int OP_MULTIPLY = 8;
	const static int OP_NEGATE = 10;
	const static int OP_NOT = 23;
	const static int OP_NOT_EQUAL = 1;
	const static int OP_OR = 21;
	const static int OP_POSITIVE = 11;
	const static int OP_SHIFT_LEFT = 14;
	const static int OP_SHIFT_RIGHT = 15;
	const static int OP_STRING_CONCAT = 13;
	const static int OP_SUBTRACT = 7;
	const static int OP_XOR = 22;
	const static int PROPERTY_HINT_COLOR_NO_ALPHA = 20;
	const static int PROPERTY_HINT_DIR = 14;
	const static int PROPERTY_HINT_ENUM = 3;
	const static int PROPERTY_HINT_EXP_EASING = 4;
	const static int PROPERTY_HINT_EXP_RANGE = 2;
	const static int PROPERTY_HINT_FILE = 13;
	const static int PROPERTY_HINT_FLAGS = 8;
	const static int PROPERTY_HINT_GLOBAL_DIR = 16;
	const static int PROPERTY_HINT_GLOBAL_FILE = 15;
	const static int PROPERTY_HINT_IMAGE_COMPRESS_LOSSLESS = 22;
	const static int PROPERTY_HINT_IMAGE_COMPRESS_LOSSY = 21;
	const static int PROPERTY_HINT_KEY_ACCEL = 7;
	const static int PROPERTY_HINT_LAYERS_2D_PHYSICS = 10;
	const static int PROPERTY_HINT_LAYERS_2D_RENDER = 9;
	const static int PROPERTY_HINT_LAYERS_3D_PHYSICS = 12;
	const static int PROPERTY_HINT_LAYERS_3D_RENDER = 11;
	const static int PROPERTY_HINT_LENGTH = 5;
	const static int PROPERTY_HINT_MULTILINE_TEXT = 18;
	const static int PROPERTY_HINT_NONE = 0;
	const static int PROPERTY_HINT_PLACEHOLDER_TEXT = 19;
	const static int PROPERTY_HINT_RANGE = 1;
	const static int PROPERTY_HINT_RESOURCE_TYPE = 17;
	const static int PROPERTY_USAGE_CATEGORY = 256;
	const static int PROPERTY_USAGE_CHECKABLE = 16;
	const static int PROPERTY_USAGE_CHECKED = 32;
	const static int PROPERTY_USAGE_DEFAULT = 7;
	const static int PROPERTY_USAGE_DEFAULT_INTL = 71;
	const static int PROPERTY_USAGE_EDITOR = 2;
	const static int PROPERTY_USAGE_EDITOR_HELPER = 8;
	const static int PROPERTY_USAGE_GROUP = 128;
	const static int PROPERTY_USAGE_INTERNATIONALIZED = 64;
	const static int PROPERTY_USAGE_NETWORK = 4;
	const static int PROPERTY_USAGE_NOEDITOR = 5;
	const static int PROPERTY_USAGE_NO_INSTANCE_STATE = 2048;
	const static int PROPERTY_USAGE_RESTART_IF_CHANGED = 4096;
	const static int PROPERTY_USAGE_SCRIPT_VARIABLE = 8192;
	const static int PROPERTY_USAGE_STORAGE = 1;
	const static int SPKEY = 16777216;
	const static int TYPE_AABB = 11;
	const static int TYPE_ARRAY = 19;
	const static int TYPE_BASIS = 12;
	const static int TYPE_BOOL = 1;
	const static int TYPE_COLOR = 14;
	const static int TYPE_COLOR_ARRAY = 26;
	const static int TYPE_DICTIONARY = 18;
	const static int TYPE_INT = 2;
	const static int TYPE_INT_ARRAY = 21;
	const static int TYPE_MAX = 27;
	const static int TYPE_NIL = 0;
	const static int TYPE_NODE_PATH = 15;
	const static int TYPE_OBJECT = 17;
	const static int TYPE_PLANE = 9;
	const static int TYPE_QUAT = 10;
	const static int TYPE_RAW_ARRAY = 20;
	const static int TYPE_REAL = 3;
	const static int TYPE_REAL_ARRAY = 22;
	const static int TYPE_RECT2 = 6;
	const static int TYPE_RID = 16;
	const static int TYPE_STRING = 4;
	const static int TYPE_STRING_ARRAY = 23;
	const static int TYPE_TRANSFORM = 13;
	const static int TYPE_TRANSFORM2D = 8;
	const static int TYPE_VECTOR2 = 5;
	const static int TYPE_VECTOR2_ARRAY = 24;
	const static int TYPE_VECTOR3 = 7;
	const static int TYPE_VECTOR3_ARRAY = 25;
	const static int VALIGN_BOTTOM = 2;
	const static int VALIGN_CENTER = 1;
	const static int VALIGN_TOP = 0;
	const static int VERTICAL = 1;

	// methods

};

}

#endif