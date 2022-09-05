#include "PacketPeerDTLS.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "PacketPeerUDP.hpp"
#include "X509Certificate.hpp"


namespace godot {


PacketPeerDTLS::___method_bindings PacketPeerDTLS::___mb = {};

void *PacketPeerDTLS::_detail_class_tag = nullptr;

void PacketPeerDTLS::___init_method_bindings() {
	___mb.mb_connect_to_peer = godot::api->godot_method_bind_get_method("PacketPeerDTLS", "connect_to_peer");
	___mb.mb_disconnect_from_peer = godot::api->godot_method_bind_get_method("PacketPeerDTLS", "disconnect_from_peer");
	___mb.mb_get_status = godot::api->godot_method_bind_get_method("PacketPeerDTLS", "get_status");
	___mb.mb_poll = godot::api->godot_method_bind_get_method("PacketPeerDTLS", "poll");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "PacketPeerDTLS");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PacketPeerDTLS *PacketPeerDTLS::_new()
{
	return (PacketPeerDTLS *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PacketPeerDTLS")());
}
Error PacketPeerDTLS::connect_to_peer(const Ref<PacketPeerUDP> packet_peer, const bool validate_certs, const String for_hostname, const Ref<X509Certificate> valid_certificate) {
	return (Error) ___godot_icall_int_Object_bool_String_Object(___mb.mb_connect_to_peer, (const Object *) this, packet_peer.ptr(), validate_certs, for_hostname, valid_certificate.ptr());
}

void PacketPeerDTLS::disconnect_from_peer() {
	___godot_icall_void(___mb.mb_disconnect_from_peer, (const Object *) this);
}

PacketPeerDTLS::Status PacketPeerDTLS::get_status() const {
	return (PacketPeerDTLS::Status) ___godot_icall_int(___mb.mb_get_status, (const Object *) this);
}

void PacketPeerDTLS::poll() {
	___godot_icall_void(___mb.mb_poll, (const Object *) this);
}

}