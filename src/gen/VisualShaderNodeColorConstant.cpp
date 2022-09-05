#include "VisualShaderNodeColorConstant.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeColorConstant::___method_bindings VisualShaderNodeColorConstant::___mb = {};

void *VisualShaderNodeColorConstant::_detail_class_tag = nullptr;

void VisualShaderNodeColorConstant::___init_method_bindings() {
	___mb.mb_get_constant = godot::api->godot_method_bind_get_method("VisualShaderNodeColorConstant", "get_constant");
	___mb.mb_set_constant = godot::api->godot_method_bind_get_method("VisualShaderNodeColorConstant", "set_constant");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeColorConstant");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeColorConstant *VisualShaderNodeColorConstant::_new()
{
	return (VisualShaderNodeColorConstant *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeColorConstant")());
}
Color VisualShaderNodeColorConstant::get_constant() const {
	return ___godot_icall_Color(___mb.mb_get_constant, (const Object *) this);
}

void VisualShaderNodeColorConstant::set_constant(const Color value) {
	___godot_icall_void_Color(___mb.mb_set_constant, (const Object *) this, value);
}

}