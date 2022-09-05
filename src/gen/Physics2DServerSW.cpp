#include "Physics2DServerSW.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Physics2DServerSW::___method_bindings Physics2DServerSW::___mb = {};

void *Physics2DServerSW::_detail_class_tag = nullptr;

void Physics2DServerSW::___init_method_bindings() {
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Physics2DServerSW");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

}