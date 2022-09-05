#include "CSGPrimitive.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CSGPrimitive::___method_bindings CSGPrimitive::___mb = {};

void *CSGPrimitive::_detail_class_tag = nullptr;

void CSGPrimitive::___init_method_bindings() {
	___mb.mb_is_inverting_faces = godot::api->godot_method_bind_get_method("CSGPrimitive", "is_inverting_faces");
	___mb.mb_set_invert_faces = godot::api->godot_method_bind_get_method("CSGPrimitive", "set_invert_faces");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "CSGPrimitive");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

bool CSGPrimitive::is_inverting_faces() {
	return ___godot_icall_bool(___mb.mb_is_inverting_faces, (const Object *) this);
}

void CSGPrimitive::set_invert_faces(const bool invert_faces) {
	___godot_icall_void_bool(___mb.mb_set_invert_faces, (const Object *) this, invert_faces);
}

}