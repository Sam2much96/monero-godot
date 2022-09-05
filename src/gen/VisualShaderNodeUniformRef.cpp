#include "VisualShaderNodeUniformRef.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeUniformRef::___method_bindings VisualShaderNodeUniformRef::___mb = {};

void *VisualShaderNodeUniformRef::_detail_class_tag = nullptr;

void VisualShaderNodeUniformRef::___init_method_bindings() {
	___mb.mb_get_uniform_name = godot::api->godot_method_bind_get_method("VisualShaderNodeUniformRef", "get_uniform_name");
	___mb.mb_set_uniform_name = godot::api->godot_method_bind_get_method("VisualShaderNodeUniformRef", "set_uniform_name");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeUniformRef");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeUniformRef *VisualShaderNodeUniformRef::_new()
{
	return (VisualShaderNodeUniformRef *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeUniformRef")());
}
String VisualShaderNodeUniformRef::get_uniform_name() const {
	return ___godot_icall_String(___mb.mb_get_uniform_name, (const Object *) this);
}

void VisualShaderNodeUniformRef::set_uniform_name(const String name) {
	___godot_icall_void_String(___mb.mb_set_uniform_name, (const Object *) this, name);
}

}