#ifndef GODOT_CPP_AUDIOEFFECTSPECTRUMANALYZERINSTANCE_HPP
#define GODOT_CPP_AUDIOEFFECTSPECTRUMANALYZERINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AudioEffectInstance.hpp"
namespace godot {


class AudioEffectSpectrumAnalyzerInstance : public AudioEffectInstance {
	struct ___method_bindings {
		godot_method_bind *mb_get_magnitude_for_frequency_range;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectSpectrumAnalyzerInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectSpectrumAnalyzerInstance"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum MagnitudeMode {
		MAGNITUDE_AVERAGE = 0,
		MAGNITUDE_MAX = 1,
	};

	// constants

	// methods
	Vector2 get_magnitude_for_frequency_range(const real_t from_hz, const real_t to_hz, const int64_t mode = 1) const;

};

}

#endif