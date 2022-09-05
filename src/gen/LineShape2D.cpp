#include "LineShape2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


LineShape2D::___method_bindings LineShape2D::___mb = {};

void *LineShape2D::_detail_class_tag = nullptr;

void LineShape2D::___init_method_bindings() {
	___mb.mb_get_d = godot::api->godot_method_bind_get_method("LineShape2D", "get_d");
	___mb.mb_get_normal = godot::api->godot_method_bind_get_method("LineShape2D", "get_normal");
	___mb.mb_set_d = godot::api->godot_method_bind_get_method("LineShape2D", "set_d");
	___mb.mb_set_normal = godot::api->godot_method_bind_get_method("LineShape2D", "set_normal");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "LineShape2D");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

LineShape2D *LineShape2D::_new()
{
	return (LineShape2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"LineShape2D")());
}
real_t LineShape2D::get_d() const {
	return ___godot_icall_float(___mb.mb_get_d, (const Object *) this);
}

Vector2 LineShape2D::get_normal() const {
	return ___godot_icall_Vector2(___mb.mb_get_normal, (const Object *) this);
}

void LineShape2D::set_d(const real_t d) {
	___godot_icall_void_float(___mb.mb_set_d, (const Object *) this, d);
}

void LineShape2D::set_normal(const Vector2 normal) {
	___godot_icall_void_Vector2(___mb.mb_set_normal, (const Object *) this, normal);
}

}