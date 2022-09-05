#include "UDPServer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "PacketPeerUDP.hpp"


namespace godot {


UDPServer::___method_bindings UDPServer::___mb = {};

void *UDPServer::_detail_class_tag = nullptr;

void UDPServer::___init_method_bindings() {
	___mb.mb_get_max_pending_connections = godot::api->godot_method_bind_get_method("UDPServer", "get_max_pending_connections");
	___mb.mb_is_connection_available = godot::api->godot_method_bind_get_method("UDPServer", "is_connection_available");
	___mb.mb_is_listening = godot::api->godot_method_bind_get_method("UDPServer", "is_listening");
	___mb.mb_listen = godot::api->godot_method_bind_get_method("UDPServer", "listen");
	___mb.mb_poll = godot::api->godot_method_bind_get_method("UDPServer", "poll");
	___mb.mb_set_max_pending_connections = godot::api->godot_method_bind_get_method("UDPServer", "set_max_pending_connections");
	___mb.mb_stop = godot::api->godot_method_bind_get_method("UDPServer", "stop");
	___mb.mb_take_connection = godot::api->godot_method_bind_get_method("UDPServer", "take_connection");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "UDPServer");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

UDPServer *UDPServer::_new()
{
	return (UDPServer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"UDPServer")());
}
int64_t UDPServer::get_max_pending_connections() const {
	return ___godot_icall_int(___mb.mb_get_max_pending_connections, (const Object *) this);
}

bool UDPServer::is_connection_available() const {
	return ___godot_icall_bool(___mb.mb_is_connection_available, (const Object *) this);
}

bool UDPServer::is_listening() const {
	return ___godot_icall_bool(___mb.mb_is_listening, (const Object *) this);
}

Error UDPServer::listen(const int64_t port, const String bind_address) {
	return (Error) ___godot_icall_int_int_String(___mb.mb_listen, (const Object *) this, port, bind_address);
}

Error UDPServer::poll() {
	return (Error) ___godot_icall_int(___mb.mb_poll, (const Object *) this);
}

void UDPServer::set_max_pending_connections(const int64_t max_pending_connections) {
	___godot_icall_void_int(___mb.mb_set_max_pending_connections, (const Object *) this, max_pending_connections);
}

void UDPServer::stop() {
	___godot_icall_void(___mb.mb_stop, (const Object *) this);
}

Ref<PacketPeerUDP> UDPServer::take_connection() {
	return Ref<PacketPeerUDP>::__internal_constructor(___godot_icall_Object(___mb.mb_take_connection, (const Object *) this));
}

}