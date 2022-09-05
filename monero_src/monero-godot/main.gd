extends Node

#built for godot 3.3


func _ready():
	# Debugs the GDnative library
	OS.exit_code = 1
	var native_script = load("res://addons/monero/monero.gdns")
	print("Native Script ", native_script)
	if native_script == null || !is_instance_valid(native_script):
		return
	print("Library ", native_script.library)
	if native_script.library == null || !is_instance_valid(native_script.library):
		return
	
	'For Sprites'
	var sprite = native_script.new()
	if sprite == null || !is_instance_valid(sprite):
		return
	'Call method'
	sprite.p() #works
	sprite.monero() #works
	
	
	'For References'
	var ref = native_script.new() 
	print("Reference ", ref)
	if ref == null || !is_instance_valid(ref):
		return
	print("Reference name ", ref.name)
	# debugs reference name
	if ref.name != "SimpleClass":
		return
	print("Reference value ", ref.value)
	if ref.value != 0:
		return
	#debugs reference methods
	print("Call method ", ref.method(1))
	if ref.method(1) != 1:
		return
	"""
	My tests
	"""
	ref.test_void_method() # binding works
	ref.my_test() #should print either null or false
	
	ref.simple_math()
	print(ref.simple_math())
	
	ref.monero_daemon()
	#should print either null or false
	OS.exit_code = 0

func _idle(_delta):
	return true

