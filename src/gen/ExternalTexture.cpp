#include "ExternalTexture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ExternalTexture::___method_bindings ExternalTexture::___mb = {};

void *ExternalTexture::_detail_class_tag = nullptr;

void ExternalTexture::___init_method_bindings() {
	___mb.mb_get_external_texture_id = godot::api->godot_method_bind_get_method("ExternalTexture", "get_external_texture_id");
	___mb.mb_set_size = godot::api->godot_method_bind_get_method("ExternalTexture", "set_size");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "ExternalTexture");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

ExternalTexture *ExternalTexture::_new()
{
	return (ExternalTexture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ExternalTexture")());
}
int64_t ExternalTexture::get_external_texture_id() {
	return ___godot_icall_int(___mb.mb_get_external_texture_id, (const Object *) this);
}

void ExternalTexture::set_size(const Vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const Object *) this, size);
}

}