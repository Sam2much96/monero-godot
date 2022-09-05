#include "Listener.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Listener::___method_bindings Listener::___mb = {};

void *Listener::_detail_class_tag = nullptr;

void Listener::___init_method_bindings() {
	___mb.mb_clear_current = godot::api->godot_method_bind_get_method("Listener", "clear_current");
	___mb.mb_get_listener_transform = godot::api->godot_method_bind_get_method("Listener", "get_listener_transform");
	___mb.mb_is_current = godot::api->godot_method_bind_get_method("Listener", "is_current");
	___mb.mb_make_current = godot::api->godot_method_bind_get_method("Listener", "make_current");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Listener");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Listener *Listener::_new()
{
	return (Listener *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Listener")());
}
void Listener::clear_current() {
	___godot_icall_void(___mb.mb_clear_current, (const Object *) this);
}

Transform Listener::get_listener_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_listener_transform, (const Object *) this);
}

bool Listener::is_current() const {
	return ___godot_icall_bool(___mb.mb_is_current, (const Object *) this);
}

void Listener::make_current() {
	___godot_icall_void(___mb.mb_make_current, (const Object *) this);
}

}