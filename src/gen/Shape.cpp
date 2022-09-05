#include "Shape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "ArrayMesh.hpp"


namespace godot {


Shape::___method_bindings Shape::___mb = {};

void *Shape::_detail_class_tag = nullptr;

void Shape::___init_method_bindings() {
	___mb.mb_get_debug_mesh = godot::api->godot_method_bind_get_method("Shape", "get_debug_mesh");
	___mb.mb_get_margin = godot::api->godot_method_bind_get_method("Shape", "get_margin");
	___mb.mb_set_margin = godot::api->godot_method_bind_get_method("Shape", "set_margin");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Shape");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Ref<ArrayMesh> Shape::get_debug_mesh() {
	return Ref<ArrayMesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_debug_mesh, (const Object *) this));
}

real_t Shape::get_margin() const {
	return ___godot_icall_float(___mb.mb_get_margin, (const Object *) this);
}

void Shape::set_margin(const real_t margin) {
	___godot_icall_void_float(___mb.mb_set_margin, (const Object *) this, margin);
}

}