#include "InputEventPanGesture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


InputEventPanGesture::___method_bindings InputEventPanGesture::___mb = {};

void *InputEventPanGesture::_detail_class_tag = nullptr;

void InputEventPanGesture::___init_method_bindings() {
	___mb.mb_get_delta = godot::api->godot_method_bind_get_method("InputEventPanGesture", "get_delta");
	___mb.mb_set_delta = godot::api->godot_method_bind_get_method("InputEventPanGesture", "set_delta");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "InputEventPanGesture");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

InputEventPanGesture *InputEventPanGesture::_new()
{
	return (InputEventPanGesture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"InputEventPanGesture")());
}
Vector2 InputEventPanGesture::get_delta() const {
	return ___godot_icall_Vector2(___mb.mb_get_delta, (const Object *) this);
}

void InputEventPanGesture::set_delta(const Vector2 delta) {
	___godot_icall_void_Vector2(___mb.mb_set_delta, (const Object *) this, delta);
}

}