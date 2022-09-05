#ifndef GODOT_CPP_CYLINDERSHAPE_HPP
#define GODOT_CPP_CYLINDERSHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Shape.hpp"
namespace godot {


class CylinderShape : public Shape {
	struct ___method_bindings {
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_radius;
		godot_method_bind *mb_set_height;
		godot_method_bind *mb_set_radius;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CylinderShape"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CylinderShape"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CylinderShape *_new();

	// methods
	real_t get_height() const;
	real_t get_radius() const;
	void set_height(const real_t height);
	void set_radius(const real_t radius);

};

}

#endif