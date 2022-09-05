#include "Semaphore.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Semaphore::___method_bindings Semaphore::___mb = {};

void *Semaphore::_detail_class_tag = nullptr;

void Semaphore::___init_method_bindings() {
	___mb.mb_post = godot::api->godot_method_bind_get_method("_Semaphore", "post");
	___mb.mb_wait = godot::api->godot_method_bind_get_method("_Semaphore", "wait");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "_Semaphore");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Semaphore *Semaphore::_new()
{
	return (Semaphore *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"_Semaphore")());
}
Error Semaphore::post() {
	return (Error) ___godot_icall_int(___mb.mb_post, (const Object *) this);
}

Error Semaphore::wait() {
	return (Error) ___godot_icall_int(___mb.mb_wait, (const Object *) this);
}

}