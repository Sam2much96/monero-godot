#include "JSON.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "JSONParseResult.hpp"


namespace godot {


JSON *JSON::_singleton = NULL;


JSON::JSON() {
	_owner = godot::api->godot_global_get_singleton((char *) "JSON");
}


JSON::___method_bindings JSON::___mb = {};

void *JSON::_detail_class_tag = nullptr;

void JSON::___init_method_bindings() {
	___mb.mb_parse = godot::api->godot_method_bind_get_method("_JSON", "parse");
	___mb.mb_print = godot::api->godot_method_bind_get_method("_JSON", "print");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "_JSON");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Ref<JSONParseResult> JSON::parse(const String json) {
	return Ref<JSONParseResult>::__internal_constructor(___godot_icall_Object_String(___mb.mb_parse, (const Object *) this, json));
}

String JSON::print(const Variant value, const String indent, const bool sort_keys) {
	return ___godot_icall_String_Variant_String_bool(___mb.mb_print, (const Object *) this, value, indent, sort_keys);
}

}