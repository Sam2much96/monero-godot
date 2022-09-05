#include "AudioEffectRecord.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AudioStreamSample.hpp"


namespace godot {


AudioEffectRecord::___method_bindings AudioEffectRecord::___mb = {};

void *AudioEffectRecord::_detail_class_tag = nullptr;

void AudioEffectRecord::___init_method_bindings() {
	___mb.mb_get_format = godot::api->godot_method_bind_get_method("AudioEffectRecord", "get_format");
	___mb.mb_get_recording = godot::api->godot_method_bind_get_method("AudioEffectRecord", "get_recording");
	___mb.mb_is_recording_active = godot::api->godot_method_bind_get_method("AudioEffectRecord", "is_recording_active");
	___mb.mb_set_format = godot::api->godot_method_bind_get_method("AudioEffectRecord", "set_format");
	___mb.mb_set_recording_active = godot::api->godot_method_bind_get_method("AudioEffectRecord", "set_recording_active");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioEffectRecord");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AudioEffectRecord *AudioEffectRecord::_new()
{
	return (AudioEffectRecord *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioEffectRecord")());
}
AudioStreamSample::Format AudioEffectRecord::get_format() const {
	return (AudioStreamSample::Format) ___godot_icall_int(___mb.mb_get_format, (const Object *) this);
}

Ref<AudioStreamSample> AudioEffectRecord::get_recording() const {
	return Ref<AudioStreamSample>::__internal_constructor(___godot_icall_Object(___mb.mb_get_recording, (const Object *) this));
}

bool AudioEffectRecord::is_recording_active() const {
	return ___godot_icall_bool(___mb.mb_is_recording_active, (const Object *) this);
}

void AudioEffectRecord::set_format(const int64_t format) {
	___godot_icall_void_int(___mb.mb_set_format, (const Object *) this, format);
}

void AudioEffectRecord::set_recording_active(const bool record) {
	___godot_icall_void_bool(___mb.mb_set_recording_active, (const Object *) this, record);
}

}