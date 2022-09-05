#include "PhysicsBody2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Node.hpp"


namespace godot {


PhysicsBody2D::___method_bindings PhysicsBody2D::___mb = {};

void *PhysicsBody2D::_detail_class_tag = nullptr;

void PhysicsBody2D::___init_method_bindings() {
	___mb.mb__get_layers = godot::api->godot_method_bind_get_method("PhysicsBody2D", "_get_layers");
	___mb.mb__set_layers = godot::api->godot_method_bind_get_method("PhysicsBody2D", "_set_layers");
	___mb.mb_add_collision_exception_with = godot::api->godot_method_bind_get_method("PhysicsBody2D", "add_collision_exception_with");
	___mb.mb_get_collision_exceptions = godot::api->godot_method_bind_get_method("PhysicsBody2D", "get_collision_exceptions");
	___mb.mb_get_collision_layer = godot::api->godot_method_bind_get_method("PhysicsBody2D", "get_collision_layer");
	___mb.mb_get_collision_layer_bit = godot::api->godot_method_bind_get_method("PhysicsBody2D", "get_collision_layer_bit");
	___mb.mb_get_collision_mask = godot::api->godot_method_bind_get_method("PhysicsBody2D", "get_collision_mask");
	___mb.mb_get_collision_mask_bit = godot::api->godot_method_bind_get_method("PhysicsBody2D", "get_collision_mask_bit");
	___mb.mb_remove_collision_exception_with = godot::api->godot_method_bind_get_method("PhysicsBody2D", "remove_collision_exception_with");
	___mb.mb_set_collision_layer = godot::api->godot_method_bind_get_method("PhysicsBody2D", "set_collision_layer");
	___mb.mb_set_collision_layer_bit = godot::api->godot_method_bind_get_method("PhysicsBody2D", "set_collision_layer_bit");
	___mb.mb_set_collision_mask = godot::api->godot_method_bind_get_method("PhysicsBody2D", "set_collision_mask");
	___mb.mb_set_collision_mask_bit = godot::api->godot_method_bind_get_method("PhysicsBody2D", "set_collision_mask_bit");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "PhysicsBody2D");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

int64_t PhysicsBody2D::_get_layers() const {
	return ___godot_icall_int(___mb.mb__get_layers, (const Object *) this);
}

void PhysicsBody2D::_set_layers(const int64_t mask) {
	___godot_icall_void_int(___mb.mb__set_layers, (const Object *) this, mask);
}

void PhysicsBody2D::add_collision_exception_with(const Node *body) {
	___godot_icall_void_Object(___mb.mb_add_collision_exception_with, (const Object *) this, body);
}

Array PhysicsBody2D::get_collision_exceptions() {
	return ___godot_icall_Array(___mb.mb_get_collision_exceptions, (const Object *) this);
}

int64_t PhysicsBody2D::get_collision_layer() const {
	return ___godot_icall_int(___mb.mb_get_collision_layer, (const Object *) this);
}

bool PhysicsBody2D::get_collision_layer_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_layer_bit, (const Object *) this, bit);
}

int64_t PhysicsBody2D::get_collision_mask() const {
	return ___godot_icall_int(___mb.mb_get_collision_mask, (const Object *) this);
}

bool PhysicsBody2D::get_collision_mask_bit(const int64_t bit) const {
	return ___godot_icall_bool_int(___mb.mb_get_collision_mask_bit, (const Object *) this, bit);
}

void PhysicsBody2D::remove_collision_exception_with(const Node *body) {
	___godot_icall_void_Object(___mb.mb_remove_collision_exception_with, (const Object *) this, body);
}

void PhysicsBody2D::set_collision_layer(const int64_t layer) {
	___godot_icall_void_int(___mb.mb_set_collision_layer, (const Object *) this, layer);
}

void PhysicsBody2D::set_collision_layer_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_layer_bit, (const Object *) this, bit, value);
}

void PhysicsBody2D::set_collision_mask(const int64_t mask) {
	___godot_icall_void_int(___mb.mb_set_collision_mask, (const Object *) this, mask);
}

void PhysicsBody2D::set_collision_mask_bit(const int64_t bit, const bool value) {
	___godot_icall_void_int_bool(___mb.mb_set_collision_mask_bit, (const Object *) this, bit, value);
}

}