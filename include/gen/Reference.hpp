#ifndef GODOT_CPP_REFERENCE_HPP
#define GODOT_CPP_REFERENCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/TagDB.hpp>

#include "Object.hpp"
namespace godot {


class Reference : public Object {
	struct ___method_bindings {
		godot_method_bind *mb_init_ref;
		godot_method_bind *mb_reference;
		godot_method_bind *mb_unreference;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Reference"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Reference"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Reference *_new();

	// methods
	bool init_ref();
	bool reference();
	bool unreference();

};

}

#endif