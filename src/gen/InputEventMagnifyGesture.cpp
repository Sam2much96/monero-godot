#include "InputEventMagnifyGesture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


InputEventMagnifyGesture::___method_bindings InputEventMagnifyGesture::___mb = {};

void *InputEventMagnifyGesture::_detail_class_tag = nullptr;

void InputEventMagnifyGesture::___init_method_bindings() {
	___mb.mb_get_factor = godot::api->godot_method_bind_get_method("InputEventMagnifyGesture", "get_factor");
	___mb.mb_set_factor = godot::api->godot_method_bind_get_method("InputEventMagnifyGesture", "set_factor");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "InputEventMagnifyGesture");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

InputEventMagnifyGesture *InputEventMagnifyGesture::_new()
{
	return (InputEventMagnifyGesture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"InputEventMagnifyGesture")());
}
real_t InputEventMagnifyGesture::get_factor() const {
	return ___godot_icall_float(___mb.mb_get_factor, (const Object *) this);
}

void InputEventMagnifyGesture::set_factor(const real_t factor) {
	___godot_icall_void_float(___mb.mb_set_factor, (const Object *) this, factor);
}

}