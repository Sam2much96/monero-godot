#include "BoxContainer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


BoxContainer::___method_bindings BoxContainer::___mb = {};

void *BoxContainer::_detail_class_tag = nullptr;

void BoxContainer::___init_method_bindings() {
	___mb.mb_add_spacer = godot::api->godot_method_bind_get_method("BoxContainer", "add_spacer");
	___mb.mb_get_alignment = godot::api->godot_method_bind_get_method("BoxContainer", "get_alignment");
	___mb.mb_set_alignment = godot::api->godot_method_bind_get_method("BoxContainer", "set_alignment");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "BoxContainer");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

void BoxContainer::add_spacer(const bool begin) {
	___godot_icall_void_bool(___mb.mb_add_spacer, (const Object *) this, begin);
}

BoxContainer::AlignMode BoxContainer::get_alignment() const {
	return (BoxContainer::AlignMode) ___godot_icall_int(___mb.mb_get_alignment, (const Object *) this);
}

void BoxContainer::set_alignment(const int64_t alignment) {
	___godot_icall_void_int(___mb.mb_set_alignment, (const Object *) this, alignment);
}

}