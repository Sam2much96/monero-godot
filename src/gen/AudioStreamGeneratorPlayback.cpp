#include "AudioStreamGeneratorPlayback.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioStreamGeneratorPlayback::___method_bindings AudioStreamGeneratorPlayback::___mb = {};

void *AudioStreamGeneratorPlayback::_detail_class_tag = nullptr;

void AudioStreamGeneratorPlayback::___init_method_bindings() {
	___mb.mb_can_push_buffer = godot::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "can_push_buffer");
	___mb.mb_clear_buffer = godot::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "clear_buffer");
	___mb.mb_get_frames_available = godot::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "get_frames_available");
	___mb.mb_get_skips = godot::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "get_skips");
	___mb.mb_push_buffer = godot::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "push_buffer");
	___mb.mb_push_frame = godot::api->godot_method_bind_get_method("AudioStreamGeneratorPlayback", "push_frame");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioStreamGeneratorPlayback");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

bool AudioStreamGeneratorPlayback::can_push_buffer(const int64_t amount) const {
	return ___godot_icall_bool_int(___mb.mb_can_push_buffer, (const Object *) this, amount);
}

void AudioStreamGeneratorPlayback::clear_buffer() {
	___godot_icall_void(___mb.mb_clear_buffer, (const Object *) this);
}

int64_t AudioStreamGeneratorPlayback::get_frames_available() const {
	return ___godot_icall_int(___mb.mb_get_frames_available, (const Object *) this);
}

int64_t AudioStreamGeneratorPlayback::get_skips() const {
	return ___godot_icall_int(___mb.mb_get_skips, (const Object *) this);
}

bool AudioStreamGeneratorPlayback::push_buffer(const PoolVector2Array frames) {
	return ___godot_icall_bool_PoolVector2Array(___mb.mb_push_buffer, (const Object *) this, frames);
}

bool AudioStreamGeneratorPlayback::push_frame(const Vector2 frame) {
	return ___godot_icall_bool_Vector2(___mb.mb_push_frame, (const Object *) this, frame);
}

}