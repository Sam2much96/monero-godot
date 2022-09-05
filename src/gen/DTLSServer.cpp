#include "DTLSServer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "CryptoKey.hpp"
#include "X509Certificate.hpp"
#include "PacketPeerDTLS.hpp"
#include "PacketPeerUDP.hpp"


namespace godot {


DTLSServer::___method_bindings DTLSServer::___mb = {};

void *DTLSServer::_detail_class_tag = nullptr;

void DTLSServer::___init_method_bindings() {
	___mb.mb_setup = godot::api->godot_method_bind_get_method("DTLSServer", "setup");
	___mb.mb_take_connection = godot::api->godot_method_bind_get_method("DTLSServer", "take_connection");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "DTLSServer");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

DTLSServer *DTLSServer::_new()
{
	return (DTLSServer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"DTLSServer")());
}
Error DTLSServer::setup(const Ref<CryptoKey> key, const Ref<X509Certificate> certificate, const Ref<X509Certificate> chain) {
	return (Error) ___godot_icall_int_Object_Object_Object(___mb.mb_setup, (const Object *) this, key.ptr(), certificate.ptr(), chain.ptr());
}

Ref<PacketPeerDTLS> DTLSServer::take_connection(const Ref<PacketPeerUDP> udp_peer) {
	return Ref<PacketPeerDTLS>::__internal_constructor(___godot_icall_Object_Object(___mb.mb_take_connection, (const Object *) this, udp_peer.ptr()));
}

}