#include "RichTextEffect.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "CharFXTransform.hpp"


namespace godot {


RichTextEffect::___method_bindings RichTextEffect::___mb = {};

void *RichTextEffect::_detail_class_tag = nullptr;

void RichTextEffect::___init_method_bindings() {
	___mb.mb__process_custom_fx = godot::api->godot_method_bind_get_method("RichTextEffect", "_process_custom_fx");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "RichTextEffect");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

RichTextEffect *RichTextEffect::_new()
{
	return (RichTextEffect *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"RichTextEffect")());
}
bool RichTextEffect::_process_custom_fx(const Ref<CharFXTransform> char_fx) {
	return ___godot_icall_bool_Object(___mb.mb__process_custom_fx, (const Object *) this, char_fx.ptr());
}

}