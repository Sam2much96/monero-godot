#ifndef GODOT_CPP_VISUALSHADERNODECOLORFUNC_HPP
#define GODOT_CPP_VISUALSHADERNODECOLORFUNC_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeColorFunc.hpp"

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeColorFunc : public VisualShaderNode {
	struct ___method_bindings {
		godot_method_bind *mb_get_function;
		godot_method_bind *mb_set_function;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeColorFunc"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeColorFunc"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Function {
		FUNC_GRAYSCALE = 0,
		FUNC_SEPIA = 1,
	};

	// constants


	static VisualShaderNodeColorFunc *_new();

	// methods
	VisualShaderNodeColorFunc::Function get_function() const;
	void set_function(const int64_t func);

};

}

#endif