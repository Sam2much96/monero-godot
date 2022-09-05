#include "CryptoKey.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CryptoKey::___method_bindings CryptoKey::___mb = {};

void *CryptoKey::_detail_class_tag = nullptr;

void CryptoKey::___init_method_bindings() {
	___mb.mb_load = godot::api->godot_method_bind_get_method("CryptoKey", "load");
	___mb.mb_save = godot::api->godot_method_bind_get_method("CryptoKey", "save");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "CryptoKey");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

CryptoKey *CryptoKey::_new()
{
	return (CryptoKey *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CryptoKey")());
}
Error CryptoKey::load(const String path) {
	return (Error) ___godot_icall_int_String(___mb.mb_load, (const Object *) this, path);
}

Error CryptoKey::save(const String path) {
	return (Error) ___godot_icall_int_String(___mb.mb_save, (const Object *) this, path);
}

}