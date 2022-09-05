#include "AudioEffectSpectrumAnalyzerInstance.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioEffectSpectrumAnalyzerInstance::___method_bindings AudioEffectSpectrumAnalyzerInstance::___mb = {};

void *AudioEffectSpectrumAnalyzerInstance::_detail_class_tag = nullptr;

void AudioEffectSpectrumAnalyzerInstance::___init_method_bindings() {
	___mb.mb_get_magnitude_for_frequency_range = godot::api->godot_method_bind_get_method("AudioEffectSpectrumAnalyzerInstance", "get_magnitude_for_frequency_range");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioEffectSpectrumAnalyzerInstance");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Vector2 AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range(const real_t from_hz, const real_t to_hz, const int64_t mode) const {
	return ___godot_icall_Vector2_float_float_int(___mb.mb_get_magnitude_for_frequency_range, (const Object *) this, from_hz, to_hz, mode);
}

}