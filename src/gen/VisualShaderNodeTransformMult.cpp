#include "VisualShaderNodeTransformMult.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeTransformMult::___method_bindings VisualShaderNodeTransformMult::___mb = {};

void *VisualShaderNodeTransformMult::_detail_class_tag = nullptr;

void VisualShaderNodeTransformMult::___init_method_bindings() {
	___mb.mb_get_operator = godot::api->godot_method_bind_get_method("VisualShaderNodeTransformMult", "get_operator");
	___mb.mb_set_operator = godot::api->godot_method_bind_get_method("VisualShaderNodeTransformMult", "set_operator");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeTransformMult");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeTransformMult *VisualShaderNodeTransformMult::_new()
{
	return (VisualShaderNodeTransformMult *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeTransformMult")());
}
VisualShaderNodeTransformMult::Operator VisualShaderNodeTransformMult::get_operator() const {
	return (VisualShaderNodeTransformMult::Operator) ___godot_icall_int(___mb.mb_get_operator, (const Object *) this);
}

void VisualShaderNodeTransformMult::set_operator(const int64_t op) {
	___godot_icall_void_int(___mb.mb_set_operator, (const Object *) this, op);
}

}