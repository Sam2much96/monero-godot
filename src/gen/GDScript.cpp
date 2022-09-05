#include "GDScript.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GDScript::___method_bindings GDScript::___mb = {};

void *GDScript::_detail_class_tag = nullptr;

void GDScript::___init_method_bindings() {
	___mb.mb_get_as_byte_code = godot::api->godot_method_bind_get_method("GDScript", "get_as_byte_code");
	___mb.mb_new = godot::api->godot_method_bind_get_method("GDScript", "new");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GDScript");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GDScript *GDScript::_new()
{
	return (GDScript *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GDScript")());
}
PoolByteArray GDScript::get_as_byte_code() const {
	return ___godot_icall_PoolByteArray(___mb.mb_get_as_byte_code, (const Object *) this);
}

Variant GDScript::new_(const Array& __var_args) {


	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 0));


	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 0] = (godot_variant *) &((Array &) __var_args)[i];
	}

	Variant __result;
	*(godot_variant *) &__result = godot::api->godot_method_bind_call(___mb.mb_new, ((const Object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 0), nullptr);


	return __result;
}

}