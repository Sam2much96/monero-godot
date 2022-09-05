#include "QuadMesh.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


QuadMesh::___method_bindings QuadMesh::___mb = {};

void *QuadMesh::_detail_class_tag = nullptr;

void QuadMesh::___init_method_bindings() {
	___mb.mb_get_size = godot::api->godot_method_bind_get_method("QuadMesh", "get_size");
	___mb.mb_set_size = godot::api->godot_method_bind_get_method("QuadMesh", "set_size");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "QuadMesh");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

QuadMesh *QuadMesh::_new()
{
	return (QuadMesh *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"QuadMesh")());
}
Vector2 QuadMesh::get_size() const {
	return ___godot_icall_Vector2(___mb.mb_get_size, (const Object *) this);
}

void QuadMesh::set_size(const Vector2 size) {
	___godot_icall_void_Vector2(___mb.mb_set_size, (const Object *) this, size);
}

}