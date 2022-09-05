#include "AudioEffectCapture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioEffectCapture::___method_bindings AudioEffectCapture::___mb = {};

void *AudioEffectCapture::_detail_class_tag = nullptr;

void AudioEffectCapture::___init_method_bindings() {
	___mb.mb_can_get_buffer = godot::api->godot_method_bind_get_method("AudioEffectCapture", "can_get_buffer");
	___mb.mb_clear_buffer = godot::api->godot_method_bind_get_method("AudioEffectCapture", "clear_buffer");
	___mb.mb_get_buffer = godot::api->godot_method_bind_get_method("AudioEffectCapture", "get_buffer");
	___mb.mb_get_buffer_length = godot::api->godot_method_bind_get_method("AudioEffectCapture", "get_buffer_length");
	___mb.mb_get_buffer_length_frames = godot::api->godot_method_bind_get_method("AudioEffectCapture", "get_buffer_length_frames");
	___mb.mb_get_discarded_frames = godot::api->godot_method_bind_get_method("AudioEffectCapture", "get_discarded_frames");
	___mb.mb_get_frames_available = godot::api->godot_method_bind_get_method("AudioEffectCapture", "get_frames_available");
	___mb.mb_get_pushed_frames = godot::api->godot_method_bind_get_method("AudioEffectCapture", "get_pushed_frames");
	___mb.mb_set_buffer_length = godot::api->godot_method_bind_get_method("AudioEffectCapture", "set_buffer_length");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioEffectCapture");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AudioEffectCapture *AudioEffectCapture::_new()
{
	return (AudioEffectCapture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioEffectCapture")());
}
bool AudioEffectCapture::can_get_buffer(const int64_t frames) const {
	return ___godot_icall_bool_int(___mb.mb_can_get_buffer, (const Object *) this, frames);
}

void AudioEffectCapture::clear_buffer() {
	___godot_icall_void(___mb.mb_clear_buffer, (const Object *) this);
}

PoolVector2Array AudioEffectCapture::get_buffer(const int64_t frames) {
	return ___godot_icall_PoolVector2Array_int(___mb.mb_get_buffer, (const Object *) this, frames);
}

real_t AudioEffectCapture::get_buffer_length() {
	return ___godot_icall_float(___mb.mb_get_buffer_length, (const Object *) this);
}

int64_t AudioEffectCapture::get_buffer_length_frames() const {
	return ___godot_icall_int(___mb.mb_get_buffer_length_frames, (const Object *) this);
}

int64_t AudioEffectCapture::get_discarded_frames() const {
	return ___godot_icall_int(___mb.mb_get_discarded_frames, (const Object *) this);
}

int64_t AudioEffectCapture::get_frames_available() const {
	return ___godot_icall_int(___mb.mb_get_frames_available, (const Object *) this);
}

int64_t AudioEffectCapture::get_pushed_frames() const {
	return ___godot_icall_int(___mb.mb_get_pushed_frames, (const Object *) this);
}

void AudioEffectCapture::set_buffer_length(const real_t buffer_length_seconds) {
	___godot_icall_void_float(___mb.mb_set_buffer_length, (const Object *) this, buffer_length_seconds);
}

}