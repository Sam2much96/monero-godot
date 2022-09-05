#include "VisualScriptBuiltinFunc.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptBuiltinFunc::___method_bindings VisualScriptBuiltinFunc::___mb = {};

void *VisualScriptBuiltinFunc::_detail_class_tag = nullptr;

void VisualScriptBuiltinFunc::___init_method_bindings() {
	___mb.mb_get_func = godot::api->godot_method_bind_get_method("VisualScriptBuiltinFunc", "get_func");
	___mb.mb_set_func = godot::api->godot_method_bind_get_method("VisualScriptBuiltinFunc", "set_func");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualScriptBuiltinFunc");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualScriptBuiltinFunc *VisualScriptBuiltinFunc::_new()
{
	return (VisualScriptBuiltinFunc *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptBuiltinFunc")());
}
VisualScriptBuiltinFunc::BuiltinFunc VisualScriptBuiltinFunc::get_func() {
	return (VisualScriptBuiltinFunc::BuiltinFunc) ___godot_icall_int(___mb.mb_get_func, (const Object *) this);
}

void VisualScriptBuiltinFunc::set_func(const int64_t which) {
	___godot_icall_void_int(___mb.mb_set_func, (const Object *) this, which);
}

}