#include "FileSystemDock.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "InputEvent.hpp"
#include "Texture.hpp"
#include "Control.hpp"
#include "Object.hpp"


namespace godot {


FileSystemDock::___method_bindings FileSystemDock::___mb = {};

void *FileSystemDock::_detail_class_tag = nullptr;

void FileSystemDock::___init_method_bindings() {
	___mb.mb__bw_history = godot::api->godot_method_bind_get_method("FileSystemDock", "_bw_history");
	___mb.mb__duplicate_operation_confirm = godot::api->godot_method_bind_get_method("FileSystemDock", "_duplicate_operation_confirm");
	___mb.mb__feature_profile_changed = godot::api->godot_method_bind_get_method("FileSystemDock", "_feature_profile_changed");
	___mb.mb__file_list_activate_file = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_list_activate_file");
	___mb.mb__file_list_gui_input = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_list_gui_input");
	___mb.mb__file_list_rmb_option = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_list_rmb_option");
	___mb.mb__file_list_rmb_pressed = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_list_rmb_pressed");
	___mb.mb__file_list_rmb_select = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_list_rmb_select");
	___mb.mb__file_list_thumbnail_done = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_list_thumbnail_done");
	___mb.mb__file_multi_selected = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_multi_selected");
	___mb.mb__file_removed = godot::api->godot_method_bind_get_method("FileSystemDock", "_file_removed");
	___mb.mb__folder_removed = godot::api->godot_method_bind_get_method("FileSystemDock", "_folder_removed");
	___mb.mb__fs_changed = godot::api->godot_method_bind_get_method("FileSystemDock", "_fs_changed");
	___mb.mb__fw_history = godot::api->godot_method_bind_get_method("FileSystemDock", "_fw_history");
	___mb.mb__make_dir_confirm = godot::api->godot_method_bind_get_method("FileSystemDock", "_make_dir_confirm");
	___mb.mb__make_scene_confirm = godot::api->godot_method_bind_get_method("FileSystemDock", "_make_scene_confirm");
	___mb.mb__move_operation_confirm = godot::api->godot_method_bind_get_method("FileSystemDock", "_move_operation_confirm");
	___mb.mb__move_with_overwrite = godot::api->godot_method_bind_get_method("FileSystemDock", "_move_with_overwrite");
	___mb.mb__navigate_to_path = godot::api->godot_method_bind_get_method("FileSystemDock", "_navigate_to_path");
	___mb.mb__preview_invalidated = godot::api->godot_method_bind_get_method("FileSystemDock", "_preview_invalidated");
	___mb.mb__rename_operation_confirm = godot::api->godot_method_bind_get_method("FileSystemDock", "_rename_operation_confirm");
	___mb.mb__rescan = godot::api->godot_method_bind_get_method("FileSystemDock", "_rescan");
	___mb.mb__resource_created = godot::api->godot_method_bind_get_method("FileSystemDock", "_resource_created");
	___mb.mb__search_changed = godot::api->godot_method_bind_get_method("FileSystemDock", "_search_changed");
	___mb.mb__select_file = godot::api->godot_method_bind_get_method("FileSystemDock", "_select_file");
	___mb.mb__toggle_file_display = godot::api->godot_method_bind_get_method("FileSystemDock", "_toggle_file_display");
	___mb.mb__toggle_split_mode = godot::api->godot_method_bind_get_method("FileSystemDock", "_toggle_split_mode");
	___mb.mb__tree_activate_file = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_activate_file");
	___mb.mb__tree_empty_selected = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_empty_selected");
	___mb.mb__tree_gui_input = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_gui_input");
	___mb.mb__tree_multi_selected = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_multi_selected");
	___mb.mb__tree_rmb_empty = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_rmb_empty");
	___mb.mb__tree_rmb_option = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_rmb_option");
	___mb.mb__tree_rmb_select = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_rmb_select");
	___mb.mb__tree_thumbnail_done = godot::api->godot_method_bind_get_method("FileSystemDock", "_tree_thumbnail_done");
	___mb.mb__update_import_dock = godot::api->godot_method_bind_get_method("FileSystemDock", "_update_import_dock");
	___mb.mb__update_tree = godot::api->godot_method_bind_get_method("FileSystemDock", "_update_tree");
	___mb.mb_can_drop_data_fw = godot::api->godot_method_bind_get_method("FileSystemDock", "can_drop_data_fw");
	___mb.mb_drop_data_fw = godot::api->godot_method_bind_get_method("FileSystemDock", "drop_data_fw");
	___mb.mb_get_drag_data_fw = godot::api->godot_method_bind_get_method("FileSystemDock", "get_drag_data_fw");
	___mb.mb_navigate_to_path = godot::api->godot_method_bind_get_method("FileSystemDock", "navigate_to_path");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "FileSystemDock");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

void FileSystemDock::_bw_history() {
	___godot_icall_void(___mb.mb__bw_history, (const Object *) this);
}

void FileSystemDock::_duplicate_operation_confirm() {
	___godot_icall_void(___mb.mb__duplicate_operation_confirm, (const Object *) this);
}

void FileSystemDock::_feature_profile_changed() {
	___godot_icall_void(___mb.mb__feature_profile_changed, (const Object *) this);
}

void FileSystemDock::_file_list_activate_file(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__file_list_activate_file, (const Object *) this, arg0);
}

void FileSystemDock::_file_list_gui_input(const Ref<InputEvent> arg0) {
	___godot_icall_void_Object(___mb.mb__file_list_gui_input, (const Object *) this, arg0.ptr());
}

void FileSystemDock::_file_list_rmb_option(const int64_t option) {
	___godot_icall_void_int(___mb.mb__file_list_rmb_option, (const Object *) this, option);
}

void FileSystemDock::_file_list_rmb_pressed(const Vector2 arg0) {
	___godot_icall_void_Vector2(___mb.mb__file_list_rmb_pressed, (const Object *) this, arg0);
}

void FileSystemDock::_file_list_rmb_select(const int64_t arg0, const Vector2 arg1) {
	___godot_icall_void_int_Vector2(___mb.mb__file_list_rmb_select, (const Object *) this, arg0, arg1);
}

void FileSystemDock::_file_list_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3) {
	___godot_icall_void_String_Object_Object_Variant(___mb.mb__file_list_thumbnail_done, (const Object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

void FileSystemDock::_file_multi_selected(const int64_t arg0, const bool arg1) {
	___godot_icall_void_int_bool(___mb.mb__file_multi_selected, (const Object *) this, arg0, arg1);
}

void FileSystemDock::_file_removed(const String arg0) {
	___godot_icall_void_String(___mb.mb__file_removed, (const Object *) this, arg0);
}

void FileSystemDock::_folder_removed(const String arg0) {
	___godot_icall_void_String(___mb.mb__folder_removed, (const Object *) this, arg0);
}

void FileSystemDock::_fs_changed() {
	___godot_icall_void(___mb.mb__fs_changed, (const Object *) this);
}

void FileSystemDock::_fw_history() {
	___godot_icall_void(___mb.mb__fw_history, (const Object *) this);
}

void FileSystemDock::_make_dir_confirm() {
	___godot_icall_void(___mb.mb__make_dir_confirm, (const Object *) this);
}

void FileSystemDock::_make_scene_confirm() {
	___godot_icall_void(___mb.mb__make_scene_confirm, (const Object *) this);
}

void FileSystemDock::_move_operation_confirm(const String to_path, const bool overwrite) {
	___godot_icall_void_String_bool(___mb.mb__move_operation_confirm, (const Object *) this, to_path, overwrite);
}

void FileSystemDock::_move_with_overwrite() {
	___godot_icall_void(___mb.mb__move_with_overwrite, (const Object *) this);
}

void FileSystemDock::_navigate_to_path(const String arg0, const bool arg1) {
	___godot_icall_void_String_bool(___mb.mb__navigate_to_path, (const Object *) this, arg0, arg1);
}

void FileSystemDock::_preview_invalidated(const String arg0) {
	___godot_icall_void_String(___mb.mb__preview_invalidated, (const Object *) this, arg0);
}

void FileSystemDock::_rename_operation_confirm() {
	___godot_icall_void(___mb.mb__rename_operation_confirm, (const Object *) this);
}

void FileSystemDock::_rescan() {
	___godot_icall_void(___mb.mb__rescan, (const Object *) this);
}

void FileSystemDock::_resource_created() const {
	___godot_icall_void(___mb.mb__resource_created, (const Object *) this);
}

void FileSystemDock::_search_changed(const String arg0, const Control *arg1) {
	___godot_icall_void_String_Object(___mb.mb__search_changed, (const Object *) this, arg0, arg1);
}

void FileSystemDock::_select_file(const String arg0, const bool arg1) {
	___godot_icall_void_String_bool(___mb.mb__select_file, (const Object *) this, arg0, arg1);
}

void FileSystemDock::_toggle_file_display() {
	___godot_icall_void(___mb.mb__toggle_file_display, (const Object *) this);
}

void FileSystemDock::_toggle_split_mode(const bool arg0) {
	___godot_icall_void_bool(___mb.mb__toggle_split_mode, (const Object *) this, arg0);
}

void FileSystemDock::_tree_activate_file() {
	___godot_icall_void(___mb.mb__tree_activate_file, (const Object *) this);
}

void FileSystemDock::_tree_empty_selected() {
	___godot_icall_void(___mb.mb__tree_empty_selected, (const Object *) this);
}

void FileSystemDock::_tree_gui_input(const Ref<InputEvent> arg0) {
	___godot_icall_void_Object(___mb.mb__tree_gui_input, (const Object *) this, arg0.ptr());
}

void FileSystemDock::_tree_multi_selected(const Object *arg0, const int64_t arg1, const bool arg2) {
	___godot_icall_void_Object_int_bool(___mb.mb__tree_multi_selected, (const Object *) this, arg0, arg1, arg2);
}

void FileSystemDock::_tree_rmb_empty(const Vector2 arg0) {
	___godot_icall_void_Vector2(___mb.mb__tree_rmb_empty, (const Object *) this, arg0);
}

void FileSystemDock::_tree_rmb_option(const int64_t option) {
	___godot_icall_void_int(___mb.mb__tree_rmb_option, (const Object *) this, option);
}

void FileSystemDock::_tree_rmb_select(const Vector2 arg0) {
	___godot_icall_void_Vector2(___mb.mb__tree_rmb_select, (const Object *) this, arg0);
}

void FileSystemDock::_tree_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3) {
	___godot_icall_void_String_Object_Object_Variant(___mb.mb__tree_thumbnail_done, (const Object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

void FileSystemDock::_update_import_dock() {
	___godot_icall_void(___mb.mb__update_import_dock, (const Object *) this);
}

void FileSystemDock::_update_tree(const PoolStringArray arg0, const bool arg1, const bool arg2, const bool arg3) {
	___godot_icall_void_PoolStringArray_bool_bool_bool(___mb.mb__update_tree, (const Object *) this, arg0, arg1, arg2, arg3);
}

bool FileSystemDock::can_drop_data_fw(const Vector2 arg0, const Variant arg1, const Control *arg2) const {
	return ___godot_icall_bool_Vector2_Variant_Object(___mb.mb_can_drop_data_fw, (const Object *) this, arg0, arg1, arg2);
}

void FileSystemDock::drop_data_fw(const Vector2 arg0, const Variant arg1, const Control *arg2) {
	___godot_icall_void_Vector2_Variant_Object(___mb.mb_drop_data_fw, (const Object *) this, arg0, arg1, arg2);
}

Variant FileSystemDock::get_drag_data_fw(const Vector2 arg0, const Control *arg1) {
	return ___godot_icall_Variant_Vector2_Object(___mb.mb_get_drag_data_fw, (const Object *) this, arg0, arg1);
}

void FileSystemDock::navigate_to_path(const String arg0) {
	___godot_icall_void_String(___mb.mb_navigate_to_path, (const Object *) this, arg0);
}

}