#ifndef GODOT_CPP_KINEMATICCOLLISION_HPP
#define GODOT_CPP_KINEMATICCOLLISION_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class Object;

class KinematicCollision : public Reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_collider;
		godot_method_bind *mb_get_collider_id;
		godot_method_bind *mb_get_collider_metadata;
		godot_method_bind *mb_get_collider_rid;
		godot_method_bind *mb_get_collider_shape;
		godot_method_bind *mb_get_collider_shape_index;
		godot_method_bind *mb_get_collider_velocity;
		godot_method_bind *mb_get_local_shape;
		godot_method_bind *mb_get_normal;
		godot_method_bind *mb_get_position;
		godot_method_bind *mb_get_remainder;
		godot_method_bind *mb_get_travel;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "KinematicCollision"; }
	static inline const char *___get_godot_class_name() { return (const char *) "KinematicCollision"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static KinematicCollision *_new();

	// methods
	Object *get_collider() const;
	int64_t get_collider_id() const;
	Variant get_collider_metadata() const;
	RID get_collider_rid() const;
	Object *get_collider_shape() const;
	int64_t get_collider_shape_index() const;
	Vector3 get_collider_velocity() const;
	Object *get_local_shape() const;
	Vector3 get_normal() const;
	Vector3 get_position() const;
	Vector3 get_remainder() const;
	Vector3 get_travel() const;

};

}

#endif