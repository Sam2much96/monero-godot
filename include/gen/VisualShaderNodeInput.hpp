#ifndef GODOT_CPP_VISUALSHADERNODEINPUT_HPP
#define GODOT_CPP_VISUALSHADERNODEINPUT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeInput : public VisualShaderNode {
	struct ___method_bindings {
		godot_method_bind *mb_get_input_name;
		godot_method_bind *mb_get_input_real_name;
		godot_method_bind *mb_set_input_name;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeInput"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeInput"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static VisualShaderNodeInput *_new();

	// methods
	String get_input_name() const;
	String get_input_real_name() const;
	void set_input_name(const String name);

};

}

#endif