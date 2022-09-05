#include "VisualScriptResourcePath.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptResourcePath::___method_bindings VisualScriptResourcePath::___mb = {};

void *VisualScriptResourcePath::_detail_class_tag = nullptr;

void VisualScriptResourcePath::___init_method_bindings() {
	___mb.mb_get_resource_path = godot::api->godot_method_bind_get_method("VisualScriptResourcePath", "get_resource_path");
	___mb.mb_set_resource_path = godot::api->godot_method_bind_get_method("VisualScriptResourcePath", "set_resource_path");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualScriptResourcePath");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualScriptResourcePath *VisualScriptResourcePath::_new()
{
	return (VisualScriptResourcePath *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptResourcePath")());
}
String VisualScriptResourcePath::get_resource_path() {
	return ___godot_icall_String(___mb.mb_get_resource_path, (const Object *) this);
}

void VisualScriptResourcePath::set_resource_path(const String path) {
	___godot_icall_void_String(___mb.mb_set_resource_path, (const Object *) this, path);
}

}