#ifndef GODOT_CPP_WEBXRINTERFACE_HPP
#define GODOT_CPP_WEBXRINTERFACE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "ARVRInterface.hpp"
namespace godot {

class ARVRPositionalTracker;

class WebXRInterface : public ARVRInterface {
	struct ___method_bindings {
		godot_method_bind *mb_get_bounds_geometry;
		godot_method_bind *mb_get_controller;
		godot_method_bind *mb_get_optional_features;
		godot_method_bind *mb_get_reference_space_type;
		godot_method_bind *mb_get_requested_reference_space_types;
		godot_method_bind *mb_get_required_features;
		godot_method_bind *mb_get_session_mode;
		godot_method_bind *mb_get_visibility_state;
		godot_method_bind *mb_is_session_supported;
		godot_method_bind *mb_set_optional_features;
		godot_method_bind *mb_set_requested_reference_space_types;
		godot_method_bind *mb_set_required_features;
		godot_method_bind *mb_set_session_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "WebXRInterface"; }
	static inline const char *___get_godot_class_name() { return (const char *) "WebXRInterface"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	PoolVector3Array get_bounds_geometry() const;
	ARVRPositionalTracker *get_controller(const int64_t controller_id) const;
	String get_optional_features() const;
	String get_reference_space_type() const;
	String get_requested_reference_space_types() const;
	String get_required_features() const;
	String get_session_mode() const;
	String get_visibility_state() const;
	void is_session_supported(const String session_mode);
	void set_optional_features(const String optional_features);
	void set_requested_reference_space_types(const String requested_reference_space_types);
	void set_required_features(const String required_features);
	void set_session_mode(const String session_mode);

};

}

#endif