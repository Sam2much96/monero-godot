#include "YSort.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


YSort::___method_bindings YSort::___mb = {};

void *YSort::_detail_class_tag = nullptr;

void YSort::___init_method_bindings() {
	___mb.mb_is_sort_enabled = godot::api->godot_method_bind_get_method("YSort", "is_sort_enabled");
	___mb.mb_set_sort_enabled = godot::api->godot_method_bind_get_method("YSort", "set_sort_enabled");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "YSort");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

YSort *YSort::_new()
{
	return (YSort *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"YSort")());
}
bool YSort::is_sort_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_sort_enabled, (const Object *) this);
}

void YSort::set_sort_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_sort_enabled, (const Object *) this, enabled);
}

}