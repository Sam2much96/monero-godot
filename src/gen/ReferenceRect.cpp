#include "ReferenceRect.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ReferenceRect::___method_bindings ReferenceRect::___mb = {};

void *ReferenceRect::_detail_class_tag = nullptr;

void ReferenceRect::___init_method_bindings() {
	___mb.mb_get_border_color = godot::api->godot_method_bind_get_method("ReferenceRect", "get_border_color");
	___mb.mb_get_border_width = godot::api->godot_method_bind_get_method("ReferenceRect", "get_border_width");
	___mb.mb_get_editor_only = godot::api->godot_method_bind_get_method("ReferenceRect", "get_editor_only");
	___mb.mb_set_border_color = godot::api->godot_method_bind_get_method("ReferenceRect", "set_border_color");
	___mb.mb_set_border_width = godot::api->godot_method_bind_get_method("ReferenceRect", "set_border_width");
	___mb.mb_set_editor_only = godot::api->godot_method_bind_get_method("ReferenceRect", "set_editor_only");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "ReferenceRect");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

ReferenceRect *ReferenceRect::_new()
{
	return (ReferenceRect *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ReferenceRect")());
}
Color ReferenceRect::get_border_color() const {
	return ___godot_icall_Color(___mb.mb_get_border_color, (const Object *) this);
}

real_t ReferenceRect::get_border_width() const {
	return ___godot_icall_float(___mb.mb_get_border_width, (const Object *) this);
}

bool ReferenceRect::get_editor_only() const {
	return ___godot_icall_bool(___mb.mb_get_editor_only, (const Object *) this);
}

void ReferenceRect::set_border_color(const Color color) {
	___godot_icall_void_Color(___mb.mb_set_border_color, (const Object *) this, color);
}

void ReferenceRect::set_border_width(const real_t width) {
	___godot_icall_void_float(___mb.mb_set_border_width, (const Object *) this, width);
}

void ReferenceRect::set_editor_only(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_editor_only, (const Object *) this, enabled);
}

}