#include "AspectRatioContainer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AspectRatioContainer::___method_bindings AspectRatioContainer::___mb = {};

void *AspectRatioContainer::_detail_class_tag = nullptr;

void AspectRatioContainer::___init_method_bindings() {
	___mb.mb_get_alignment_horizontal = godot::api->godot_method_bind_get_method("AspectRatioContainer", "get_alignment_horizontal");
	___mb.mb_get_alignment_vertical = godot::api->godot_method_bind_get_method("AspectRatioContainer", "get_alignment_vertical");
	___mb.mb_get_ratio = godot::api->godot_method_bind_get_method("AspectRatioContainer", "get_ratio");
	___mb.mb_get_stretch_mode = godot::api->godot_method_bind_get_method("AspectRatioContainer", "get_stretch_mode");
	___mb.mb_set_alignment_horizontal = godot::api->godot_method_bind_get_method("AspectRatioContainer", "set_alignment_horizontal");
	___mb.mb_set_alignment_vertical = godot::api->godot_method_bind_get_method("AspectRatioContainer", "set_alignment_vertical");
	___mb.mb_set_ratio = godot::api->godot_method_bind_get_method("AspectRatioContainer", "set_ratio");
	___mb.mb_set_stretch_mode = godot::api->godot_method_bind_get_method("AspectRatioContainer", "set_stretch_mode");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AspectRatioContainer");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AspectRatioContainer *AspectRatioContainer::_new()
{
	return (AspectRatioContainer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AspectRatioContainer")());
}
AspectRatioContainer::AlignMode AspectRatioContainer::get_alignment_horizontal() const {
	return (AspectRatioContainer::AlignMode) ___godot_icall_int(___mb.mb_get_alignment_horizontal, (const Object *) this);
}

AspectRatioContainer::AlignMode AspectRatioContainer::get_alignment_vertical() const {
	return (AspectRatioContainer::AlignMode) ___godot_icall_int(___mb.mb_get_alignment_vertical, (const Object *) this);
}

real_t AspectRatioContainer::get_ratio() const {
	return ___godot_icall_float(___mb.mb_get_ratio, (const Object *) this);
}

AspectRatioContainer::StretchMode AspectRatioContainer::get_stretch_mode() const {
	return (AspectRatioContainer::StretchMode) ___godot_icall_int(___mb.mb_get_stretch_mode, (const Object *) this);
}

void AspectRatioContainer::set_alignment_horizontal(const int64_t alignment_horizontal) {
	___godot_icall_void_int(___mb.mb_set_alignment_horizontal, (const Object *) this, alignment_horizontal);
}

void AspectRatioContainer::set_alignment_vertical(const int64_t alignment_vertical) {
	___godot_icall_void_int(___mb.mb_set_alignment_vertical, (const Object *) this, alignment_vertical);
}

void AspectRatioContainer::set_ratio(const real_t ratio) {
	___godot_icall_void_float(___mb.mb_set_ratio, (const Object *) this, ratio);
}

void AspectRatioContainer::set_stretch_mode(const int64_t stretch_mode) {
	___godot_icall_void_int(___mb.mb_set_stretch_mode, (const Object *) this, stretch_mode);
}

}