#include "AnimationNodeStateMachinePlayback.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeStateMachinePlayback::___method_bindings AnimationNodeStateMachinePlayback::___mb = {};

void *AnimationNodeStateMachinePlayback::_detail_class_tag = nullptr;

void AnimationNodeStateMachinePlayback::___init_method_bindings() {
	___mb.mb_get_current_length = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_current_length");
	___mb.mb_get_current_node = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_current_node");
	___mb.mb_get_current_play_position = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_current_play_position");
	___mb.mb_get_travel_path = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_travel_path");
	___mb.mb_is_playing = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "is_playing");
	___mb.mb_start = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "start");
	___mb.mb_stop = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "stop");
	___mb.mb_travel = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "travel");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AnimationNodeStateMachinePlayback");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AnimationNodeStateMachinePlayback *AnimationNodeStateMachinePlayback::_new()
{
	return (AnimationNodeStateMachinePlayback *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeStateMachinePlayback")());
}
real_t AnimationNodeStateMachinePlayback::get_current_length() const {
	return ___godot_icall_float(___mb.mb_get_current_length, (const Object *) this);
}

String AnimationNodeStateMachinePlayback::get_current_node() const {
	return ___godot_icall_String(___mb.mb_get_current_node, (const Object *) this);
}

real_t AnimationNodeStateMachinePlayback::get_current_play_position() const {
	return ___godot_icall_float(___mb.mb_get_current_play_position, (const Object *) this);
}

PoolStringArray AnimationNodeStateMachinePlayback::get_travel_path() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_travel_path, (const Object *) this);
}

bool AnimationNodeStateMachinePlayback::is_playing() const {
	return ___godot_icall_bool(___mb.mb_is_playing, (const Object *) this);
}

void AnimationNodeStateMachinePlayback::start(const String node) {
	___godot_icall_void_String(___mb.mb_start, (const Object *) this, node);
}

void AnimationNodeStateMachinePlayback::stop() {
	___godot_icall_void(___mb.mb_stop, (const Object *) this);
}

void AnimationNodeStateMachinePlayback::travel(const String to_node) {
	___godot_icall_void_String(___mb.mb_travel, (const Object *) this, to_node);
}

}