#include "SkinReference.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Skin.hpp"


namespace godot {


SkinReference::___method_bindings SkinReference::___mb = {};

void *SkinReference::_detail_class_tag = nullptr;

void SkinReference::___init_method_bindings() {
	___mb.mb__skin_changed = godot::api->godot_method_bind_get_method("SkinReference", "_skin_changed");
	___mb.mb_get_skeleton = godot::api->godot_method_bind_get_method("SkinReference", "get_skeleton");
	___mb.mb_get_skin = godot::api->godot_method_bind_get_method("SkinReference", "get_skin");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "SkinReference");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

void SkinReference::_skin_changed() {
	___godot_icall_void(___mb.mb__skin_changed, (const Object *) this);
}

RID SkinReference::get_skeleton() const {
	return ___godot_icall_RID(___mb.mb_get_skeleton, (const Object *) this);
}

Ref<Skin> SkinReference::get_skin() const {
	return Ref<Skin>::__internal_constructor(___godot_icall_Object(___mb.mb_get_skin, (const Object *) this));
}

}