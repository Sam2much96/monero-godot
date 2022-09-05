#include "Shader.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"


namespace godot {


Shader::___method_bindings Shader::___mb = {};

void *Shader::_detail_class_tag = nullptr;

void Shader::___init_method_bindings() {
	___mb.mb_get_code = godot::api->godot_method_bind_get_method("Shader", "get_code");
	___mb.mb_get_custom_defines = godot::api->godot_method_bind_get_method("Shader", "get_custom_defines");
	___mb.mb_get_default_texture_param = godot::api->godot_method_bind_get_method("Shader", "get_default_texture_param");
	___mb.mb_get_mode = godot::api->godot_method_bind_get_method("Shader", "get_mode");
	___mb.mb_has_param = godot::api->godot_method_bind_get_method("Shader", "has_param");
	___mb.mb_set_code = godot::api->godot_method_bind_get_method("Shader", "set_code");
	___mb.mb_set_custom_defines = godot::api->godot_method_bind_get_method("Shader", "set_custom_defines");
	___mb.mb_set_default_texture_param = godot::api->godot_method_bind_get_method("Shader", "set_default_texture_param");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Shader");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Shader *Shader::_new()
{
	return (Shader *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Shader")());
}
String Shader::get_code() const {
	return ___godot_icall_String(___mb.mb_get_code, (const Object *) this);
}

String Shader::get_custom_defines() const {
	return ___godot_icall_String(___mb.mb_get_custom_defines, (const Object *) this);
}

Ref<Texture> Shader::get_default_texture_param(const String param) const {
	return Ref<Texture>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_default_texture_param, (const Object *) this, param));
}

Shader::Mode Shader::get_mode() const {
	return (Shader::Mode) ___godot_icall_int(___mb.mb_get_mode, (const Object *) this);
}

bool Shader::has_param(const String name) const {
	return ___godot_icall_bool_String(___mb.mb_has_param, (const Object *) this, name);
}

void Shader::set_code(const String code) {
	___godot_icall_void_String(___mb.mb_set_code, (const Object *) this, code);
}

void Shader::set_custom_defines(const String custom_defines) {
	___godot_icall_void_String(___mb.mb_set_custom_defines, (const Object *) this, custom_defines);
}

void Shader::set_default_texture_param(const String param, const Ref<Texture> texture) {
	___godot_icall_void_String_Object(___mb.mb_set_default_texture_param, (const Object *) this, param, texture.ptr());
}

}