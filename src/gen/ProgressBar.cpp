#include "ProgressBar.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ProgressBar::___method_bindings ProgressBar::___mb = {};

void *ProgressBar::_detail_class_tag = nullptr;

void ProgressBar::___init_method_bindings() {
	___mb.mb_is_percent_visible = godot::api->godot_method_bind_get_method("ProgressBar", "is_percent_visible");
	___mb.mb_set_percent_visible = godot::api->godot_method_bind_get_method("ProgressBar", "set_percent_visible");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "ProgressBar");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

ProgressBar *ProgressBar::_new()
{
	return (ProgressBar *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ProgressBar")());
}
bool ProgressBar::is_percent_visible() const {
	return ___godot_icall_bool(___mb.mb_is_percent_visible, (const Object *) this);
}

void ProgressBar::set_percent_visible(const bool visible) {
	___godot_icall_void_bool(___mb.mb_set_percent_visible, (const Object *) this, visible);
}

}