#include "BakedLightmapData.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Resource.hpp"


namespace godot {


BakedLightmapData::___method_bindings BakedLightmapData::___mb = {};

void *BakedLightmapData::_detail_class_tag = nullptr;

void BakedLightmapData::___init_method_bindings() {
	___mb.mb__get_user_data = godot::api->godot_method_bind_get_method("BakedLightmapData", "_get_user_data");
	___mb.mb__set_user_data = godot::api->godot_method_bind_get_method("BakedLightmapData", "_set_user_data");
	___mb.mb_add_user = godot::api->godot_method_bind_get_method("BakedLightmapData", "add_user");
	___mb.mb_clear_data = godot::api->godot_method_bind_get_method("BakedLightmapData", "clear_data");
	___mb.mb_clear_users = godot::api->godot_method_bind_get_method("BakedLightmapData", "clear_users");
	___mb.mb_get_bounds = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_bounds");
	___mb.mb_get_cell_space_transform = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_cell_space_transform");
	___mb.mb_get_cell_subdiv = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_cell_subdiv");
	___mb.mb_get_energy = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_energy");
	___mb.mb_get_octree = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_octree");
	___mb.mb_get_user_count = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_user_count");
	___mb.mb_get_user_lightmap = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_user_lightmap");
	___mb.mb_get_user_path = godot::api->godot_method_bind_get_method("BakedLightmapData", "get_user_path");
	___mb.mb_is_interior = godot::api->godot_method_bind_get_method("BakedLightmapData", "is_interior");
	___mb.mb_set_bounds = godot::api->godot_method_bind_get_method("BakedLightmapData", "set_bounds");
	___mb.mb_set_cell_space_transform = godot::api->godot_method_bind_get_method("BakedLightmapData", "set_cell_space_transform");
	___mb.mb_set_cell_subdiv = godot::api->godot_method_bind_get_method("BakedLightmapData", "set_cell_subdiv");
	___mb.mb_set_energy = godot::api->godot_method_bind_get_method("BakedLightmapData", "set_energy");
	___mb.mb_set_interior = godot::api->godot_method_bind_get_method("BakedLightmapData", "set_interior");
	___mb.mb_set_octree = godot::api->godot_method_bind_get_method("BakedLightmapData", "set_octree");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "BakedLightmapData");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

BakedLightmapData *BakedLightmapData::_new()
{
	return (BakedLightmapData *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"BakedLightmapData")());
}
Array BakedLightmapData::_get_user_data() const {
	return ___godot_icall_Array(___mb.mb__get_user_data, (const Object *) this);
}

void BakedLightmapData::_set_user_data(const Array data) {
	___godot_icall_void_Array(___mb.mb__set_user_data, (const Object *) this, data);
}

void BakedLightmapData::add_user(const NodePath path, const Ref<Resource> lightmap, const int64_t lightmap_slice, const Rect2 lightmap_uv_rect, const int64_t instance) {
	___godot_icall_void_NodePath_Object_int_Rect2_int(___mb.mb_add_user, (const Object *) this, path, lightmap.ptr(), lightmap_slice, lightmap_uv_rect, instance);
}

void BakedLightmapData::clear_data() {
	___godot_icall_void(___mb.mb_clear_data, (const Object *) this);
}

void BakedLightmapData::clear_users() {
	___godot_icall_void(___mb.mb_clear_users, (const Object *) this);
}

AABB BakedLightmapData::get_bounds() const {
	return ___godot_icall_AABB(___mb.mb_get_bounds, (const Object *) this);
}

Transform BakedLightmapData::get_cell_space_transform() const {
	return ___godot_icall_Transform(___mb.mb_get_cell_space_transform, (const Object *) this);
}

int64_t BakedLightmapData::get_cell_subdiv() const {
	return ___godot_icall_int(___mb.mb_get_cell_subdiv, (const Object *) this);
}

real_t BakedLightmapData::get_energy() const {
	return ___godot_icall_float(___mb.mb_get_energy, (const Object *) this);
}

PoolByteArray BakedLightmapData::get_octree() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_octree, (const Object *) this);
}

int64_t BakedLightmapData::get_user_count() const {
	return ___godot_icall_int(___mb.mb_get_user_count, (const Object *) this);
}

Ref<Resource> BakedLightmapData::get_user_lightmap(const int64_t user_idx) const {
	return Ref<Resource>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_user_lightmap, (const Object *) this, user_idx));
}

NodePath BakedLightmapData::get_user_path(const int64_t user_idx) const {
	return ___godot_icall_NodePath_int(___mb.mb_get_user_path, (const Object *) this, user_idx);
}

bool BakedLightmapData::is_interior() const {
	return ___godot_icall_bool(___mb.mb_is_interior, (const Object *) this);
}

void BakedLightmapData::set_bounds(const AABB bounds) {
	___godot_icall_void_AABB(___mb.mb_set_bounds, (const Object *) this, bounds);
}

void BakedLightmapData::set_cell_space_transform(const Transform xform) {
	___godot_icall_void_Transform(___mb.mb_set_cell_space_transform, (const Object *) this, xform);
}

void BakedLightmapData::set_cell_subdiv(const int64_t cell_subdiv) {
	___godot_icall_void_int(___mb.mb_set_cell_subdiv, (const Object *) this, cell_subdiv);
}

void BakedLightmapData::set_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_energy, (const Object *) this, energy);
}

void BakedLightmapData::set_interior(const bool interior) {
	___godot_icall_void_bool(___mb.mb_set_interior, (const Object *) this, interior);
}

void BakedLightmapData::set_octree(const PoolByteArray octree) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_octree, (const Object *) this, octree);
}

}