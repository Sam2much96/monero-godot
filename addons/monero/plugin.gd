tool
extends EditorPlugin

var gdn

func _enter_tree():
	# Monero custom type

	# Get the base icon from the current editor interface/theme
	var gui = get_editor_interface().get_base_control()
	var node_icon = gui.get_icon("Node", "EditorIcons")

	add_custom_type(
		"Monero",
		"Node",
		preload("res://addons/monero/monero.gdns"),
		node_icon
	)
	
	# Driver for executing async rust code in _process
	# add_autoload_singleton("AsyncExecutorDriver", "res://addons/algodot/gdnative/async_executor.gdns")


func _exit_tree():
	# Clean up
	remove_custom_type("monero")
	# remove_autoload_singleton("AsyncExecutorDriver")
