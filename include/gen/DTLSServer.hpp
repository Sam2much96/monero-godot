#ifndef GODOT_CPP_DTLSSERVER_HPP
#define GODOT_CPP_DTLSSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class CryptoKey;
class X509Certificate;
class PacketPeerDTLS;
class PacketPeerUDP;

class DTLSServer : public Reference {
	struct ___method_bindings {
		godot_method_bind *mb_setup;
		godot_method_bind *mb_take_connection;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "DTLSServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "DTLSServer"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static DTLSServer *_new();

	// methods
	Error setup(const Ref<CryptoKey> key, const Ref<X509Certificate> certificate, const Ref<X509Certificate> chain = nullptr);
	Ref<PacketPeerDTLS> take_connection(const Ref<PacketPeerUDP> udp_peer);

};

}

#endif