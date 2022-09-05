#include "VisualShaderNodeInput.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeInput::___method_bindings VisualShaderNodeInput::___mb = {};

void *VisualShaderNodeInput::_detail_class_tag = nullptr;

void VisualShaderNodeInput::___init_method_bindings() {
	___mb.mb_get_input_name = godot::api->godot_method_bind_get_method("VisualShaderNodeInput", "get_input_name");
	___mb.mb_get_input_real_name = godot::api->godot_method_bind_get_method("VisualShaderNodeInput", "get_input_real_name");
	___mb.mb_set_input_name = godot::api->godot_method_bind_get_method("VisualShaderNodeInput", "set_input_name");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeInput");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeInput *VisualShaderNodeInput::_new()
{
	return (VisualShaderNodeInput *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeInput")());
}
String VisualShaderNodeInput::get_input_name() const {
	return ___godot_icall_String(___mb.mb_get_input_name, (const Object *) this);
}

String VisualShaderNodeInput::get_input_real_name() const {
	return ___godot_icall_String(___mb.mb_get_input_real_name, (const Object *) this);
}

void VisualShaderNodeInput::set_input_name(const String name) {
	___godot_icall_void_String(___mb.mb_set_input_name, (const Object *) this, name);
}

}