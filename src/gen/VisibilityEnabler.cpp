#include "VisibilityEnabler.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Node.hpp"


namespace godot {


VisibilityEnabler::___method_bindings VisibilityEnabler::___mb = {};

void *VisibilityEnabler::_detail_class_tag = nullptr;

void VisibilityEnabler::___init_method_bindings() {
	___mb.mb__node_removed = godot::api->godot_method_bind_get_method("VisibilityEnabler", "_node_removed");
	___mb.mb_is_enabler_enabled = godot::api->godot_method_bind_get_method("VisibilityEnabler", "is_enabler_enabled");
	___mb.mb_set_enabler = godot::api->godot_method_bind_get_method("VisibilityEnabler", "set_enabler");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisibilityEnabler");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisibilityEnabler *VisibilityEnabler::_new()
{
	return (VisibilityEnabler *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisibilityEnabler")());
}
void VisibilityEnabler::_node_removed(const Node *arg0) {
	___godot_icall_void_Object(___mb.mb__node_removed, (const Object *) this, arg0);
}

bool VisibilityEnabler::is_enabler_enabled(const int64_t enabler) const {
	return ___godot_icall_bool_int(___mb.mb_is_enabler_enabled, (const Object *) this, enabler);
}

void VisibilityEnabler::set_enabler(const int64_t enabler, const bool enabled) {
	___godot_icall_void_int_bool(___mb.mb_set_enabler, (const Object *) this, enabler, enabled);
}

}