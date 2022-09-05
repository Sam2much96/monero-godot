#include "WebXRInterface.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "ARVRPositionalTracker.hpp"


namespace godot {


WebXRInterface::___method_bindings WebXRInterface::___mb = {};

void *WebXRInterface::_detail_class_tag = nullptr;

void WebXRInterface::___init_method_bindings() {
	___mb.mb_get_bounds_geometry = godot::api->godot_method_bind_get_method("WebXRInterface", "get_bounds_geometry");
	___mb.mb_get_controller = godot::api->godot_method_bind_get_method("WebXRInterface", "get_controller");
	___mb.mb_get_optional_features = godot::api->godot_method_bind_get_method("WebXRInterface", "get_optional_features");
	___mb.mb_get_reference_space_type = godot::api->godot_method_bind_get_method("WebXRInterface", "get_reference_space_type");
	___mb.mb_get_requested_reference_space_types = godot::api->godot_method_bind_get_method("WebXRInterface", "get_requested_reference_space_types");
	___mb.mb_get_required_features = godot::api->godot_method_bind_get_method("WebXRInterface", "get_required_features");
	___mb.mb_get_session_mode = godot::api->godot_method_bind_get_method("WebXRInterface", "get_session_mode");
	___mb.mb_get_visibility_state = godot::api->godot_method_bind_get_method("WebXRInterface", "get_visibility_state");
	___mb.mb_is_session_supported = godot::api->godot_method_bind_get_method("WebXRInterface", "is_session_supported");
	___mb.mb_set_optional_features = godot::api->godot_method_bind_get_method("WebXRInterface", "set_optional_features");
	___mb.mb_set_requested_reference_space_types = godot::api->godot_method_bind_get_method("WebXRInterface", "set_requested_reference_space_types");
	___mb.mb_set_required_features = godot::api->godot_method_bind_get_method("WebXRInterface", "set_required_features");
	___mb.mb_set_session_mode = godot::api->godot_method_bind_get_method("WebXRInterface", "set_session_mode");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "WebXRInterface");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PoolVector3Array WebXRInterface::get_bounds_geometry() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_bounds_geometry, (const Object *) this);
}

ARVRPositionalTracker *WebXRInterface::get_controller(const int64_t controller_id) const {
	return (ARVRPositionalTracker *) ___godot_icall_Object_int(___mb.mb_get_controller, (const Object *) this, controller_id);
}

String WebXRInterface::get_optional_features() const {
	return ___godot_icall_String(___mb.mb_get_optional_features, (const Object *) this);
}

String WebXRInterface::get_reference_space_type() const {
	return ___godot_icall_String(___mb.mb_get_reference_space_type, (const Object *) this);
}

String WebXRInterface::get_requested_reference_space_types() const {
	return ___godot_icall_String(___mb.mb_get_requested_reference_space_types, (const Object *) this);
}

String WebXRInterface::get_required_features() const {
	return ___godot_icall_String(___mb.mb_get_required_features, (const Object *) this);
}

String WebXRInterface::get_session_mode() const {
	return ___godot_icall_String(___mb.mb_get_session_mode, (const Object *) this);
}

String WebXRInterface::get_visibility_state() const {
	return ___godot_icall_String(___mb.mb_get_visibility_state, (const Object *) this);
}

void WebXRInterface::is_session_supported(const String session_mode) {
	___godot_icall_void_String(___mb.mb_is_session_supported, (const Object *) this, session_mode);
}

void WebXRInterface::set_optional_features(const String optional_features) {
	___godot_icall_void_String(___mb.mb_set_optional_features, (const Object *) this, optional_features);
}

void WebXRInterface::set_requested_reference_space_types(const String requested_reference_space_types) {
	___godot_icall_void_String(___mb.mb_set_requested_reference_space_types, (const Object *) this, requested_reference_space_types);
}

void WebXRInterface::set_required_features(const String required_features) {
	___godot_icall_void_String(___mb.mb_set_required_features, (const Object *) this, required_features);
}

void WebXRInterface::set_session_mode(const String session_mode) {
	___godot_icall_void_String(___mb.mb_set_session_mode, (const Object *) this, session_mode);
}

}