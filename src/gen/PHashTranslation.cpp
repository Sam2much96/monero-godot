#include "PHashTranslation.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Translation.hpp"


namespace godot {


PHashTranslation::___method_bindings PHashTranslation::___mb = {};

void *PHashTranslation::_detail_class_tag = nullptr;

void PHashTranslation::___init_method_bindings() {
	___mb.mb_generate = godot::api->godot_method_bind_get_method("PHashTranslation", "generate");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "PHashTranslation");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PHashTranslation *PHashTranslation::_new()
{
	return (PHashTranslation *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PHashTranslation")());
}
void PHashTranslation::generate(const Ref<Translation> from) {
	___godot_icall_void_Object(___mb.mb_generate, (const Object *) this, from.ptr());
}

}