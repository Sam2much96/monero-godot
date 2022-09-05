#ifndef GODOT_CPP_SHADER_HPP
#define GODOT_CPP_SHADER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Shader.hpp"

#include "Resource.hpp"
namespace godot {

class Texture;

class Shader : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_code;
		godot_method_bind *mb_get_custom_defines;
		godot_method_bind *mb_get_default_texture_param;
		godot_method_bind *mb_get_mode;
		godot_method_bind *mb_has_param;
		godot_method_bind *mb_set_code;
		godot_method_bind *mb_set_custom_defines;
		godot_method_bind *mb_set_default_texture_param;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Shader"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Shader"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_SPATIAL = 0,
		MODE_CANVAS_ITEM = 1,
		MODE_PARTICLES = 2,
	};

	// constants


	static Shader *_new();

	// methods
	String get_code() const;
	String get_custom_defines() const;
	Ref<Texture> get_default_texture_param(const String param) const;
	Shader::Mode get_mode() const;
	bool has_param(const String name) const;
	void set_code(const String code);
	void set_custom_defines(const String custom_defines);
	void set_default_texture_param(const String param, const Ref<Texture> texture);

};

}

#endif