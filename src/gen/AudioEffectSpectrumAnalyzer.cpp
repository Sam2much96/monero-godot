#include "AudioEffectSpectrumAnalyzer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioEffectSpectrumAnalyzer::___method_bindings AudioEffectSpectrumAnalyzer::___mb = {};

void *AudioEffectSpectrumAnalyzer::_detail_class_tag = nullptr;

void AudioEffectSpectrumAnalyzer::___init_method_bindings() {
	___mb.mb_get_buffer_length = godot::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "get_buffer_length");
	___mb.mb_get_fft_size = godot::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "get_fft_size");
	___mb.mb_get_tap_back_pos = godot::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "get_tap_back_pos");
	___mb.mb_set_buffer_length = godot::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "set_buffer_length");
	___mb.mb_set_fft_size = godot::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "set_fft_size");
	___mb.mb_set_tap_back_pos = godot::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzer", "set_tap_back_pos");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioEffectSpectrumAnalyzer");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AudioEffectSpectrumAnalyzer *AudioEffectSpectrumAnalyzer::_new()
{
	return (AudioEffectSpectrumAnalyzer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioEffectSpectrumAnalyzer")());
}
real_t AudioEffectSpectrumAnalyzer::get_buffer_length() const {
	return ___godot_icall_float(___mb.mb_get_buffer_length, (const Object *) this);
}

AudioEffectSpectrumAnalyzer::FFT_Size AudioEffectSpectrumAnalyzer::get_fft_size() const {
	return (AudioEffectSpectrumAnalyzer::FFT_Size) ___godot_icall_int(___mb.mb_get_fft_size, (const Object *) this);
}

real_t AudioEffectSpectrumAnalyzer::get_tap_back_pos() const {
	return ___godot_icall_float(___mb.mb_get_tap_back_pos, (const Object *) this);
}

void AudioEffectSpectrumAnalyzer::set_buffer_length(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_buffer_length, (const Object *) this, seconds);
}

void AudioEffectSpectrumAnalyzer::set_fft_size(const int64_t size) {
	___godot_icall_void_int(___mb.mb_set_fft_size, (const Object *) this, size);
}

void AudioEffectSpectrumAnalyzer::set_tap_back_pos(const real_t seconds) {
	___godot_icall_void_float(___mb.mb_set_tap_back_pos, (const Object *) this, seconds);
}

}