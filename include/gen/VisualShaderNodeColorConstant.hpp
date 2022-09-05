#ifndef GODOT_CPP_VISUALSHADERNODECOLORCONSTANT_HPP
#define GODOT_CPP_VISUALSHADERNODECOLORCONSTANT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeColorConstant : public VisualShaderNode {
	struct ___method_bindings {
		godot_method_bind *mb_get_constant;
		godot_method_bind *mb_set_constant;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeColorConstant"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeColorConstant"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static VisualShaderNodeColorConstant *_new();

	// methods
	Color get_constant() const;
	void set_constant(const Color value);

};

}

#endif