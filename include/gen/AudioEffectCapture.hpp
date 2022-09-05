#ifndef GODOT_CPP_AUDIOEFFECTCAPTURE_HPP
#define GODOT_CPP_AUDIOEFFECTCAPTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AudioEffect.hpp"
namespace godot {


class AudioEffectCapture : public AudioEffect {
	struct ___method_bindings {
		godot_method_bind *mb_can_get_buffer;
		godot_method_bind *mb_clear_buffer;
		godot_method_bind *mb_get_buffer;
		godot_method_bind *mb_get_buffer_length;
		godot_method_bind *mb_get_buffer_length_frames;
		godot_method_bind *mb_get_discarded_frames;
		godot_method_bind *mb_get_frames_available;
		godot_method_bind *mb_get_pushed_frames;
		godot_method_bind *mb_set_buffer_length;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioEffectCapture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioEffectCapture"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AudioEffectCapture *_new();

	// methods
	bool can_get_buffer(const int64_t frames) const;
	void clear_buffer();
	PoolVector2Array get_buffer(const int64_t frames);
	real_t get_buffer_length();
	int64_t get_buffer_length_frames() const;
	int64_t get_discarded_frames() const;
	int64_t get_frames_available() const;
	int64_t get_pushed_frames() const;
	void set_buffer_length(const real_t buffer_length_seconds);

};

}

#endif