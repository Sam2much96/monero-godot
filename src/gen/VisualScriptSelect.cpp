#include "VisualScriptSelect.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptSelect::___method_bindings VisualScriptSelect::___mb = {};

void *VisualScriptSelect::_detail_class_tag = nullptr;

void VisualScriptSelect::___init_method_bindings() {
	___mb.mb_get_typed = godot::api->godot_method_bind_get_method("VisualScriptSelect", "get_typed");
	___mb.mb_set_typed = godot::api->godot_method_bind_get_method("VisualScriptSelect", "set_typed");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualScriptSelect");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualScriptSelect *VisualScriptSelect::_new()
{
	return (VisualScriptSelect *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptSelect")());
}
Variant::Type VisualScriptSelect::get_typed() const {
	return (Variant::Type) ___godot_icall_int(___mb.mb_get_typed, (const Object *) this);
}

void VisualScriptSelect::set_typed(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_typed, (const Object *) this, type);
}

}