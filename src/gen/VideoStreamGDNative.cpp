#include "VideoStreamGDNative.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VideoStreamGDNative::___method_bindings VideoStreamGDNative::___mb = {};

void *VideoStreamGDNative::_detail_class_tag = nullptr;

void VideoStreamGDNative::___init_method_bindings() {
	___mb.mb_get_file = godot::api->godot_method_bind_get_method("VideoStreamGDNative", "get_file");
	___mb.mb_set_file = godot::api->godot_method_bind_get_method("VideoStreamGDNative", "set_file");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VideoStreamGDNative");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VideoStreamGDNative *VideoStreamGDNative::_new()
{
	return (VideoStreamGDNative *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VideoStreamGDNative")());
}
String VideoStreamGDNative::get_file() {
	return ___godot_icall_String(___mb.mb_get_file, (const Object *) this);
}

void VideoStreamGDNative::set_file(const String file) {
	___godot_icall_void_String(___mb.mb_set_file, (const Object *) this, file);
}

}