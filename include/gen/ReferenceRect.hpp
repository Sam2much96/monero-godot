#ifndef GODOT_CPP_REFERENCERECT_HPP
#define GODOT_CPP_REFERENCERECT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Control.hpp"
namespace godot {


class ReferenceRect : public Control {
	struct ___method_bindings {
		godot_method_bind *mb_get_border_color;
		godot_method_bind *mb_get_border_width;
		godot_method_bind *mb_get_editor_only;
		godot_method_bind *mb_set_border_color;
		godot_method_bind *mb_set_border_width;
		godot_method_bind *mb_set_editor_only;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ReferenceRect"; }
	static inline const char *___get_godot_class_name() { return (const char *) "ReferenceRect"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ReferenceRect *_new();

	// methods
	Color get_border_color() const;
	real_t get_border_width() const;
	bool get_editor_only() const;
	void set_border_color(const Color color);
	void set_border_width(const real_t width);
	void set_editor_only(const bool enabled);

};

}

#endif