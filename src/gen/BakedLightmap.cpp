#include "BakedLightmap.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Node.hpp"
#include "Sky.hpp"
#include "BakedLightmapData.hpp"


namespace godot {


BakedLightmap::___method_bindings BakedLightmap::___mb = {};

void *BakedLightmap::_detail_class_tag = nullptr;

void BakedLightmap::___init_method_bindings() {
	___mb.mb_bake = godot::api->godot_method_bind_get_method("BakedLightmap", "bake");
	___mb.mb_get_bake_quality = godot::api->godot_method_bind_get_method("BakedLightmap", "get_bake_quality");
	___mb.mb_get_bias = godot::api->godot_method_bind_get_method("BakedLightmap", "get_bias");
	___mb.mb_get_bounces = godot::api->godot_method_bind_get_method("BakedLightmap", "get_bounces");
	___mb.mb_get_capture_cell_size = godot::api->godot_method_bind_get_method("BakedLightmap", "get_capture_cell_size");
	___mb.mb_get_capture_enabled = godot::api->godot_method_bind_get_method("BakedLightmap", "get_capture_enabled");
	___mb.mb_get_capture_propagation = godot::api->godot_method_bind_get_method("BakedLightmap", "get_capture_propagation");
	___mb.mb_get_capture_quality = godot::api->godot_method_bind_get_method("BakedLightmap", "get_capture_quality");
	___mb.mb_get_default_texels_per_unit = godot::api->godot_method_bind_get_method("BakedLightmap", "get_default_texels_per_unit");
	___mb.mb_get_environment_custom_color = godot::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_color");
	___mb.mb_get_environment_custom_energy = godot::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_energy");
	___mb.mb_get_environment_custom_sky = godot::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_sky");
	___mb.mb_get_environment_custom_sky_rotation_degrees = godot::api->godot_method_bind_get_method("BakedLightmap", "get_environment_custom_sky_rotation_degrees");
	___mb.mb_get_environment_min_light = godot::api->godot_method_bind_get_method("BakedLightmap", "get_environment_min_light");
	___mb.mb_get_environment_mode = godot::api->godot_method_bind_get_method("BakedLightmap", "get_environment_mode");
	___mb.mb_get_extents = godot::api->godot_method_bind_get_method("BakedLightmap", "get_extents");
	___mb.mb_get_image_path = godot::api->godot_method_bind_get_method("BakedLightmap", "get_image_path");
	___mb.mb_get_light_data = godot::api->godot_method_bind_get_method("BakedLightmap", "get_light_data");
	___mb.mb_get_max_atlas_size = godot::api->godot_method_bind_get_method("BakedLightmap", "get_max_atlas_size");
	___mb.mb_is_generate_atlas_enabled = godot::api->godot_method_bind_get_method("BakedLightmap", "is_generate_atlas_enabled");
	___mb.mb_is_using_color = godot::api->godot_method_bind_get_method("BakedLightmap", "is_using_color");
	___mb.mb_is_using_denoiser = godot::api->godot_method_bind_get_method("BakedLightmap", "is_using_denoiser");
	___mb.mb_is_using_hdr = godot::api->godot_method_bind_get_method("BakedLightmap", "is_using_hdr");
	___mb.mb_set_bake_quality = godot::api->godot_method_bind_get_method("BakedLightmap", "set_bake_quality");
	___mb.mb_set_bias = godot::api->godot_method_bind_get_method("BakedLightmap", "set_bias");
	___mb.mb_set_bounces = godot::api->godot_method_bind_get_method("BakedLightmap", "set_bounces");
	___mb.mb_set_capture_cell_size = godot::api->godot_method_bind_get_method("BakedLightmap", "set_capture_cell_size");
	___mb.mb_set_capture_enabled = godot::api->godot_method_bind_get_method("BakedLightmap", "set_capture_enabled");
	___mb.mb_set_capture_propagation = godot::api->godot_method_bind_get_method("BakedLightmap", "set_capture_propagation");
	___mb.mb_set_capture_quality = godot::api->godot_method_bind_get_method("BakedLightmap", "set_capture_quality");
	___mb.mb_set_default_texels_per_unit = godot::api->godot_method_bind_get_method("BakedLightmap", "set_default_texels_per_unit");
	___mb.mb_set_environment_custom_color = godot::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_color");
	___mb.mb_set_environment_custom_energy = godot::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_energy");
	___mb.mb_set_environment_custom_sky = godot::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_sky");
	___mb.mb_set_environment_custom_sky_rotation_degrees = godot::api->godot_method_bind_get_method("BakedLightmap", "set_environment_custom_sky_rotation_degrees");
	___mb.mb_set_environment_min_light = godot::api->godot_method_bind_get_method("BakedLightmap", "set_environment_min_light");
	___mb.mb_set_environment_mode = godot::api->godot_method_bind_get_method("BakedLightmap", "set_environment_mode");
	___mb.mb_set_extents = godot::api->godot_method_bind_get_method("BakedLightmap", "set_extents");
	___mb.mb_set_generate_atlas = godot::api->godot_method_bind_get_method("BakedLightmap", "set_generate_atlas");
	___mb.mb_set_image_path = godot::api->godot_method_bind_get_method("BakedLightmap", "set_image_path");
	___mb.mb_set_light_data = godot::api->godot_method_bind_get_method("BakedLightmap", "set_light_data");
	___mb.mb_set_max_atlas_size = godot::api->godot_method_bind_get_method("BakedLightmap", "set_max_atlas_size");
	___mb.mb_set_use_color = godot::api->godot_method_bind_get_method("BakedLightmap", "set_use_color");
	___mb.mb_set_use_denoiser = godot::api->godot_method_bind_get_method("BakedLightmap", "set_use_denoiser");
	___mb.mb_set_use_hdr = godot::api->godot_method_bind_get_method("BakedLightmap", "set_use_hdr");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "BakedLightmap");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

BakedLightmap *BakedLightmap::_new()
{
	return (BakedLightmap *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"BakedLightmap")());
}
BakedLightmap::BakeError BakedLightmap::bake(const Node *from_node, const String data_save_path) {
	return (BakedLightmap::BakeError) ___godot_icall_int_Object_String(___mb.mb_bake, (const Object *) this, from_node, data_save_path);
}

BakedLightmap::BakeQuality BakedLightmap::get_bake_quality() const {
	return (BakedLightmap::BakeQuality) ___godot_icall_int(___mb.mb_get_bake_quality, (const Object *) this);
}

real_t BakedLightmap::get_bias() const {
	return ___godot_icall_float(___mb.mb_get_bias, (const Object *) this);
}

int64_t BakedLightmap::get_bounces() const {
	return ___godot_icall_int(___mb.mb_get_bounces, (const Object *) this);
}

real_t BakedLightmap::get_capture_cell_size() const {
	return ___godot_icall_float(___mb.mb_get_capture_cell_size, (const Object *) this);
}

bool BakedLightmap::get_capture_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_capture_enabled, (const Object *) this);
}

real_t BakedLightmap::get_capture_propagation() const {
	return ___godot_icall_float(___mb.mb_get_capture_propagation, (const Object *) this);
}

BakedLightmap::BakeQuality BakedLightmap::get_capture_quality() const {
	return (BakedLightmap::BakeQuality) ___godot_icall_int(___mb.mb_get_capture_quality, (const Object *) this);
}

real_t BakedLightmap::get_default_texels_per_unit() const {
	return ___godot_icall_float(___mb.mb_get_default_texels_per_unit, (const Object *) this);
}

Color BakedLightmap::get_environment_custom_color() const {
	return ___godot_icall_Color(___mb.mb_get_environment_custom_color, (const Object *) this);
}

real_t BakedLightmap::get_environment_custom_energy() const {
	return ___godot_icall_float(___mb.mb_get_environment_custom_energy, (const Object *) this);
}

Ref<Sky> BakedLightmap::get_environment_custom_sky() const {
	return Ref<Sky>::__internal_constructor(___godot_icall_Object(___mb.mb_get_environment_custom_sky, (const Object *) this));
}

Vector3 BakedLightmap::get_environment_custom_sky_rotation_degrees() const {
	return ___godot_icall_Vector3(___mb.mb_get_environment_custom_sky_rotation_degrees, (const Object *) this);
}

Color BakedLightmap::get_environment_min_light() const {
	return ___godot_icall_Color(___mb.mb_get_environment_min_light, (const Object *) this);
}

BakedLightmap::EnvironmentMode BakedLightmap::get_environment_mode() const {
	return (BakedLightmap::EnvironmentMode) ___godot_icall_int(___mb.mb_get_environment_mode, (const Object *) this);
}

Vector3 BakedLightmap::get_extents() const {
	return ___godot_icall_Vector3(___mb.mb_get_extents, (const Object *) this);
}

String BakedLightmap::get_image_path() const {
	return ___godot_icall_String(___mb.mb_get_image_path, (const Object *) this);
}

Ref<BakedLightmapData> BakedLightmap::get_light_data() const {
	return Ref<BakedLightmapData>::__internal_constructor(___godot_icall_Object(___mb.mb_get_light_data, (const Object *) this));
}

int64_t BakedLightmap::get_max_atlas_size() const {
	return ___godot_icall_int(___mb.mb_get_max_atlas_size, (const Object *) this);
}

bool BakedLightmap::is_generate_atlas_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_generate_atlas_enabled, (const Object *) this);
}

bool BakedLightmap::is_using_color() const {
	return ___godot_icall_bool(___mb.mb_is_using_color, (const Object *) this);
}

bool BakedLightmap::is_using_denoiser() const {
	return ___godot_icall_bool(___mb.mb_is_using_denoiser, (const Object *) this);
}

bool BakedLightmap::is_using_hdr() const {
	return ___godot_icall_bool(___mb.mb_is_using_hdr, (const Object *) this);
}

void BakedLightmap::set_bake_quality(const int64_t quality) {
	___godot_icall_void_int(___mb.mb_set_bake_quality, (const Object *) this, quality);
}

void BakedLightmap::set_bias(const real_t bias) {
	___godot_icall_void_float(___mb.mb_set_bias, (const Object *) this, bias);
}

void BakedLightmap::set_bounces(const int64_t bounces) {
	___godot_icall_void_int(___mb.mb_set_bounces, (const Object *) this, bounces);
}

void BakedLightmap::set_capture_cell_size(const real_t capture_cell_size) {
	___godot_icall_void_float(___mb.mb_set_capture_cell_size, (const Object *) this, capture_cell_size);
}

void BakedLightmap::set_capture_enabled(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_capture_enabled, (const Object *) this, enabled);
}

void BakedLightmap::set_capture_propagation(const real_t propagation) {
	___godot_icall_void_float(___mb.mb_set_capture_propagation, (const Object *) this, propagation);
}

void BakedLightmap::set_capture_quality(const int64_t capture_quality) {
	___godot_icall_void_int(___mb.mb_set_capture_quality, (const Object *) this, capture_quality);
}

void BakedLightmap::set_default_texels_per_unit(const real_t texels) {
	___godot_icall_void_float(___mb.mb_set_default_texels_per_unit, (const Object *) this, texels);
}

void BakedLightmap::set_environment_custom_color(const Color color) {
	___godot_icall_void_Color(___mb.mb_set_environment_custom_color, (const Object *) this, color);
}

void BakedLightmap::set_environment_custom_energy(const real_t energy) {
	___godot_icall_void_float(___mb.mb_set_environment_custom_energy, (const Object *) this, energy);
}

void BakedLightmap::set_environment_custom_sky(const Ref<Sky> sky) {
	___godot_icall_void_Object(___mb.mb_set_environment_custom_sky, (const Object *) this, sky.ptr());
}

void BakedLightmap::set_environment_custom_sky_rotation_degrees(const Vector3 rotation) {
	___godot_icall_void_Vector3(___mb.mb_set_environment_custom_sky_rotation_degrees, (const Object *) this, rotation);
}

void BakedLightmap::set_environment_min_light(const Color min_light) {
	___godot_icall_void_Color(___mb.mb_set_environment_min_light, (const Object *) this, min_light);
}

void BakedLightmap::set_environment_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_environment_mode, (const Object *) this, mode);
}

void BakedLightmap::set_extents(const Vector3 extents) {
	___godot_icall_void_Vector3(___mb.mb_set_extents, (const Object *) this, extents);
}

void BakedLightmap::set_generate_atlas(const bool enabled) {
	___godot_icall_void_bool(___mb.mb_set_generate_atlas, (const Object *) this, enabled);
}

void BakedLightmap::set_image_path(const String image_path) {
	___godot_icall_void_String(___mb.mb_set_image_path, (const Object *) this, image_path);
}

void BakedLightmap::set_light_data(const Ref<BakedLightmapData> data) {
	___godot_icall_void_Object(___mb.mb_set_light_data, (const Object *) this, data.ptr());
}

void BakedLightmap::set_max_atlas_size(const int64_t max_atlas_size) {
	___godot_icall_void_int(___mb.mb_set_max_atlas_size, (const Object *) this, max_atlas_size);
}

void BakedLightmap::set_use_color(const bool use_denoiser) {
	___godot_icall_void_bool(___mb.mb_set_use_color, (const Object *) this, use_denoiser);
}

void BakedLightmap::set_use_denoiser(const bool use_denoiser) {
	___godot_icall_void_bool(___mb.mb_set_use_denoiser, (const Object *) this, use_denoiser);
}

void BakedLightmap::set_use_hdr(const bool use_denoiser) {
	___godot_icall_void_bool(___mb.mb_set_use_hdr, (const Object *) this, use_denoiser);
}

}