#ifndef GODOT_CPP_CURVETEXTURE_HPP
#define GODOT_CPP_CURVETEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Texture.hpp"
namespace godot {

class Curve;

class CurveTexture : public Texture {
	struct ___method_bindings {
		godot_method_bind *mb__update;
		godot_method_bind *mb_get_curve;
		godot_method_bind *mb_set_curve;
		godot_method_bind *mb_set_width;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CurveTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CurveTexture"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CurveTexture *_new();

	// methods
	void _update();
	Ref<Curve> get_curve() const;
	void set_curve(const Ref<Curve> curve);
	void set_width(const int64_t width);

};

}

#endif