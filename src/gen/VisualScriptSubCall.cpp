#include "VisualScriptSubCall.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptSubCall::___method_bindings VisualScriptSubCall::___mb = {};

void *VisualScriptSubCall::_detail_class_tag = nullptr;

void VisualScriptSubCall::___init_method_bindings() {
	___mb.mb__subcall = godot::api->godot_method_bind_get_method("VisualScriptSubCall", "_subcall");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualScriptSubCall");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualScriptSubCall *VisualScriptSubCall::_new()
{
	return (VisualScriptSubCall *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptSubCall")());
}
Variant VisualScriptSubCall::_subcall(const Variant arguments) {
	return ___godot_icall_Variant_Variant(___mb.mb__subcall, (const Object *) this, arguments);
}

}