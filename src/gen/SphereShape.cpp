#include "SphereShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


SphereShape::___method_bindings SphereShape::___mb = {};

void *SphereShape::_detail_class_tag = nullptr;

void SphereShape::___init_method_bindings() {
	___mb.mb_get_radius = godot::api->godot_method_bind_get_method("SphereShape", "get_radius");
	___mb.mb_set_radius = godot::api->godot_method_bind_get_method("SphereShape", "set_radius");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "SphereShape");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

SphereShape *SphereShape::_new()
{
	return (SphereShape *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"SphereShape")());
}
real_t SphereShape::get_radius() const {
	return ___godot_icall_float(___mb.mb_get_radius, (const Object *) this);
}

void SphereShape::set_radius(const real_t radius) {
	___godot_icall_void_float(___mb.mb_set_radius, (const Object *) this, radius);
}

}