#include "PCKPacker.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


PCKPacker::___method_bindings PCKPacker::___mb = {};

void *PCKPacker::_detail_class_tag = nullptr;

void PCKPacker::___init_method_bindings() {
	___mb.mb_add_file = godot::api->godot_method_bind_get_method("PCKPacker", "add_file");
	___mb.mb_flush = godot::api->godot_method_bind_get_method("PCKPacker", "flush");
	___mb.mb_pck_start = godot::api->godot_method_bind_get_method("PCKPacker", "pck_start");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "PCKPacker");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PCKPacker *PCKPacker::_new()
{
	return (PCKPacker *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PCKPacker")());
}
Error PCKPacker::add_file(const String pck_path, const String source_path) {
	return (Error) ___godot_icall_int_String_String(___mb.mb_add_file, (const Object *) this, pck_path, source_path);
}

Error PCKPacker::flush(const bool verbose) {
	return (Error) ___godot_icall_int_bool(___mb.mb_flush, (const Object *) this, verbose);
}

Error PCKPacker::pck_start(const String pck_name, const int64_t alignment) {
	return (Error) ___godot_icall_int_String_int(___mb.mb_pck_start, (const Object *) this, pck_name, alignment);
}

}