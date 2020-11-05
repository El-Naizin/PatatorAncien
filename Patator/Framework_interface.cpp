#include "Framework_interface.h"
#include "Patator.h"
#include "Input.h"
#include <string>

Bus* initializeFramework(int windowWidth, int windowHeight) {
	Bus* bus = new Bus();
	Patator* renderer = new Patator(windowWidth, windowHeight, bus);
	Input* input = new Input(bus);
#ifndef NDEBUG
	Debugger* debugger = new Debugger(bus);
	if (bus->setSystemReferences(renderer, input, debugger) == 0)
		return bus;
#else
	if (bus->setSystemReferences(renderer, input) == 0)
		return bus;
#endif
	else {
		Message* message = new Message();
		message->mType = MessageType::DEBUG;
		message->content = nullptr;
		std::string contents = "At initializeFramework, couldn't initialize all systems";
		bus->sendMessage(message);
		return nullptr;
	}
}
