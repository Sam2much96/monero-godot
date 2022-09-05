#include "AudioStreamMP3.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioStreamMP3::___method_bindings AudioStreamMP3::___mb = {};

void *AudioStreamMP3::_detail_class_tag = nullptr;

void AudioStreamMP3::___init_method_bindings() {
	___mb.mb_get_data = godot::api->godot_method_bind_get_method("AudioStreamMP3", "get_data");
	___mb.mb_get_loop_offset = godot::api->godot_method_bind_get_method("AudioStreamMP3", "get_loop_offset");
	___mb.mb_has_loop = godot::api->godot_method_bind_get_method("AudioStreamMP3", "has_loop");
	___mb.mb_set_data = godot::api->godot_method_bind_get_method("AudioStreamMP3", "set_data");
	___mb.mb_set_loop = godot::api->godot_method_bind_get_method("AudioStreamMP3", "set_loop");
	___mb.mb_set_loop_offset = godot::api->godot_method_bind_get_method("AudioStreamMP3", "set_loop_offset");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioStreamMP3");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AudioStreamMP3 *AudioStreamMP3::_new()
{
	return (AudioStreamMP3 *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioStreamMP3")());
}
PoolByteArray AudioStreamMP3::get_data() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_data, (const Object *) this);
}

real_t AudioStreamMP3::get_loop_offset() const {
	return ___godot_icall_float(___mb.mb_get_loop_offset, (const Object *) this);
}

bool AudioStreamMP3::has_loop() const {
	return ___godot_icall_bool(___mb.mb_has_loop, (const Object *) this);
}

void AudioStreamMP3::set_data(const PoolByteArray data) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_data, (const Object *) this, data);
}

void AudioStreamMP3::set_loop(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_loop, (const Object *) this, enable);
}

void AudioStreamMP3::set_loop_offset(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_loop_offset, (const Object *) this, seconds);
}

}