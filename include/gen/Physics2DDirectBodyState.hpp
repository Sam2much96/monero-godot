#ifndef GODOT_CPP_PHYSICS2DDIRECTBODYSTATE_HPP
#define GODOT_CPP_PHYSICS2DDIRECTBODYSTATE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Object.hpp"
namespace godot {

class Object;
class Physics2DDirectSpaceState;

class Physics2DDirectBodyState : public Object {
	struct ___method_bindings {
		godot_method_bind *mb_add_central_force;
		godot_method_bind *mb_add_force;
		godot_method_bind *mb_add_torque;
		godot_method_bind *mb_apply_central_impulse;
		godot_method_bind *mb_apply_impulse;
		godot_method_bind *mb_apply_torque_impulse;
		godot_method_bind *mb_get_angular_velocity;
		godot_method_bind *mb_get_contact_collider;
		godot_method_bind *mb_get_contact_collider_id;
		godot_method_bind *mb_get_contact_collider_object;
		godot_method_bind *mb_get_contact_collider_position;
		godot_method_bind *mb_get_contact_collider_shape;
		godot_method_bind *mb_get_contact_collider_shape_metadata;
		godot_method_bind *mb_get_contact_collider_velocity_at_position;
		godot_method_bind *mb_get_contact_count;
		godot_method_bind *mb_get_contact_local_normal;
		godot_method_bind *mb_get_contact_local_position;
		godot_method_bind *mb_get_contact_local_shape;
		godot_method_bind *mb_get_inverse_inertia;
		godot_method_bind *mb_get_inverse_mass;
		godot_method_bind *mb_get_linear_velocity;
		godot_method_bind *mb_get_space_state;
		godot_method_bind *mb_get_step;
		godot_method_bind *mb_get_total_angular_damp;
		godot_method_bind *mb_get_total_gravity;
		godot_method_bind *mb_get_total_linear_damp;
		godot_method_bind *mb_get_transform;
		godot_method_bind *mb_integrate_forces;
		godot_method_bind *mb_is_sleeping;
		godot_method_bind *mb_set_angular_velocity;
		godot_method_bind *mb_set_linear_velocity;
		godot_method_bind *mb_set_sleep_state;
		godot_method_bind *mb_set_transform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Physics2DDirectBodyState"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Physics2DDirectBodyState"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void add_central_force(const Vector2 force);
	void add_force(const Vector2 offset, const Vector2 force);
	void add_torque(const real_t torque);
	void apply_central_impulse(const Vector2 impulse);
	void apply_impulse(const Vector2 offset, const Vector2 impulse);
	void apply_torque_impulse(const real_t impulse);
	real_t get_angular_velocity() const;
	RID get_contact_collider(const int64_t contact_idx) const;
	int64_t get_contact_collider_id(const int64_t contact_idx) const;
	Object *get_contact_collider_object(const int64_t contact_idx) const;
	Vector2 get_contact_collider_position(const int64_t contact_idx) const;
	int64_t get_contact_collider_shape(const int64_t contact_idx) const;
	Variant get_contact_collider_shape_metadata(const int64_t contact_idx) const;
	Vector2 get_contact_collider_velocity_at_position(const int64_t contact_idx) const;
	int64_t get_contact_count() const;
	Vector2 get_contact_local_normal(const int64_t contact_idx) const;
	Vector2 get_contact_local_position(const int64_t contact_idx) const;
	int64_t get_contact_local_shape(const int64_t contact_idx) const;
	real_t get_inverse_inertia() const;
	real_t get_inverse_mass() const;
	Vector2 get_linear_velocity() const;
	Physics2DDirectSpaceState *get_space_state();
	real_t get_step() const;
	real_t get_total_angular_damp() const;
	Vector2 get_total_gravity() const;
	real_t get_total_linear_damp() const;
	Transform2D get_transform() const;
	void integrate_forces();
	bool is_sleeping() const;
	void set_angular_velocity(const real_t velocity);
	void set_linear_velocity(const Vector2 velocity);
	void set_sleep_state(const bool enabled);
	void set_transform(const Transform2D transform);

};

}

#endif