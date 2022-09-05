#ifndef GODOT_CPP_BAKEDLIGHTMAPDATA_HPP
#define GODOT_CPP_BAKEDLIGHTMAPDATA_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class Resource;

class BakedLightmapData : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb__get_user_data;
		godot_method_bind *mb__set_user_data;
		godot_method_bind *mb_add_user;
		godot_method_bind *mb_clear_data;
		godot_method_bind *mb_clear_users;
		godot_method_bind *mb_get_bounds;
		godot_method_bind *mb_get_cell_space_transform;
		godot_method_bind *mb_get_cell_subdiv;
		godot_method_bind *mb_get_energy;
		godot_method_bind *mb_get_octree;
		godot_method_bind *mb_get_user_count;
		godot_method_bind *mb_get_user_lightmap;
		godot_method_bind *mb_get_user_path;
		godot_method_bind *mb_is_interior;
		godot_method_bind *mb_set_bounds;
		godot_method_bind *mb_set_cell_space_transform;
		godot_method_bind *mb_set_cell_subdiv;
		godot_method_bind *mb_set_energy;
		godot_method_bind *mb_set_interior;
		godot_method_bind *mb_set_octree;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "BakedLightmapData"; }
	static inline const char *___get_godot_class_name() { return (const char *) "BakedLightmapData"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static BakedLightmapData *_new();

	// methods
	Array _get_user_data() const;
	void _set_user_data(const Array data);
	void add_user(const NodePath path, const Ref<Resource> lightmap, const int64_t lightmap_slice, const Rect2 lightmap_uv_rect, const int64_t instance);
	void clear_data();
	void clear_users();
	AABB get_bounds() const;
	Transform get_cell_space_transform() const;
	int64_t get_cell_subdiv() const;
	real_t get_energy() const;
	PoolByteArray get_octree() const;
	int64_t get_user_count() const;
	Ref<Resource> get_user_lightmap(const int64_t user_idx) const;
	NodePath get_user_path(const int64_t user_idx) const;
	bool is_interior() const;
	void set_bounds(const AABB bounds);
	void set_cell_space_transform(const Transform xform);
	void set_cell_subdiv(const int64_t cell_subdiv);
	void set_energy(const real_t energy);
	void set_interior(const bool interior);
	void set_octree(const PoolByteArray octree);

};

}

#endif