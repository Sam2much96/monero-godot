#ifndef INIT_H
#define INIT_H

#include <Godot.hpp>
#include <Reference.hpp> //for reference
#include <Sprite.hpp> //for sprites

//import any cpp or monero code and the compiler bitches up
#include <string>
//#include <sample_code.cpp>

//#include "rapidjson/document.h"
//#include <wallet/monero_wallet.h> //works
//#include "wallet2.h"
//#include "wallet/monero_wallet_full.h"
//#include <daemon/monero_daemon_model.h>

//using namespace monero;

using namespace godot;

class Monero : public Sprite {
	GODOT_CLASS(Monero, Sprite);

public:
	Monero() {}

	void _init(){
		const char* mnemonic= ("hefty value later extra artistic firm radar yodel talent future fungal nutshell because sanity awesome nail unjustly rage unafraid cedar delayed thumbs comb custom sanity");
	}

	void p(){
		Godot::print("talsfanflkanfa");
	}

	int monero(){ //creates a monero class and calls a generic mnemonic
		Monero s;
		s._init();
		return 0;
	}

	void _process(float delta){
	}
	
	static void _register_methods() {
		register_method("monero", & Monero::monero);
		register_method("p", & Monero::p);
	}

};


class SimpleClass : public Reference { //disabled in godot engine
	GODOT_CLASS(SimpleClass, Reference);

public:
	SimpleClass() {}

	/** `_init` must exist as it is called by Godot. */
	void _init() {
		_name = String("SimpleClass");
		_value = 0;
	}

	void test_void_method() {
		Godot::print("This is test");
	}

	Variant method(Variant arg) {
		Variant ret;
		ret = arg;

		return ret;
	}
	//first test calling cpp programes with monero cpp
	void my_test() { //not calling method properly //create a function using monero daemon
		const char* mnemonic= ("hefty value later extra artistic firm radar yodel talent future fungal nutshell because sanity awesome nail unjustly rage unafraid cedar delayed thumbs comb custom sanity" );	
		Godot::print(mnemonic);	
	}

	int simple_math() { //works
		const char* m= ("simple math test" );
		
		//simple maths
		double x = 10;
		double y = 2;
		double z = x/y;

		

		//monero_wallet_full::create_wallet_from_mnemonic() #no monero code works in this class
		Godot::print(m); //does not print integers	

		
		return z; //works
	

	}


	String monero_daemon() { //not calling method properly //create a function using monero daemon //bugs out and currupts shared lib
		const char* m= ("monero_daemon" );
		//const char* json

		Godot::print(m);
		
		//call monero daemon methods Get the wallet's version.
		//printf("%p\n",monero::monero_version()); //works-ish
		//monero::monero_version(); //corrupts the native library
		
		
		//monero::monero_version(); 	

		//Godot::print(z);		//doesnt return the value
		//return 0; //works
	
		return 10.0;
	}





	static void _register_methods() {
		register_method("method", &SimpleClass::method); //registers line 22

		register_method("test_void_method", & SimpleClass::test_void_method); //registers line 18

		register_method("my_test", & SimpleClass::my_test);//registers monero test error


		register_method("simple_math", & SimpleClass::simple_math);//registers simple math method

		register_method("monero_daemon", & SimpleClass::monero_daemon); //monero daemon init




		/**
		 * The line below is equivalent to the following GDScript export:
		 *	 export var _name = "SimpleClass"
		 **/
		register_property<SimpleClass, String>("name", &SimpleClass::_name, String("SimpleClass"));

		/** Alternatively, with getter and setter methods: */
		register_property<SimpleClass, int>("value", &SimpleClass::set_value, &SimpleClass::get_value, 0);

		/** Registering a signal: **/
		register_signal<SimpleClass>("signal_name0"); // windows: error C2668: 'godot::register_signal': ambiguous call to overloaded function
		register_signal<SimpleClass>("signal_name1", "string_argument", GODOT_VARIANT_TYPE_STRING);
	}

	String _name;
	int _value;

	void set_value(int p_value) {
		_value = p_value;
	}

	int get_value() const {
		return _value;
	}
};

/** GDNative Initialize **/
extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o) {
	godot::Godot::gdnative_init(o);
}

/** GDNative Terminate **/
extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o) {
	godot::Godot::gdnative_terminate(o);
}

/** NativeScript Initialize **/
extern "C" void GDN_EXPORT godot_nativescript_init(void *handle) {
	godot::Godot::nativescript_init(handle);

	godot::register_class<SimpleClass>();

	/* I can register multiple classes but can only call one*/

	godot::register_class<Monero>();
}


#endif