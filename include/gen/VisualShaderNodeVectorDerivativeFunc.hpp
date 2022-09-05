#ifndef GODOT_CPP_VISUALSHADERNODEVECTORDERIVATIVEFUNC_HPP
#define GODOT_CPP_VISUALSHADERNODEVECTORDERIVATIVEFUNC_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeVectorDerivativeFunc.hpp"

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeVectorDerivativeFunc : public VisualShaderNode {
	struct ___method_bindings {
		godot_method_bind *mb_get_function;
		godot_method_bind *mb_set_function;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeVectorDerivativeFunc"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeVectorDerivativeFunc"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Function {
		FUNC_SUM = 0,
		FUNC_X = 1,
		FUNC_Y = 2,
	};

	// constants


	static VisualShaderNodeVectorDerivativeFunc *_new();

	// methods
	VisualShaderNodeVectorDerivativeFunc::Function get_function() const;
	void set_function(const int64_t func);

};

}

#endif