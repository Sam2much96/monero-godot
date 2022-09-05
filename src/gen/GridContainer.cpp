#include "GridContainer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GridContainer::___method_bindings GridContainer::___mb = {};

void *GridContainer::_detail_class_tag = nullptr;

void GridContainer::___init_method_bindings() {
	___mb.mb_get_columns = godot::api->godot_method_bind_get_method("GridContainer", "get_columns");
	___mb.mb_set_columns = godot::api->godot_method_bind_get_method("GridContainer", "set_columns");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GridContainer");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GridContainer *GridContainer::_new()
{
	return (GridContainer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GridContainer")());
}
int64_t GridContainer::get_columns() const {
	return ___godot_icall_int(___mb.mb_get_columns, (const Object *) this);
}

void GridContainer::set_columns(const int64_t columns) {
	___godot_icall_void_int(___mb.mb_set_columns, (const Object *) this, columns);
}

}