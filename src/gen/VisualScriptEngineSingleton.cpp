#include "VisualScriptEngineSingleton.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptEngineSingleton::___method_bindings VisualScriptEngineSingleton::___mb = {};

void *VisualScriptEngineSingleton::_detail_class_tag = nullptr;

void VisualScriptEngineSingleton::___init_method_bindings() {
	___mb.mb_get_singleton = godot::api->godot_method_bind_get_method("VisualScriptEngineSingleton", "get_singleton");
	___mb.mb_set_singleton = godot::api->godot_method_bind_get_method("VisualScriptEngineSingleton", "set_singleton");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualScriptEngineSingleton");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualScriptEngineSingleton *VisualScriptEngineSingleton::_new()
{
	return (VisualScriptEngineSingleton *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptEngineSingleton")());
}
String VisualScriptEngineSingleton::get_singleton() {
	return ___godot_icall_String(___mb.mb_get_singleton, (const Object *) this);
}

void VisualScriptEngineSingleton::set_singleton(const String name) {
	___godot_icall_void_String(___mb.mb_set_singleton, (const Object *) this, name);
}

}