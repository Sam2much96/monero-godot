#include "CanvasModulate.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CanvasModulate::___method_bindings CanvasModulate::___mb = {};

void *CanvasModulate::_detail_class_tag = nullptr;

void CanvasModulate::___init_method_bindings() {
	___mb.mb_get_color = godot::api->godot_method_bind_get_method("CanvasModulate", "get_color");
	___mb.mb_set_color = godot::api->godot_method_bind_get_method("CanvasModulate", "set_color");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "CanvasModulate");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

CanvasModulate *CanvasModulate::_new()
{
	return (CanvasModulate *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CanvasModulate")());
}
Color CanvasModulate::get_color() const {
	return ___godot_icall_Color(___mb.mb_get_color, (const Object *) this);
}

void CanvasModulate::set_color(const Color color) {
	___godot_icall_void_Color(___mb.mb_set_color, (const Object *) this, color);
}

}