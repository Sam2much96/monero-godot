#include "ResourceSaver.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Resource.hpp"


namespace godot {


ResourceSaver *ResourceSaver::_singleton = NULL;


ResourceSaver::ResourceSaver() {
	_owner = godot::api->godot_global_get_singleton((char *) "ResourceSaver");
}


ResourceSaver::___method_bindings ResourceSaver::___mb = {};

void *ResourceSaver::_detail_class_tag = nullptr;

void ResourceSaver::___init_method_bindings() {
	___mb.mb_get_recognized_extensions = godot::api->godot_method_bind_get_method("_ResourceSaver", "get_recognized_extensions");
	___mb.mb_save = godot::api->godot_method_bind_get_method("_ResourceSaver", "save");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "_ResourceSaver");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PoolStringArray ResourceSaver::get_recognized_extensions(const Ref<Resource> type) {
	return ___godot_icall_PoolStringArray_Object(___mb.mb_get_recognized_extensions, (const Object *) this, type.ptr());
}

Error ResourceSaver::save(const String path, const Ref<Resource> resource, const int64_t flags) {
	return (Error) ___godot_icall_int_String_Object_int(___mb.mb_save, (const Object *) this, path, resource.ptr(), flags);
}

}