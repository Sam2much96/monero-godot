#ifndef GODOT_CPP_FILESYSTEMDOCK_HPP
#define GODOT_CPP_FILESYSTEMDOCK_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VBoxContainer.hpp"
namespace godot {

class InputEvent;
class Texture;
class Control;
class Object;

class FileSystemDock : public VBoxContainer {
	struct ___method_bindings {
		godot_method_bind *mb__bw_history;
		godot_method_bind *mb__duplicate_operation_confirm;
		godot_method_bind *mb__feature_profile_changed;
		godot_method_bind *mb__file_list_activate_file;
		godot_method_bind *mb__file_list_gui_input;
		godot_method_bind *mb__file_list_rmb_option;
		godot_method_bind *mb__file_list_rmb_pressed;
		godot_method_bind *mb__file_list_rmb_select;
		godot_method_bind *mb__file_list_thumbnail_done;
		godot_method_bind *mb__file_multi_selected;
		godot_method_bind *mb__file_removed;
		godot_method_bind *mb__folder_removed;
		godot_method_bind *mb__fs_changed;
		godot_method_bind *mb__fw_history;
		godot_method_bind *mb__make_dir_confirm;
		godot_method_bind *mb__make_scene_confirm;
		godot_method_bind *mb__move_operation_confirm;
		godot_method_bind *mb__move_with_overwrite;
		godot_method_bind *mb__navigate_to_path;
		godot_method_bind *mb__preview_invalidated;
		godot_method_bind *mb__rename_operation_confirm;
		godot_method_bind *mb__rescan;
		godot_method_bind *mb__resource_created;
		godot_method_bind *mb__search_changed;
		godot_method_bind *mb__select_file;
		godot_method_bind *mb__toggle_file_display;
		godot_method_bind *mb__toggle_split_mode;
		godot_method_bind *mb__tree_activate_file;
		godot_method_bind *mb__tree_empty_selected;
		godot_method_bind *mb__tree_gui_input;
		godot_method_bind *mb__tree_multi_selected;
		godot_method_bind *mb__tree_rmb_empty;
		godot_method_bind *mb__tree_rmb_option;
		godot_method_bind *mb__tree_rmb_select;
		godot_method_bind *mb__tree_thumbnail_done;
		godot_method_bind *mb__update_import_dock;
		godot_method_bind *mb__update_tree;
		godot_method_bind *mb_can_drop_data_fw;
		godot_method_bind *mb_drop_data_fw;
		godot_method_bind *mb_get_drag_data_fw;
		godot_method_bind *mb_navigate_to_path;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "FileSystemDock"; }
	static inline const char *___get_godot_class_name() { return (const char *) "FileSystemDock"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _bw_history();
	void _duplicate_operation_confirm();
	void _feature_profile_changed();
	void _file_list_activate_file(const int64_t arg0);
	void _file_list_gui_input(const Ref<InputEvent> arg0);
	void _file_list_rmb_option(const int64_t option);
	void _file_list_rmb_pressed(const Vector2 arg0);
	void _file_list_rmb_select(const int64_t arg0, const Vector2 arg1);
	void _file_list_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3);
	void _file_multi_selected(const int64_t arg0, const bool arg1);
	void _file_removed(const String arg0);
	void _folder_removed(const String arg0);
	void _fs_changed();
	void _fw_history();
	void _make_dir_confirm();
	void _make_scene_confirm();
	void _move_operation_confirm(const String to_path, const bool overwrite = false);
	void _move_with_overwrite();
	void _navigate_to_path(const String arg0, const bool arg1 = false);
	void _preview_invalidated(const String arg0);
	void _rename_operation_confirm();
	void _rescan();
	void _resource_created() const;
	void _search_changed(const String arg0, const Control *arg1);
	void _select_file(const String arg0, const bool arg1);
	void _toggle_file_display();
	void _toggle_split_mode(const bool arg0);
	void _tree_activate_file();
	void _tree_empty_selected();
	void _tree_gui_input(const Ref<InputEvent> arg0);
	void _tree_multi_selected(const Object *arg0, const int64_t arg1, const bool arg2);
	void _tree_rmb_empty(const Vector2 arg0);
	void _tree_rmb_option(const int64_t option);
	void _tree_rmb_select(const Vector2 arg0);
	void _tree_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3);
	void _update_import_dock();
	void _update_tree(const PoolStringArray arg0, const bool arg1, const bool arg2, const bool arg3);
	bool can_drop_data_fw(const Vector2 arg0, const Variant arg1, const Control *arg2) const;
	void drop_data_fw(const Vector2 arg0, const Variant arg1, const Control *arg2);
	Variant get_drag_data_fw(const Vector2 arg0, const Control *arg1);
	void navigate_to_path(const String arg0);

};

}

#endif