#include "Reference.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Reference::___method_bindings Reference::___mb = {};

void *Reference::_detail_class_tag = nullptr;

void Reference::___init_method_bindings() {
	___mb.mb_init_ref = godot::api->godot_method_bind_get_method("Reference", "init_ref");
	___mb.mb_reference = godot::api->godot_method_bind_get_method("Reference", "reference");
	___mb.mb_unreference = godot::api->godot_method_bind_get_method("Reference", "unreference");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Reference");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Reference *Reference::_new()
{
	return (Reference *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Reference")());
}
bool Reference::init_ref() {
	return ___godot_icall_bool(___mb.mb_init_ref, (const Object *) this);
}

bool Reference::reference() {
	return ___godot_icall_bool(___mb.mb_reference, (const Object *) this);
}

bool Reference::unreference() {
	return ___godot_icall_bool(___mb.mb_unreference, (const Object *) this);
}

}