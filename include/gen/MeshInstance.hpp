#ifndef GODOT_CPP_MESHINSTANCE_HPP
#define GODOT_CPP_MESHINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "GeometryInstance.hpp"
namespace godot {

class Material;
class Mesh;
class Skin;

class MeshInstance : public GeometryInstance {
	struct ___method_bindings {
		godot_method_bind *mb__mesh_changed;
		godot_method_bind *mb__update_skinning;
		godot_method_bind *mb_create_convex_collision;
		godot_method_bind *mb_create_debug_tangents;
		godot_method_bind *mb_create_trimesh_collision;
		godot_method_bind *mb_get_active_material;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_skeleton_path;
		godot_method_bind *mb_get_skin;
		godot_method_bind *mb_get_surface_material;
		godot_method_bind *mb_get_surface_material_count;
		godot_method_bind *mb_is_software_skinning_transform_normals_enabled;
		godot_method_bind *mb_set_mesh;
		godot_method_bind *mb_set_skeleton_path;
		godot_method_bind *mb_set_skin;
		godot_method_bind *mb_set_software_skinning_transform_normals;
		godot_method_bind *mb_set_surface_material;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MeshInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "MeshInstance"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static MeshInstance *_new();

	// methods
	void _mesh_changed();
	void _update_skinning();
	void create_convex_collision();
	void create_debug_tangents();
	void create_trimesh_collision();
	Ref<Material> get_active_material(const int64_t surface) const;
	Ref<Mesh> get_mesh() const;
	NodePath get_skeleton_path();
	Ref<Skin> get_skin() const;
	Ref<Material> get_surface_material(const int64_t surface) const;
	int64_t get_surface_material_count() const;
	bool is_software_skinning_transform_normals_enabled() const;
	void set_mesh(const Ref<Mesh> mesh);
	void set_skeleton_path(const NodePath skeleton_path);
	void set_skin(const Ref<Skin> skin);
	void set_software_skinning_transform_normals(const bool enabled);
	void set_surface_material(const int64_t surface, const Ref<Material> material);

};

}

#endif