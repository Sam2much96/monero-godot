#include "VisualShaderNodeGlobalExpression.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeGlobalExpression::___method_bindings VisualShaderNodeGlobalExpression::___mb = {};

void *VisualShaderNodeGlobalExpression::_detail_class_tag = nullptr;

void VisualShaderNodeGlobalExpression::___init_method_bindings() {
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeGlobalExpression");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeGlobalExpression *VisualShaderNodeGlobalExpression::_new()
{
	return (VisualShaderNodeGlobalExpression *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeGlobalExpression")());
}
}