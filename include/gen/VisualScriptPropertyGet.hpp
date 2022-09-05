#ifndef GODOT_CPP_VISUALSCRIPTPROPERTYGET_HPP
#define GODOT_CPP_VISUALSCRIPTPROPERTYGET_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Variant.hpp"
#include "VisualScriptPropertyGet.hpp"

#include "VisualScriptNode.hpp"
namespace godot {


class VisualScriptPropertyGet : public VisualScriptNode {
	struct ___method_bindings {
		godot_method_bind *mb__get_type_cache;
		godot_method_bind *mb__set_type_cache;
		godot_method_bind *mb_get_base_path;
		godot_method_bind *mb_get_base_script;
		godot_method_bind *mb_get_base_type;
		godot_method_bind *mb_get_basic_type;
		godot_method_bind *mb_get_call_mode;
		godot_method_bind *mb_get_index;
		godot_method_bind *mb_get_property;
		godot_method_bind *mb_set_base_path;
		godot_method_bind *mb_set_base_script;
		godot_method_bind *mb_set_base_type;
		godot_method_bind *mb_set_basic_type;
		godot_method_bind *mb_set_call_mode;
		godot_method_bind *mb_set_index;
		godot_method_bind *mb_set_property;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "VisualScriptPropertyGet"; }
	static inline const char *___get_godot_class_name() { return (const char *) "VisualScriptPropertyGet"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum CallMode {
		CALL_MODE_SELF = 0,
		CALL_MODE_NODE_PATH = 1,
		CALL_MODE_INSTANCE = 2,
		CALL_MODE_BASIC_TYPE = 3,
	};

	// constants


	static VisualScriptPropertyGet *_new();

	// methods
	Variant::Type _get_type_cache() const;
	void _set_type_cache(const int64_t type_cache);
	NodePath get_base_path() const;
	String get_base_script() const;
	String get_base_type() const;
	Variant::Type get_basic_type() const;
	VisualScriptPropertyGet::CallMode get_call_mode() const;
	String get_index() const;
	String get_property() const;
	void set_base_path(const NodePath base_path);
	void set_base_script(const String base_script);
	void set_base_type(const String base_type);
	void set_basic_type(const int64_t basic_type);
	void set_call_mode(const int64_t mode);
	void set_index(const String index);
	void set_property(const String property);

};

}

#endif