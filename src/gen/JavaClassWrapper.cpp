#include "JavaClassWrapper.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "JavaClass.hpp"


namespace godot {


JavaClassWrapper *JavaClassWrapper::_singleton = NULL;


JavaClassWrapper::JavaClassWrapper() {
	_owner = godot::api->godot_global_get_singleton((char *) "JavaClassWrapper");
}


JavaClassWrapper::___method_bindings JavaClassWrapper::___mb = {};

void *JavaClassWrapper::_detail_class_tag = nullptr;

void JavaClassWrapper::___init_method_bindings() {
	___mb.mb_wrap = godot::api->godot_method_bind_get_method("JavaClassWrapper", "wrap");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "JavaClassWrapper");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Ref<JavaClass> JavaClassWrapper::wrap(const String name) {
	return Ref<JavaClass>::__internal_constructor(___godot_icall_Object_String(___mb.mb_wrap, (const Object *) this, name));
}

}