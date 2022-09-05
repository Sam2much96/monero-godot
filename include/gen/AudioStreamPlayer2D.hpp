#ifndef GODOT_CPP_AUDIOSTREAMPLAYER2D_HPP
#define GODOT_CPP_AUDIOSTREAMPLAYER2D_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node2D.hpp"
namespace godot {

class AudioStream;
class AudioStreamPlayback;

class AudioStreamPlayer2D : public Node2D {
	struct ___method_bindings {
		godot_method_bind *mb__bus_layout_changed;
		godot_method_bind *mb__is_active;
		godot_method_bind *mb__set_playing;
		godot_method_bind *mb_get_area_mask;
		godot_method_bind *mb_get_attenuation;
		godot_method_bind *mb_get_bus;
		godot_method_bind *mb_get_max_distance;
		godot_method_bind *mb_get_pitch_scale;
		godot_method_bind *mb_get_playback_position;
		godot_method_bind *mb_get_stream;
		godot_method_bind *mb_get_stream_paused;
		godot_method_bind *mb_get_stream_playback;
		godot_method_bind *mb_get_volume_db;
		godot_method_bind *mb_is_autoplay_enabled;
		godot_method_bind *mb_is_playing;
		godot_method_bind *mb_play;
		godot_method_bind *mb_seek;
		godot_method_bind *mb_set_area_mask;
		godot_method_bind *mb_set_attenuation;
		godot_method_bind *mb_set_autoplay;
		godot_method_bind *mb_set_bus;
		godot_method_bind *mb_set_max_distance;
		godot_method_bind *mb_set_pitch_scale;
		godot_method_bind *mb_set_stream;
		godot_method_bind *mb_set_stream_paused;
		godot_method_bind *mb_set_volume_db;
		godot_method_bind *mb_stop;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "AudioStreamPlayer2D"; }
	static inline const char *___get_godot_class_name() { return (const char *) "AudioStreamPlayer2D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AudioStreamPlayer2D *_new();

	// methods
	void _bus_layout_changed();
	bool _is_active() const;
	void _set_playing(const bool enable);
	int64_t get_area_mask() const;
	real_t get_attenuation() const;
	String get_bus() const;
	real_t get_max_distance() const;
	real_t get_pitch_scale() const;
	real_t get_playback_position();
	Ref<AudioStream> get_stream() const;
	bool get_stream_paused() const;
	Ref<AudioStreamPlayback> get_stream_playback();
	real_t get_volume_db() const;
	bool is_autoplay_enabled();
	bool is_playing() const;
	void play(const real_t from_position = 0);
	void seek(const real_t to_position);
	void set_area_mask(const int64_t mask);
	void set_attenuation(const real_t curve);
	void set_autoplay(const bool enable);
	void set_bus(const String bus);
	void set_max_distance(const real_t pixels);
	void set_pitch_scale(const real_t pitch_scale);
	void set_stream(const Ref<AudioStream> stream);
	void set_stream_paused(const bool pause);
	void set_volume_db(const real_t volume_db);
	void stop();

};

}

#endif