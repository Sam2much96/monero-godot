#include "AnimatedTexture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"


namespace godot {


AnimatedTexture::___method_bindings AnimatedTexture::___mb = {};

void *AnimatedTexture::_detail_class_tag = nullptr;

void AnimatedTexture::___init_method_bindings() {
	___mb.mb__update_proxy = godot::api->godot_method_bind_get_method("AnimatedTexture", "_update_proxy");
	___mb.mb_get_current_frame = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_current_frame");
	___mb.mb_get_fps = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_fps");
	___mb.mb_get_frame_delay = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_frame_delay");
	___mb.mb_get_frame_texture = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_frame_texture");
	___mb.mb_get_frames = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_frames");
	___mb.mb_get_oneshot = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_oneshot");
	___mb.mb_get_pause = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_pause");
	___mb.mb_set_current_frame = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_current_frame");
	___mb.mb_set_fps = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_fps");
	___mb.mb_set_frame_delay = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_frame_delay");
	___mb.mb_set_frame_texture = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_frame_texture");
	___mb.mb_set_frames = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_frames");
	___mb.mb_set_oneshot = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_oneshot");
	___mb.mb_set_pause = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_pause");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AnimatedTexture");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AnimatedTexture *AnimatedTexture::_new()
{
	return (AnimatedTexture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimatedTexture")());
}
void AnimatedTexture::_update_proxy() {
	___godot_icall_void(___mb.mb__update_proxy, (const Object *) this);
}

int64_t AnimatedTexture::get_current_frame() const {
	return ___godot_icall_int(___mb.mb_get_current_frame, (const Object *) this);
}

real_t AnimatedTexture::get_fps() const {
	return ___godot_icall_float(___mb.mb_get_fps, (const Object *) this);
}

real_t AnimatedTexture::get_frame_delay(const int64_t frame) const {
	return ___godot_icall_float_int(___mb.mb_get_frame_delay, (const Object *) this, frame);
}

Ref<Texture> AnimatedTexture::get_frame_texture(const int64_t frame) const {
	return Ref<Texture>::__internal_constructor(___godot_icall_Object_int(___mb.mb_get_frame_texture, (const Object *) this, frame));
}

int64_t AnimatedTexture::get_frames() const {
	return ___godot_icall_int(___mb.mb_get_frames, (const Object *) this);
}

bool AnimatedTexture::get_oneshot() const {
	return ___godot_icall_bool(___mb.mb_get_oneshot, (const Object *) this);
}

bool AnimatedTexture::get_pause() const {
	return ___godot_icall_bool(___mb.mb_get_pause, (const Object *) this);
}

void AnimatedTexture::set_current_frame(const int64_t frame) {
	___godot_icall_void_int(___mb.mb_set_current_frame, (const Object *) this, frame);
}

void AnimatedTexture::set_fps(const real_t fps) {
	___godot_icall_void_float(___mb.mb_set_fps, (const Object *) this, fps);
}

void AnimatedTexture::set_frame_delay(const int64_t frame, const real_t delay) {
	___godot_icall_void_int_float(___mb.mb_set_frame_delay, (const Object *) this, frame, delay);
}

void AnimatedTexture::set_frame_texture(const int64_t frame, const Ref<Texture> texture) {
	___godot_icall_void_int_Object(___mb.mb_set_frame_texture, (const Object *) this, frame, texture.ptr());
}

void AnimatedTexture::set_frames(const int64_t frames) {
	___godot_icall_void_int(___mb.mb_set_frames, (const Object *) this, frames);
}

void AnimatedTexture::set_oneshot(const bool oneshot) {
	___godot_icall_void_bool(___mb.mb_set_oneshot, (const Object *) this, oneshot);
}

void AnimatedTexture::set_pause(const bool pause) {
	___godot_icall_void_bool(___mb.mb_set_pause, (const Object *) this, pause);
}

}