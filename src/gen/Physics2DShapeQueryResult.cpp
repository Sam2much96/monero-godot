#include "Physics2DShapeQueryResult.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"


namespace godot {


Physics2DShapeQueryResult::___method_bindings Physics2DShapeQueryResult::___mb = {};

void *Physics2DShapeQueryResult::_detail_class_tag = nullptr;

void Physics2DShapeQueryResult::___init_method_bindings() {
	___mb.mb_get_result_count = godot::api->godot_method_bind_get_method("Physics2DShapeQueryResult", "get_result_count");
	___mb.mb_get_result_object = godot::api->godot_method_bind_get_method("Physics2DShapeQueryResult", "get_result_object");
	___mb.mb_get_result_object_id = godot::api->godot_method_bind_get_method("Physics2DShapeQueryResult", "get_result_object_id");
	___mb.mb_get_result_object_shape = godot::api->godot_method_bind_get_method("Physics2DShapeQueryResult", "get_result_object_shape");
	___mb.mb_get_result_rid = godot::api->godot_method_bind_get_method("Physics2DShapeQueryResult", "get_result_rid");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Physics2DShapeQueryResult");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

int64_t Physics2DShapeQueryResult::get_result_count() const {
	return ___godot_icall_int(___mb.mb_get_result_count, (const Object *) this);
}

Object *Physics2DShapeQueryResult::get_result_object(const int64_t idx) const {
	return (Object *) ___godot_icall_Object_int(___mb.mb_get_result_object, (const Object *) this, idx);
}

int64_t Physics2DShapeQueryResult::get_result_object_id(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_result_object_id, (const Object *) this, idx);
}

int64_t Physics2DShapeQueryResult::get_result_object_shape(const int64_t idx) const {
	return ___godot_icall_int_int(___mb.mb_get_result_object_shape, (const Object *) this, idx);
}

RID Physics2DShapeQueryResult::get_result_rid(const int64_t idx) const {
	return ___godot_icall_RID_int(___mb.mb_get_result_rid, (const Object *) this, idx);
}

}