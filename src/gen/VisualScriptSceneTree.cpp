#include "VisualScriptSceneTree.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptSceneTree::___method_bindings VisualScriptSceneTree::___mb = {};

void *VisualScriptSceneTree::_detail_class_tag = nullptr;

void VisualScriptSceneTree::___init_method_bindings() {
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "VisualScriptSceneTree");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

VisualScriptSceneTree *VisualScriptSceneTree::_new()
{
	return (VisualScriptSceneTree *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptSceneTree")());
}
}