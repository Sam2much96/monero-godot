#ifndef GODOT_CPP_UDPSERVER_HPP
#define GODOT_CPP_UDPSERVER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class PacketPeerUDP;

class UDPServer : public Reference {
	struct ___method_bindings {
		godot_method_bind *mb_get_max_pending_connections;
		godot_method_bind *mb_is_connection_available;
		godot_method_bind *mb_is_listening;
		godot_method_bind *mb_listen;
		godot_method_bind *mb_poll;
		godot_method_bind *mb_set_max_pending_connections;
		godot_method_bind *mb_stop;
		godot_method_bind *mb_take_connection;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "UDPServer"; }
	static inline const char *___get_godot_class_name() { return (const char *) "UDPServer"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static UDPServer *_new();

	// methods
	int64_t get_max_pending_connections() const;
	bool is_connection_available() const;
	bool is_listening() const;
	Error listen(const int64_t port, const String bind_address = "*");
	Error poll();
	void set_max_pending_connections(const int64_t max_pending_connections);
	void stop();
	Ref<PacketPeerUDP> take_connection();

};

}

#endif