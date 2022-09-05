#ifndef GODOT_CPP_QUADMESH_HPP
#define GODOT_CPP_QUADMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "PrimitiveMesh.hpp"
namespace godot {


class QuadMesh : public PrimitiveMesh {
	struct ___method_bindings {
		godot_method_bind *mb_get_size;
		godot_method_bind *mb_set_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "QuadMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "QuadMesh"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static QuadMesh *_new();

	// methods
	Vector2 get_size() const;
	void set_size(const Vector2 size);

};

}

#endif