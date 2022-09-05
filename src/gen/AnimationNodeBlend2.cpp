#include "AnimationNodeBlend2.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeBlend2::___method_bindings AnimationNodeBlend2::___mb = {};

void *AnimationNodeBlend2::_detail_class_tag = nullptr;

void AnimationNodeBlend2::___init_method_bindings() {
	___mb.mb_is_using_sync = godot::api->godot_method_bind_get_method("AnimationNodeBlend2", "is_using_sync");
	___mb.mb_set_use_sync = godot::api->godot_method_bind_get_method("AnimationNodeBlend2", "set_use_sync");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AnimationNodeBlend2");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AnimationNodeBlend2 *AnimationNodeBlend2::_new()
{
	return (AnimationNodeBlend2 *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeBlend2")());
}
bool AnimationNodeBlend2::is_using_sync() const {
	return ___godot_icall_bool(___mb.mb_is_using_sync, (const Object *) this);
}

void AnimationNodeBlend2::set_use_sync(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_use_sync, (const Object *) this, enable);
}

}