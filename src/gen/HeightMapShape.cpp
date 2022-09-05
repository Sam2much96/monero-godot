#include "HeightMapShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


HeightMapShape::___method_bindings HeightMapShape::___mb = {};

void *HeightMapShape::_detail_class_tag = nullptr;

void HeightMapShape::___init_method_bindings() {
	___mb.mb_get_map_data = godot::api->godot_method_bind_get_method("HeightMapShape", "get_map_data");
	___mb.mb_get_map_depth = godot::api->godot_method_bind_get_method("HeightMapShape", "get_map_depth");
	___mb.mb_get_map_width = godot::api->godot_method_bind_get_method("HeightMapShape", "get_map_width");
	___mb.mb_set_map_data = godot::api->godot_method_bind_get_method("HeightMapShape", "set_map_data");
	___mb.mb_set_map_depth = godot::api->godot_method_bind_get_method("HeightMapShape", "set_map_depth");
	___mb.mb_set_map_width = godot::api->godot_method_bind_get_method("HeightMapShape", "set_map_width");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "HeightMapShape");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

HeightMapShape *HeightMapShape::_new()
{
	return (HeightMapShape *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"HeightMapShape")());
}
PoolRealArray HeightMapShape::get_map_data() const {
	return ___godot_icall_PoolRealArray(___mb.mb_get_map_data, (const Object *) this);
}

int64_t HeightMapShape::get_map_depth() const {
	return ___godot_icall_int(___mb.mb_get_map_depth, (const Object *) this);
}

int64_t HeightMapShape::get_map_width() const {
	return ___godot_icall_int(___mb.mb_get_map_width, (const Object *) this);
}

void HeightMapShape::set_map_data(const PoolRealArray data) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_map_data, (const Object *) this, data);
}

void HeightMapShape::set_map_depth(const int64_t height) {
	___godot_icall_void_int(___mb.mb_set_map_depth, (const Object *) this, height);
}

void HeightMapShape::set_map_width(const int64_t width) {
	___godot_icall_void_int(___mb.mb_set_map_width, (const Object *) this, width);
}

}