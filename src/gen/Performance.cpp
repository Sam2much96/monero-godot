#include "Performance.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Performance *Performance::_singleton = NULL;


Performance::Performance() {
	_owner = godot::api->godot_global_get_singleton((char *) "Performance");
}


Performance::___method_bindings Performance::___mb = {};

void *Performance::_detail_class_tag = nullptr;

void Performance::___init_method_bindings() {
	___mb.mb_get_monitor = godot::api->godot_method_bind_get_method("Performance", "get_monitor");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Performance");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

real_t Performance::get_monitor(const int64_t monitor) const {
	return ___godot_icall_float_int(___mb.mb_get_monitor, (const Object *) this, monitor);
}

}