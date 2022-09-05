#include "BoxShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


BoxShape::___method_bindings BoxShape::___mb = {};

void *BoxShape::_detail_class_tag = nullptr;

void BoxShape::___init_method_bindings() {
	___mb.mb_get_extents = godot::api->godot_method_bind_get_method("BoxShape", "get_extents");
	___mb.mb_set_extents = godot::api->godot_method_bind_get_method("BoxShape", "set_extents");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "BoxShape");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

BoxShape *BoxShape::_new()
{
	return (BoxShape *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"BoxShape")());
}
Vector3 BoxShape::get_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_extents, (const Object *) this);
}

void BoxShape::set_extents(const Vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_extents, (const Object *) this, extents);
}

}