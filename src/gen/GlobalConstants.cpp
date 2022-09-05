#include "GlobalConstants.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GlobalConstants *GlobalConstants::_singleton = NULL;


GlobalConstants::GlobalConstants() {
	_owner = godot::api->godot_global_get_singleton((char *) "GlobalConstants");
}


GlobalConstants::___method_bindings GlobalConstants::___mb = {};

void *GlobalConstants::_detail_class_tag = nullptr;

void GlobalConstants::___init_method_bindings() {
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GlobalConstants");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

}