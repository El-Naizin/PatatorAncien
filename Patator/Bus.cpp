#include "Bus.h"
#include <string>
#include "Input.h"

Bus::Bus() {
	this->input = nullptr;
	this->renderer = nullptr;
#ifndef NDEBUG
	this->debugger = nullptr;
#endif
}

#ifndef NDEBUG
int Bus::setSystemReferences(Patator* renderer, Input* input, Debugger* debugger) {
	if (renderer != nullptr && input != nullptr && debugger != nullptr) {
		this->renderer = renderer;
		this->input = input;
		this->debugger = debugger;
	}
	else
		return -1;
	return 0;
}
#else
int Bus::setSystemReferences(Patator* renderer, Input* input) {
	if (renderer != nullptr && input != nullptr) {
		this->renderer = renderer;
		this->input = input;
	}
	else
		return -1;
	return 0;
}
#endif

void Bus::sendMessage(Message* message) {
	switch (message->mType) {
	case MessageType::INPUT:
		break;
	case MessageType::TIME_STEP:
		this->advanceSimulation(message);
		break;
	}
#ifndef NDEBUG
	debugger->handleMessage(message);
#endif
}

void Bus::advanceSimulation(Message* message) {
	this->input->handleMessage(message);
}
