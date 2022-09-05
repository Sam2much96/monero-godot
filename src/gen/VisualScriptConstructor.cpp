#include "VisualScriptConstructor.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptConstructor::___method_bindings VisualScriptConstructor::___mb = {};

void *VisualScriptConstructor::_detail_class_tag = nullptr;

void VisualScriptConstructor::___init_method_bindings() {
	___mb.mb_get_constructor = godot::api->godot_method_bind_get_method("VisualScriptConstructor", "get_constructor");
	___mb.mb_get_constructor_type = godot::api->godot_method_bind_get_method("VisualScriptConstructor", "get_constructor_type");
	___mb.mb_set_constructor = godot::api->godot_method_bind_get_method("VisualScriptConstructor", "set_constructor");
	___mb.mb_set_constructor_type = godot::api->godot_method_bind_get_method("VisualScriptConstructor", "set_constructor_type");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualScriptConstructor");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualScriptConstructor *VisualScriptConstructor::_new()
{
	return (VisualScriptConstructor *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptConstructor")());
}
Dictionary VisualScriptConstructor::get_constructor() const {
	return ___godot_icall_Dictionary(___mb.mb_get_constructor, (const Object *) this);
}

Variant::Type VisualScriptConstructor::get_constructor_type() const {
	return (Variant::Type) ___godot_icall_int(___mb.mb_get_constructor_type, (const Object *) this);
}

void VisualScriptConstructor::set_constructor(const Dictionary constructor) {
	___godot_icall_void_Dictionary(___mb.mb_set_constructor, (const Object *) this, constructor);
}

void VisualScriptConstructor::set_constructor_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_constructor_type, (const Object *) this, type);
}

}