#include "InputEventGesture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


InputEventGesture::___method_bindings InputEventGesture::___mb = {};

void *InputEventGesture::_detail_class_tag = nullptr;

void InputEventGesture::___init_method_bindings() {
	___mb.mb_get_position = godot::api->godot_method_bind_get_method("InputEventGesture", "get_position");
	___mb.mb_set_position = godot::api->godot_method_bind_get_method("InputEventGesture", "set_position");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "InputEventGesture");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Vector2 InputEventGesture::get_position() const {
	return ___godot_icall_Vector2(___mb.mb_get_position, (const Object *) this);
}

void InputEventGesture::set_position(const Vector2 position) {
	___godot_icall_void_Vector2(___mb.mb_set_position, (const Object *) this, position);
}

}