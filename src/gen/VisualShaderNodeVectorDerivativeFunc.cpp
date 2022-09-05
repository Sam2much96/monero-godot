#include "VisualShaderNodeVectorDerivativeFunc.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeVectorDerivativeFunc::___method_bindings VisualShaderNodeVectorDerivativeFunc::___mb = {};

void *VisualShaderNodeVectorDerivativeFunc::_detail_class_tag = nullptr;

void VisualShaderNodeVectorDerivativeFunc::___init_method_bindings() {
	___mb.mb_get_function = godot::api->godot_method_bind_get_method("VisualShaderNodeVectorDerivativeFunc", "get_function");
	___mb.mb_set_function = godot::api->godot_method_bind_get_method("VisualShaderNodeVectorDerivativeFunc", "set_function");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeVectorDerivativeFunc");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeVectorDerivativeFunc *VisualShaderNodeVectorDerivativeFunc::_new()
{
	return (VisualShaderNodeVectorDerivativeFunc *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeVectorDerivativeFunc")());
}
VisualShaderNodeVectorDerivativeFunc::Function VisualShaderNodeVectorDerivativeFunc::get_function() const {
	return (VisualShaderNodeVectorDerivativeFunc::Function) ___godot_icall_int(___mb.mb_get_function, (const Object *) this);
}

void VisualShaderNodeVectorDerivativeFunc::set_function(const int64_t func) {
	___godot_icall_void_int(___mb.mb_set_function, (const Object *) this, func);
}

}