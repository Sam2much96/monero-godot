#ifndef GODOT_CPP_VISUALSHADERNODECUSTOM_HPP
#define GODOT_CPP_VISUALSHADERNODECUSTOM_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeCustom : public VisualShaderNode {
	struct ___method_bindings {
		godot_method_bind *mb__get_category;
		godot_method_bind *mb__get_code;
		godot_method_bind *mb__get_description;
		godot_method_bind *mb__get_global_code;
		godot_method_bind *mb__get_input_port_count;
		godot_method_bind *mb__get_input_port_name;
		godot_method_bind *mb__get_input_port_type;
		godot_method_bind *mb__get_name;
		godot_method_bind *mb__get_output_port_count;
		godot_method_bind *mb__get_output_port_name;
		godot_method_bind *mb__get_output_port_type;
		godot_method_bind *mb__get_return_icon_type;
		godot_method_bind *mb__get_subcategory;
		godot_method_bind *mb__is_initialized;
		godot_method_bind *mb__set_initialized;
		godot_method_bind *mb__set_input_port_default_value;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeCustom"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualShaderNodeCustom"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static VisualShaderNodeCustom *_new();

	// methods
	String _get_category();
	String _get_code(const Array input_vars, const Array output_vars, const int64_t mode, const int64_t type);
	String _get_description();
	String _get_global_code(const int64_t mode);
	int64_t _get_input_port_count();
	String _get_input_port_name(const int64_t port);
	int64_t _get_input_port_type(const int64_t port);
	String _get_name();
	int64_t _get_output_port_count();
	String _get_output_port_name(const int64_t port);
	int64_t _get_output_port_type(const int64_t port);
	int64_t _get_return_icon_type();
	String _get_subcategory();
	bool _is_initialized();
	void _set_initialized(const bool enabled);
	void _set_input_port_default_value(const int64_t port, const Variant value);

};

}

#endif