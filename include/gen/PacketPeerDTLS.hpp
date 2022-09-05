#ifndef GODOT_CPP_PACKETPEERDTLS_HPP
#define GODOT_CPP_PACKETPEERDTLS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "PacketPeerDTLS.hpp"

#include "PacketPeer.hpp"
namespace godot {

class PacketPeerUDP;
class X509Certificate;

class PacketPeerDTLS : public PacketPeer {
	struct ___method_bindings {
		godot_method_bind *mb_connect_to_peer;
		godot_method_bind *mb_disconnect_from_peer;
		godot_method_bind *mb_get_status;
		godot_method_bind *mb_poll;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PacketPeerDTLS"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PacketPeerDTLS"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Status {
		STATUS_DISCONNECTED = 0,
		STATUS_HANDSHAKING = 1,
		STATUS_CONNECTED = 2,
		STATUS_ERROR = 3,
		STATUS_ERROR_HOSTNAME_MISMATCH = 4,
	};

	// constants


	static PacketPeerDTLS *_new();

	// methods
	Error connect_to_peer(const Ref<PacketPeerUDP> packet_peer, const bool validate_certs = true, const String for_hostname = "", const Ref<X509Certificate> valid_certificate = nullptr);
	void disconnect_from_peer();
	PacketPeerDTLS::Status get_status() const;
	void poll();

};

}

#endif