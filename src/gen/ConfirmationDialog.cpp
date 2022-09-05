#include "ConfirmationDialog.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Button.hpp"


namespace godot {


ConfirmationDialog::___method_bindings ConfirmationDialog::___mb = {};

void *ConfirmationDialog::_detail_class_tag = nullptr;

void ConfirmationDialog::___init_method_bindings() {
	___mb.mb_get_cancel = godot::api->godot_method_bind_get_method("ConfirmationDialog", "get_cancel");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "ConfirmationDialog");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

ConfirmationDialog *ConfirmationDialog::_new()
{
	return (ConfirmationDialog *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ConfirmationDialog")());
}
Button *ConfirmationDialog::get_cancel() {
	return (Button *) ___godot_icall_Object(___mb.mb_get_cancel, (const Object *) this);
}

}