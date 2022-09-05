#ifndef GODOT_CPP_GEOMETRYINSTANCE_HPP
#define GODOT_CPP_GEOMETRYINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "GeometryInstance.hpp"

#include "VisualInstance.hpp"
namespace godot {

class Material;

class GeometryInstance : public VisualInstance {
	struct ___method_bindings {
		godot_method_bind *mb_get_cast_shadows_setting;
		godot_method_bind *mb_get_extra_cull_margin;
		godot_method_bind *mb_get_flag;
		godot_method_bind *mb_get_generate_lightmap;
		godot_method_bind *mb_get_lightmap_scale;
		godot_method_bind *mb_get_lod_max_distance;
		godot_method_bind *mb_get_lod_max_hysteresis;
		godot_method_bind *mb_get_lod_min_distance;
		godot_method_bind *mb_get_lod_min_hysteresis;
		godot_method_bind *mb_get_material_override;
		godot_method_bind *mb_set_cast_shadows_setting;
		godot_method_bind *mb_set_custom_aabb;
		godot_method_bind *mb_set_extra_cull_margin;
		godot_method_bind *mb_set_flag;
		godot_method_bind *mb_set_generate_lightmap;
		godot_method_bind *mb_set_lightmap_scale;
		godot_method_bind *mb_set_lod_max_distance;
		godot_method_bind *mb_set_lod_max_hysteresis;
		godot_method_bind *mb_set_lod_min_distance;
		godot_method_bind *mb_set_lod_min_hysteresis;
		godot_method_bind *mb_set_material_override;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GeometryInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GeometryInstance"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Flags {
		FLAG_USE_BAKED_LIGHT = 0,
		FLAG_DRAW_NEXT_FRAME_IF_VISIBLE = 1,
		FLAG_MAX = 2,
	};
	enum ShadowCastingSetting {
		SHADOW_CASTING_SETTING_OFF = 0,
		SHADOW_CASTING_SETTING_ON = 1,
		SHADOW_CASTING_SETTING_DOUBLE_SIDED = 2,
		SHADOW_CASTING_SETTING_SHADOWS_ONLY = 3,
	};
	enum LightmapScale {
		LIGHTMAP_SCALE_1X = 0,
		LIGHTMAP_SCALE_2X = 1,
		LIGHTMAP_SCALE_4X = 2,
		LIGHTMAP_SCALE_8X = 3,
		LIGHTMAP_SCALE_MAX = 4,
	};

	// constants

	// methods
	GeometryInstance::ShadowCastingSetting get_cast_shadows_setting() const;
	real_t get_extra_cull_margin() const;
	bool get_flag(const int64_t flag) const;
	bool get_generate_lightmap();
	GeometryInstance::LightmapScale get_lightmap_scale() const;
	real_t get_lod_max_distance() const;
	real_t get_lod_max_hysteresis() const;
	real_t get_lod_min_distance() const;
	real_t get_lod_min_hysteresis() const;
	Ref<Material> get_material_override() const;
	void set_cast_shadows_setting(const int64_t shadow_casting_setting);
	void set_custom_aabb(const AABB aabb);
	void set_extra_cull_margin(const real_t margin);
	void set_flag(const int64_t flag, const bool value);
	void set_generate_lightmap(const bool enabled);
	void set_lightmap_scale(const int64_t scale);
	void set_lod_max_distance(const real_t mode);
	void set_lod_max_hysteresis(const real_t mode);
	void set_lod_min_distance(const real_t mode);
	void set_lod_min_hysteresis(const real_t mode);
	void set_material_override(const Ref<Material> material);

};

}

#endif