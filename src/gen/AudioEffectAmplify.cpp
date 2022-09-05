#include "AudioEffectAmplify.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioEffectAmplify::___method_bindings AudioEffectAmplify::___mb = {};

void *AudioEffectAmplify::_detail_class_tag = nullptr;

void AudioEffectAmplify::___init_method_bindings() {
	___mb.mb_get_volume_db = godot::api->godot_method_bind_get_method("AudioEffectAmplify", "get_volume_db");
	___mb.mb_set_volume_db = godot::api->godot_method_bind_get_method("AudioEffectAmplify", "set_volume_db");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioEffectAmplify");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AudioEffectAmplify *AudioEffectAmplify::_new()
{
	return (AudioEffectAmplify *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioEffectAmplify")());
}
real_t AudioEffectAmplify::get_volume_db() const {
	return ___godot_icall_float(___mb.mb_get_volume_db, (const Object *) this);
}

void AudioEffectAmplify::set_volume_db(const real_t volume) {
	___godot_icall_void_float(___mb.mb_set_volume_db, (const Object *) this, volume);
}

}