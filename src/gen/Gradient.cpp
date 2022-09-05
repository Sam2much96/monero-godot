#include "Gradient.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Gradient::___method_bindings Gradient::___mb = {};

void *Gradient::_detail_class_tag = nullptr;

void Gradient::___init_method_bindings() {
	___mb.mb_add_point = godot::api->godot_method_bind_get_method("Gradient", "add_point");
	___mb.mb_get_color = godot::api->godot_method_bind_get_method("Gradient", "get_color");
	___mb.mb_get_colors = godot::api->godot_method_bind_get_method("Gradient", "get_colors");
	___mb.mb_get_offset = godot::api->godot_method_bind_get_method("Gradient", "get_offset");
	___mb.mb_get_offsets = godot::api->godot_method_bind_get_method("Gradient", "get_offsets");
	___mb.mb_get_point_count = godot::api->godot_method_bind_get_method("Gradient", "get_point_count");
	___mb.mb_interpolate = godot::api->godot_method_bind_get_method("Gradient", "interpolate");
	___mb.mb_remove_point = godot::api->godot_method_bind_get_method("Gradient", "remove_point");
	___mb.mb_set_color = godot::api->godot_method_bind_get_method("Gradient", "set_color");
	___mb.mb_set_colors = godot::api->godot_method_bind_get_method("Gradient", "set_colors");
	___mb.mb_set_offset = godot::api->godot_method_bind_get_method("Gradient", "set_offset");
	___mb.mb_set_offsets = godot::api->godot_method_bind_get_method("Gradient", "set_offsets");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Gradient");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Gradient *Gradient::_new()
{
	return (Gradient *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Gradient")());
}
void Gradient::add_point(const real_t offset, const Color color) {
	___godot_icall_void_float_Color(___mb.mb_add_point, (const Object *) this, offset, color);
}

Color Gradient::get_color(const int64_t point) {
	return ___godot_icall_Color_int(___mb.mb_get_color, (const Object *) this, point);
}

PoolColorArray Gradient::get_colors() const {
	return ___godot_icall_PoolColorArray(___mb.mb_get_colors, (const Object *) this);
}

real_t Gradient::get_offset(const int64_t point) {
	return ___godot_icall_float_int(___mb.mb_get_offset, (const Object *) this, point);
}

PoolRealArray Gradient::get_offsets() const {
	return ___godot_icall_PoolRealArray(___mb.mb_get_offsets, (const Object *) this);
}

int64_t Gradient::get_point_count() const {
	return ___godot_icall_int(___mb.mb_get_point_count, (const Object *) this);
}

Color Gradient::interpolate(const real_t offset) {
	return ___godot_icall_Color_float(___mb.mb_interpolate, (const Object *) this, offset);
}

void Gradient::remove_point(const int64_t point) {
	___godot_icall_void_int(___mb.mb_remove_point, (const Object *) this, point);
}

void Gradient::set_color(const int64_t point, const Color color) {
	___godot_icall_void_int_Color(___mb.mb_set_color, (const Object *) this, point, color);
}

void Gradient::set_colors(const PoolColorArray colors) {
	___godot_icall_void_PoolColorArray(___mb.mb_set_colors, (const Object *) this, colors);
}

void Gradient::set_offset(const int64_t point, const real_t offset) {
	___godot_icall_void_int_float(___mb.mb_set_offset, (const Object *) this, point, offset);
}

void Gradient::set_offsets(const PoolRealArray offsets) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_offsets, (const Object *) this, offsets);
}

}