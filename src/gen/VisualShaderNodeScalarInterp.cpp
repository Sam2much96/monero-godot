#include "VisualShaderNodeScalarInterp.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeScalarInterp::___method_bindings VisualShaderNodeScalarInterp::___mb = {};

void *VisualShaderNodeScalarInterp::_detail_class_tag = nullptr;

void VisualShaderNodeScalarInterp::___init_method_bindings() {
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeScalarInterp");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeScalarInterp *VisualShaderNodeScalarInterp::_new()
{
	return (VisualShaderNodeScalarInterp *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeScalarInterp")());
}
}