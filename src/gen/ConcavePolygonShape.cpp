#include "ConcavePolygonShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ConcavePolygonShape::___method_bindings ConcavePolygonShape::___mb = {};

void *ConcavePolygonShape::_detail_class_tag = nullptr;

void ConcavePolygonShape::___init_method_bindings() {
	___mb.mb_get_faces = godot::api->godot_method_bind_get_method("ConcavePolygonShape", "get_faces");
	___mb.mb_set_faces = godot::api->godot_method_bind_get_method("ConcavePolygonShape", "set_faces");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "ConcavePolygonShape");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

ConcavePolygonShape *ConcavePolygonShape::_new()
{
	return (ConcavePolygonShape *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ConcavePolygonShape")());
}
PoolVector3Array ConcavePolygonShape::get_faces() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_faces, (const Object *) this);
}

void ConcavePolygonShape::set_faces(const PoolVector3Array faces) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_faces, (const Object *) this, faces);
}

}