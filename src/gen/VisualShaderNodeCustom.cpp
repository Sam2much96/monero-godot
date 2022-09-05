#include "VisualShaderNodeCustom.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeCustom::___method_bindings VisualShaderNodeCustom::___mb = {};

void *VisualShaderNodeCustom::_detail_class_tag = nullptr;

void VisualShaderNodeCustom::___init_method_bindings() {
	___mb.mb__get_category = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_category");
	___mb.mb__get_code = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_code");
	___mb.mb__get_description = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_description");
	___mb.mb__get_global_code = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_global_code");
	___mb.mb__get_input_port_count = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_input_port_count");
	___mb.mb__get_input_port_name = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_input_port_name");
	___mb.mb__get_input_port_type = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_input_port_type");
	___mb.mb__get_name = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_name");
	___mb.mb__get_output_port_count = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_output_port_count");
	___mb.mb__get_output_port_name = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_output_port_name");
	___mb.mb__get_output_port_type = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_output_port_type");
	___mb.mb__get_return_icon_type = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_return_icon_type");
	___mb.mb__get_subcategory = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_get_subcategory");
	___mb.mb__is_initialized = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_is_initialized");
	___mb.mb__set_initialized = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_set_initialized");
	___mb.mb__set_input_port_default_value = godot::api->godot_method_bind_get_method("VisualShaderNodeCustom", "_set_input_port_default_value");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualShaderNodeCustom");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualShaderNodeCustom *VisualShaderNodeCustom::_new()
{
	return (VisualShaderNodeCustom *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeCustom")());
}
String VisualShaderNodeCustom::_get_category() {
	return ___godot_icall_String(___mb.mb__get_category, (const Object *) this);
}

String VisualShaderNodeCustom::_get_code(const Array input_vars, const Array output_vars, const int64_t mode, const int64_t type) {
	return ___godot_icall_String_Array_Array_int_int(___mb.mb__get_code, (const Object *) this, input_vars, output_vars, mode, type);
}

String VisualShaderNodeCustom::_get_description() {
	return ___godot_icall_String(___mb.mb__get_description, (const Object *) this);
}

String VisualShaderNodeCustom::_get_global_code(const int64_t mode) {
	return ___godot_icall_String_int(___mb.mb__get_global_code, (const Object *) this, mode);
}

int64_t VisualShaderNodeCustom::_get_input_port_count() {
	return ___godot_icall_int(___mb.mb__get_input_port_count, (const Object *) this);
}

String VisualShaderNodeCustom::_get_input_port_name(const int64_t port) {
	return ___godot_icall_String_int(___mb.mb__get_input_port_name, (const Object *) this, port);
}

int64_t VisualShaderNodeCustom::_get_input_port_type(const int64_t port) {
	return ___godot_icall_int_int(___mb.mb__get_input_port_type, (const Object *) this, port);
}

String VisualShaderNodeCustom::_get_name() {
	return ___godot_icall_String(___mb.mb__get_name, (const Object *) this);
}

int64_t VisualShaderNodeCustom::_get_output_port_count() {
	return ___godot_icall_int(___mb.mb__get_output_port_count, (const Object *) this);
}

String VisualShaderNodeCustom::_get_output_port_name(const int64_t port) {
	return ___godot_icall_String_int(___mb.mb__get_output_port_name, (const Object *) this, port);
}

int64_t VisualShaderNodeCustom::_get_output_port_type(const int64_t port) {
	return ___godot_icall_int_int(___mb.mb__get_output_port_type, (const Object *) this, port);
}

int64_t VisualShaderNodeCustom::_get_return_icon_type() {
	return ___godot_icall_int(___mb.mb__get_return_icon_type, (const Object *) this);
}

String VisualShaderNodeCustom::_get_subcategory() {
	return ___godot_icall_String(___mb.mb__get_subcategory, (const Object *) this);
}

bool VisualShaderNodeCustom::_is_initialized() {
	return ___godot_icall_bool(___mb.mb__is_initialized, (const Object *) this);
}

void VisualShaderNodeCustom::_set_initialized(const bool enabled) {
	___godot_icall_void_bool(___mb.mb__set_initialized, (const Object *) this, enabled);
}

void VisualShaderNodeCustom::_set_input_port_default_value(const int64_t port, const Variant value) {
	___godot_icall_void_int_Variant(___mb.mb__set_input_port_default_value, (const Object *) this, port, value);
}

}