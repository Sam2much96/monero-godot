#include "EditorInterface.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Node.hpp"
#include "Resource.hpp"
#include "Control.hpp"
#include "EditorSettings.hpp"
#include "FileSystemDock.hpp"
#include "EditorInspector.hpp"
#include "EditorFileSystem.hpp"
#include "EditorResourcePreview.hpp"
#include "ScriptEditor.hpp"
#include "EditorSelection.hpp"
#include "Object.hpp"


namespace godot {


EditorInterface::___method_bindings EditorInterface::___mb = {};

void *EditorInterface::_detail_class_tag = nullptr;

void EditorInterface::___init_method_bindings() {
	___mb.mb_edit_node = godot::api->godot_method_bind_get_method("EditorInterface", "edit_node");
	___mb.mb_edit_resource = godot::api->godot_method_bind_get_method("EditorInterface", "edit_resource");
	___mb.mb_get_base_control = godot::api->godot_method_bind_get_method("EditorInterface", "get_base_control");
	___mb.mb_get_current_path = godot::api->godot_method_bind_get_method("EditorInterface", "get_current_path");
	___mb.mb_get_edited_scene_root = godot::api->godot_method_bind_get_method("EditorInterface", "get_edited_scene_root");
	___mb.mb_get_editor_scale = godot::api->godot_method_bind_get_method("EditorInterface", "get_editor_scale");
	___mb.mb_get_editor_settings = godot::api->godot_method_bind_get_method("EditorInterface", "get_editor_settings");
	___mb.mb_get_editor_viewport = godot::api->godot_method_bind_get_method("EditorInterface", "get_editor_viewport");
	___mb.mb_get_file_system_dock = godot::api->godot_method_bind_get_method("EditorInterface", "get_file_system_dock");
	___mb.mb_get_inspector = godot::api->godot_method_bind_get_method("EditorInterface", "get_inspector");
	___mb.mb_get_open_scenes = godot::api->godot_method_bind_get_method("EditorInterface", "get_open_scenes");
	___mb.mb_get_playing_scene = godot::api->godot_method_bind_get_method("EditorInterface", "get_playing_scene");
	___mb.mb_get_resource_filesystem = godot::api->godot_method_bind_get_method("EditorInterface", "get_resource_filesystem");
	___mb.mb_get_resource_previewer = godot::api->godot_method_bind_get_method("EditorInterface", "get_resource_previewer");
	___mb.mb_get_script_editor = godot::api->godot_method_bind_get_method("EditorInterface", "get_script_editor");
	___mb.mb_get_selected_path = godot::api->godot_method_bind_get_method("EditorInterface", "get_selected_path");
	___mb.mb_get_selection = godot::api->godot_method_bind_get_method("EditorInterface", "get_selection");
	___mb.mb_inspect_object = godot::api->godot_method_bind_get_method("EditorInterface", "inspect_object");
	___mb.mb_is_distraction_free_mode_enabled = godot::api->godot_method_bind_get_method("EditorInterface", "is_distraction_free_mode_enabled");
	___mb.mb_is_playing_scene = godot::api->godot_method_bind_get_method("EditorInterface", "is_playing_scene");
	___mb.mb_is_plugin_enabled = godot::api->godot_method_bind_get_method("EditorInterface", "is_plugin_enabled");
	___mb.mb_make_mesh_previews = godot::api->godot_method_bind_get_method("EditorInterface", "make_mesh_previews");
	___mb.mb_open_scene_from_path = godot::api->godot_method_bind_get_method("EditorInterface", "open_scene_from_path");
	___mb.mb_play_current_scene = godot::api->godot_method_bind_get_method("EditorInterface", "play_current_scene");
	___mb.mb_play_custom_scene = godot::api->godot_method_bind_get_method("EditorInterface", "play_custom_scene");
	___mb.mb_play_main_scene = godot::api->godot_method_bind_get_method("EditorInterface", "play_main_scene");
	___mb.mb_reload_scene_from_path = godot::api->godot_method_bind_get_method("EditorInterface", "reload_scene_from_path");
	___mb.mb_save_scene = godot::api->godot_method_bind_get_method("EditorInterface", "save_scene");
	___mb.mb_save_scene_as = godot::api->godot_method_bind_get_method("EditorInterface", "save_scene_as");
	___mb.mb_select_file = godot::api->godot_method_bind_get_method("EditorInterface", "select_file");
	___mb.mb_set_distraction_free_mode = godot::api->godot_method_bind_get_method("EditorInterface", "set_distraction_free_mode");
	___mb.mb_set_main_screen_editor = godot::api->godot_method_bind_get_method("EditorInterface", "set_main_screen_editor");
	___mb.mb_set_plugin_enabled = godot::api->godot_method_bind_get_method("EditorInterface", "set_plugin_enabled");
	___mb.mb_stop_playing_scene = godot::api->godot_method_bind_get_method("EditorInterface", "stop_playing_scene");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "EditorInterface");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

void EditorInterface::edit_node(const Node *node) {
	___godot_icall_void_Object(___mb.mb_edit_node, (const Object *) this, node);
}

void EditorInterface::edit_resource(const Ref<Resource> resource) {
	___godot_icall_void_Object(___mb.mb_edit_resource, (const Object *) this, resource.ptr());
}

Control *EditorInterface::get_base_control() {
	return (Control *) ___godot_icall_Object(___mb.mb_get_base_control, (const Object *) this);
}

String EditorInterface::get_current_path() const {
	return ___godot_icall_String(___mb.mb_get_current_path, (const Object *) this);
}

Node *EditorInterface::get_edited_scene_root() {
	return (Node *) ___godot_icall_Object(___mb.mb_get_edited_scene_root, (const Object *) this);
}

real_t EditorInterface::get_editor_scale() const {
	return ___godot_icall_float(___mb.mb_get_editor_scale, (const Object *) this);
}

Ref<EditorSettings> EditorInterface::get_editor_settings() {
	return Ref<EditorSettings>::__internal_constructor(___godot_icall_Object(___mb.mb_get_editor_settings, (const Object *) this));
}

Control *EditorInterface::get_editor_viewport() {
	return (Control *) ___godot_icall_Object(___mb.mb_get_editor_viewport, (const Object *) this);
}

FileSystemDock *EditorInterface::get_file_system_dock() {
	return (FileSystemDock *) ___godot_icall_Object(___mb.mb_get_file_system_dock, (const Object *) this);
}

EditorInspector *EditorInterface::get_inspector() const {
	return (EditorInspector *) ___godot_icall_Object(___mb.mb_get_inspector, (const Object *) this);
}

Array EditorInterface::get_open_scenes() const {
	return ___godot_icall_Array(___mb.mb_get_open_scenes, (const Object *) this);
}

String EditorInterface::get_playing_scene() const {
	return ___godot_icall_String(___mb.mb_get_playing_scene, (const Object *) this);
}

EditorFileSystem *EditorInterface::get_resource_filesystem() {
	return (EditorFileSystem *) ___godot_icall_Object(___mb.mb_get_resource_filesystem, (const Object *) this);
}

EditorResourcePreview *EditorInterface::get_resource_previewer() {
	return (EditorResourcePreview *) ___godot_icall_Object(___mb.mb_get_resource_previewer, (const Object *) this);
}

ScriptEditor *EditorInterface::get_script_editor() {
	return (ScriptEditor *) ___godot_icall_Object(___mb.mb_get_script_editor, (const Object *) this);
}

String EditorInterface::get_selected_path() const {
	return ___godot_icall_String(___mb.mb_get_selected_path, (const Object *) this);
}

EditorSelection *EditorInterface::get_selection() {
	return (EditorSelection *) ___godot_icall_Object(___mb.mb_get_selection, (const Object *) this);
}

void EditorInterface::inspect_object(const Object *object, const String for_property, const bool inspector_only) {
	___godot_icall_void_Object_String_bool(___mb.mb_inspect_object, (const Object *) this, object, for_property, inspector_only);
}

bool EditorInterface::is_distraction_free_mode_enabled() const {
	return ___godot_icall_bool(___mb.mb_is_distraction_free_mode_enabled, (const Object *) this);
}

bool EditorInterface::is_playing_scene() const {
	return ___godot_icall_bool(___mb.mb_is_playing_scene, (const Object *) this);
}

bool EditorInterface::is_plugin_enabled(const String plugin) const {
	return ___godot_icall_bool_String(___mb.mb_is_plugin_enabled, (const Object *) this, plugin);
}

Array EditorInterface::make_mesh_previews(const Array meshes, const int64_t preview_size) {
	return ___godot_icall_Array_Array_int(___mb.mb_make_mesh_previews, (const Object *) this, meshes, preview_size);
}

void EditorInterface::open_scene_from_path(const String scene_filepath) {
	___godot_icall_void_String(___mb.mb_open_scene_from_path, (const Object *) this, scene_filepath);
}

void EditorInterface::play_current_scene() {
	___godot_icall_void(___mb.mb_play_current_scene, (const Object *) this);
}

void EditorInterface::play_custom_scene(const String scene_filepath) {
	___godot_icall_void_String(___mb.mb_play_custom_scene, (const Object *) this, scene_filepath);
}

void EditorInterface::play_main_scene() {
	___godot_icall_void(___mb.mb_play_main_scene, (const Object *) this);
}

void EditorInterface::reload_scene_from_path(const String scene_filepath) {
	___godot_icall_void_String(___mb.mb_reload_scene_from_path, (const Object *) this, scene_filepath);
}

Error EditorInterface::save_scene() {
	return (Error) ___godot_icall_int(___mb.mb_save_scene, (const Object *) this);
}

void EditorInterface::save_scene_as(const String path, const bool with_preview) {
	___godot_icall_void_String_bool(___mb.mb_save_scene_as, (const Object *) this, path, with_preview);
}

void EditorInterface::select_file(const String file) {
	___godot_icall_void_String(___mb.mb_select_file, (const Object *) this, file);
}

void EditorInterface::set_distraction_free_mode(const bool enter) {
	___godot_icall_void_bool(___mb.mb_set_distraction_free_mode, (const Object *) this, enter);
}

void EditorInterface::set_main_screen_editor(const String name) {
	___godot_icall_void_String(___mb.mb_set_main_screen_editor, (const Object *) this, name);
}

void EditorInterface::set_plugin_enabled(const String plugin, const bool enabled) {
	___godot_icall_void_String_bool(___mb.mb_set_plugin_enabled, (const Object *) this, plugin, enabled);
}

void EditorInterface::stop_playing_scene() {
	___godot_icall_void(___mb.mb_stop_playing_scene, (const Object *) this);
}

}