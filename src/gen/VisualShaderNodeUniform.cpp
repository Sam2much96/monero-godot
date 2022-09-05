#include "VisualShaderNodeUniform.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeUniform::___method_bindings VisualShaderNodeUniform::___mb = {};

void *VisualShaderNodeUniform::_detail_class_tag = nullptr;

void VisualShaderNodeUniform::___init_method_bindings() {
	___mb.mb_get_uniform_name = godot::api->godot_method_bind_get_method("VisualShaderNodeUniform", "get_uniform_name");
	___mb.mb_set_uniform_name = godot::api->godot_method_bind_get_method("VisualShaderNodeUniform", "set_uniform_name");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeUniform");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

String VisualShaderNodeUniform::get_uniform_name() const {
	return ___godot_icall_String(___mb.mb_get_uniform_name, (const Object *) this);
}

void VisualShaderNodeUniform::set_uniform_name(const String name) {
	___godot_icall_void_String(___mb.mb_set_uniform_name, (const Object *) this, name);
}

}