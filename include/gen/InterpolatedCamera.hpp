#ifndef GODOT_CPP_INTERPOLATEDCAMERA_HPP
#define GODOT_CPP_INTERPOLATEDCAMERA_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Camera.hpp"
namespace godot {

class Object;

class InterpolatedCamera : public Camera {
	struct ___method_bindings {
		godot_method_bind *mb_get_speed;
		godot_method_bind *mb_get_target_path;
		godot_method_bind *mb_is_interpolation_enabled;
		godot_method_bind *mb_set_interpolation_enabled;
		godot_method_bind *mb_set_speed;
		godot_method_bind *mb_set_target;
		godot_method_bind *mb_set_target_path;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InterpolatedCamera"; }
	static inline const char *___get_godot_class_name() { return (const char *) "InterpolatedCamera"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static InterpolatedCamera *_new();

	// methods
	real_t get_speed() const;
	NodePath get_target_path() const;
	bool is_interpolation_enabled() const;
	void set_interpolation_enabled(const bool target_path);
	void set_speed(const real_t speed);
	void set_target(const Object *target);
	void set_target_path(const NodePath target_path);

};

}

#endif