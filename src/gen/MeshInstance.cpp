#include "MeshInstance.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Material.hpp"
#include "Mesh.hpp"
#include "Skin.hpp"


namespace godot {


MeshInstance::___method_bindings MeshInstance::___mb = {};

void *MeshInstance::_detail_class_tag = nullptr;

void MeshInstance::___init_method_bindings() {
	___mb.mb__mesh_changed = godot::api->godot_method_bind_get_method("MeshInstance", "_mesh_changed");
	___mb.mb__update_skinning = godot::api->godot_method_bind_get_method("MeshInstance", "_update_skinning");
	___mb.mb_create_convex_collision = godot::api->godot_method_bind_get_method("MeshInstance", "create_convex_collision");
	___mb.mb_create_debug_tangents = godot::api->godot_method_bind_get_method("MeshInstance", "create_debug_tangents");
	___mb.mb_create_trimesh_collision = godot::api->godot_method_bind_get_method("MeshInstance", "create_trimesh_collision");
	___mb.mb_get_active_material = godot::api->godot_method_bind_get_method("MeshInstance", "get_active_material");
	___mb.mb_get_mesh = godot::api->godot_method_bind_get_method("MeshInstance", "get_mesh");
	___mb.mb_get_skeleton_path = godot::api->godot_method_bind_get_method("MeshInstance", "get_skeleton_path");
	___mb.mb_get_skin = godot::api->godot_method_bind_get_method("MeshInstance", "get_skin");
	___mb.mb_get_surface_material = godot::api->godot_method_bind_get_method("MeshInstance", "get_surface_material");
	___mb.mb_get_surface_material_count = godot::api->godot_method_bind_get_method("MeshInstance", "get_surface_material_count");
	___mb.mb_is_software_skinning_transform_normals_enabled = godot::api->godot_method_bind_get_method("MeshInstance", "is_software_skinning_transform_normals_enabled");
	___mb.mb_set_mesh = godot::api->godot_method_bind_get_method("MeshInstance", "set_mesh");
	___mb.mb_set_skeleton_path = godot::api->godot_method_bind_get_method("MeshInstance", "set_skeleton_path");
	___mb.mb_set_skin = godot::api->godot_method_bind_get_method("MeshInstance", "set_skin");
	___mb.mb_set_software_skinning_transform_normals = godot::api->godot_method_bind_get_method("MeshInstance", "set_software_skinning_transform_normals");
	___mb.mb_set_surface_material = godot::api->godot_method_bind_get_method("MeshInstance", "set_surface_material");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "MeshInstance");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

MeshInstance *MeshInstance::_new()
{
	return (MeshInstance *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"MeshInstance")());
}
void MeshInstance::_mesh_changed() {
	___godot_icall_void(___mb.mb__mesh_changed, (const Object *) this);
}

void MeshInstance::_update_skinning() {
	___godot_icall_void(___mb.mb__update_skinning, (const Object *) this);
}

void MeshInstance::create_convex_collision() {
	___godot_icall_void(___mb.mb_create_convex_collision, (const Object *) this);
}

void MeshInstance::create_debug_tangents() {
	___godot_icall_void(___mb.mb_create_debug_tangents, (const Object *) this);
}

void MeshInstance::create_trimesh_collision() {
	___godot_icall_void(___mb.mb_create_trimesh_collision, (const Object *) this);
}

Ref<Material> MeshInstance::get_active_material(const int64_t surface) const {
	return Ref<Material>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_active_material, (const Object *) this, surface));
}

Ref<Mesh> MeshInstance::get_mesh() const {
	return Ref<Mesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const Object *) this));
}

NodePath MeshInstance::get_skeleton_path() {
	return ___godot_icall_NodePath(___mb.mb_get_skeleton_path, (const Object *) this);
}

Ref<Skin> MeshInstance::get_skin() const {
	return Ref<Skin>::__internal_constructor(___godot_icall_Object(___mb.mb_get_skin, (const Object *) this));
}

Ref<Material> MeshInstance::get_surface_material(const int64_t surface) const {
	return Ref<Material>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_surface_material, (const Object *) this, surface));
}

int64_t MeshInstance::get_surface_material_count() const {
	return ___godot_icall_int(___mb.mb_get_surface_material_count, (const Object *) this);
}

bool MeshInstance::is_software_skinning_transform_normals_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_software_skinning_transform_normals_enabled, (const Object *) this);
}

void MeshInstance::set_mesh(const Ref<Mesh> mesh) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const Object *) this, mesh.ptr());
}

void MeshInstance::set_skeleton_path(const NodePath skeleton_path) {
	___godot_icall_void_NodePath(___mb.mb_set_skeleton_path, (const Object *) this, skeleton_path);
}

void MeshInstance::set_skin(const Ref<Skin> skin) {
	___godot_icall_void_Object(___mb.mb_set_skin, (const Object *) this, skin.ptr());
}

void MeshInstance::set_software_skinning_transform_normals(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_software_skinning_transform_normals, (const Object *) this, enabled);
}

void MeshInstance::set_surface_material(const int64_t surface, const Ref<Material> material) {
	___godot_icall_void_int_Object(___mb.mb_set_surface_material, (const Object *) this, surface, material.ptr());
}

}