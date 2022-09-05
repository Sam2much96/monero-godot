#include "ConfigFile.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ConfigFile::___method_bindings ConfigFile::___mb = {};

void *ConfigFile::_detail_class_tag = nullptr;

void ConfigFile::___init_method_bindings() {
	___mb.mb_clear = godot::api->godot_method_bind_get_method("ConfigFile", "clear");
	___mb.mb_erase_section = godot::api->godot_method_bind_get_method("ConfigFile", "erase_section");
	___mb.mb_erase_section_key = godot::api->godot_method_bind_get_method("ConfigFile", "erase_section_key");
	___mb.mb_get_section_keys = godot::api->godot_method_bind_get_method("ConfigFile", "get_section_keys");
	___mb.mb_get_sections = godot::api->godot_method_bind_get_method("ConfigFile", "get_sections");
	___mb.mb_get_value = godot::api->godot_method_bind_get_method("ConfigFile", "get_value");
	___mb.mb_has_section = godot::api->godot_method_bind_get_method("ConfigFile", "has_section");
	___mb.mb_has_section_key = godot::api->godot_method_bind_get_method("ConfigFile", "has_section_key");
	___mb.mb_load = godot::api->godot_method_bind_get_method("ConfigFile", "load");
	___mb.mb_load_encrypted = godot::api->godot_method_bind_get_method("ConfigFile", "load_encrypted");
	___mb.mb_load_encrypted_pass = godot::api->godot_method_bind_get_method("ConfigFile", "load_encrypted_pass");
	___mb.mb_parse = godot::api->godot_method_bind_get_method("ConfigFile", "parse");
	___mb.mb_save = godot::api->godot_method_bind_get_method("ConfigFile", "save");
	___mb.mb_save_encrypted = godot::api->godot_method_bind_get_method("ConfigFile", "save_encrypted");
	___mb.mb_save_encrypted_pass = godot::api->godot_method_bind_get_method("ConfigFile", "save_encrypted_pass");
	___mb.mb_set_value = godot::api->godot_method_bind_get_method("ConfigFile", "set_value");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "ConfigFile");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

ConfigFile *ConfigFile::_new()
{
	return (ConfigFile *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ConfigFile")());
}
void ConfigFile::clear() {
	___godot_icall_void(___mb.mb_clear, (const Object *) this);
}

void ConfigFile::erase_section(const String section) {
	___godot_icall_void_String(___mb.mb_erase_section, (const Object *) this, section);
}

void ConfigFile::erase_section_key(const String section, const String key) {
	___godot_icall_void_String_String(___mb.mb_erase_section_key, (const Object *) this, section, key);
}

PoolStringArray ConfigFile::get_section_keys(const String section) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_section_keys, (const Object *) this, section);
}

PoolStringArray ConfigFile::get_sections() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_sections, (const Object *) this);
}

Variant ConfigFile::get_value(const String section, const String key, const Variant _default) const {
	return ___godot_icall_Variant_String_String_Variant(___mb.mb_get_value, (const Object *) this, section, key, _default);
}

bool ConfigFile::has_section(const String section) const {
	return ___godot_icall_bool_String(___mb.mb_has_section, (const Object *) this, section);
}

bool ConfigFile::has_section_key(const String section, const String key) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_section_key, (const Object *) this, section, key);
}

Error ConfigFile::load(const String path) {
	return (Error) ___godot_icall_int_String(___mb.mb_load, (const Object *) this, path);
}

Error ConfigFile::load_encrypted(const String path, const PoolByteArray key) {
	return (Error) ___godot_icall_int_String_PoolByteArray(___mb.mb_load_encrypted, (const Object *) this, path, key);
}

Error ConfigFile::load_encrypted_pass(const String path, const String password) {
	return (Error) ___godot_icall_int_String_String(___mb.mb_load_encrypted_pass, (const Object *) this, path, password);
}

Error ConfigFile::parse(const String data) {
	return (Error) ___godot_icall_int_String(___mb.mb_parse, (const Object *) this, data);
}

Error ConfigFile::save(const String path) {
	return (Error) ___godot_icall_int_String(___mb.mb_save, (const Object *) this, path);
}

Error ConfigFile::save_encrypted(const String path, const PoolByteArray key) {
	return (Error) ___godot_icall_int_String_PoolByteArray(___mb.mb_save_encrypted, (const Object *) this, path, key);
}

Error ConfigFile::save_encrypted_pass(const String path, const String password) {
	return (Error) ___godot_icall_int_String_String(___mb.mb_save_encrypted_pass, (const Object *) this, path, password);
}

void ConfigFile::set_value(const String section, const String key, const Variant value) {
	___godot_icall_void_String_String_Variant(___mb.mb_set_value, (const Object *) this, section, key, value);
}

}