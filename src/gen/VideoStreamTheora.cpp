#include "VideoStreamTheora.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VideoStreamTheora::___method_bindings VideoStreamTheora::___mb = {};

void *VideoStreamTheora::_detail_class_tag = nullptr;

void VideoStreamTheora::___init_method_bindings() {
	___mb.mb_get_file = godot::api->godot_method_bind_get_method("VideoStreamTheora", "get_file");
	___mb.mb_set_file = godot::api->godot_method_bind_get_method("VideoStreamTheora", "set_file");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VideoStreamTheora");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VideoStreamTheora *VideoStreamTheora::_new()
{
	return (VideoStreamTheora *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VideoStreamTheora")());
}
String VideoStreamTheora::get_file() {
	return ___godot_icall_String(___mb.mb_get_file, (const Object *) this);
}

void VideoStreamTheora::set_file(const String file) {
	___godot_icall_void_String(___mb.mb_set_file, (const Object *) this, file);
}

}