#include "Joint.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Joint::___method_bindings Joint::___mb = {};

void *Joint::_detail_class_tag = nullptr;

void Joint::___init_method_bindings() {
	___mb.mb__body_exit_tree = godot::api->godot_method_bind_get_method("Joint", "_body_exit_tree");
	___mb.mb_get_exclude_nodes_from_collision = godot::api->godot_method_bind_get_method("Joint", "get_exclude_nodes_from_collision");
	___mb.mb_get_node_a = godot::api->godot_method_bind_get_method("Joint", "get_node_a");
	___mb.mb_get_node_b = godot::api->godot_method_bind_get_method("Joint", "get_node_b");
	___mb.mb_get_solver_priority = godot::api->godot_method_bind_get_method("Joint", "get_solver_priority");
	___mb.mb_set_exclude_nodes_from_collision = godot::api->godot_method_bind_get_method("Joint", "set_exclude_nodes_from_collision");
	___mb.mb_set_node_a = godot::api->godot_method_bind_get_method("Joint", "set_node_a");
	___mb.mb_set_node_b = godot::api->godot_method_bind_get_method("Joint", "set_node_b");
	___mb.mb_set_solver_priority = godot::api->godot_method_bind_get_method("Joint", "set_solver_priority");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Joint");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

void Joint::_body_exit_tree() {
	___godot_icall_void(___mb.mb__body_exit_tree, (const Object *) this);
}

bool Joint::get_exclude_nodes_from_collision() const {
	return ___godot_icall_bool(___mb.mb_get_exclude_nodes_from_collision, (const Object *) this);
}

NodePath Joint::get_node_a() const {
	return ___godot_icall_NodePath(___mb.mb_get_node_a, (const Object *) this);
}

NodePath Joint::get_node_b() const {
	return ___godot_icall_NodePath(___mb.mb_get_node_b, (const Object *) this);
}

int64_t Joint::get_solver_priority() const {
	return ___godot_icall_int(___mb.mb_get_solver_priority, (const Object *) this);
}

void Joint::set_exclude_nodes_from_collision(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_exclude_nodes_from_collision, (const Object *) this, enable);
}

void Joint::set_node_a(const NodePath node) {
	___godot_icall_void_NodePath(___mb.mb_set_node_a, (const Object *) this, node);
}

void Joint::set_node_b(const NodePath node) {
	___godot_icall_void_NodePath(___mb.mb_set_node_b, (const Object *) this, node);
}

void Joint::set_solver_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_solver_priority, (const Object *) this, priority);
}

}