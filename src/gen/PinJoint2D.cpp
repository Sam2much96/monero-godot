#include "PinJoint2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


PinJoint2D::___method_bindings PinJoint2D::___mb = {};

void *PinJoint2D::_detail_class_tag = nullptr;

void PinJoint2D::___init_method_bindings() {
	___mb.mb_get_softness = godot::api->godot_method_bind_get_method("PinJoint2D", "get_softness");
	___mb.mb_set_softness = godot::api->godot_method_bind_get_method("PinJoint2D", "set_softness");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "PinJoint2D");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PinJoint2D *PinJoint2D::_new()
{
	return (PinJoint2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PinJoint2D")());
}
real_t PinJoint2D::get_softness() const {
	return ___godot_icall_float(___mb.mb_get_softness, (const Object *) this);
}

void PinJoint2D::set_softness(const real_t softness) {
	___godot_icall_void_float(___mb.mb_set_softness, (const Object *) this, softness);
}

}