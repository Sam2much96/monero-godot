#include "AudioStream.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioStream::___method_bindings AudioStream::___mb = {};

void *AudioStream::_detail_class_tag = nullptr;

void AudioStream::___init_method_bindings() {
	___mb.mb_get_length = godot::api->godot_method_bind_get_method("AudioStream", "get_length");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AudioStream");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

real_t AudioStream::get_length() const {
	return ___godot_icall_float(___mb.mb_get_length, (const Object *) this);
}

}