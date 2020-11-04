#ifndef NDEBUG
#include "Debugger.h"

void Debugger::handleMessage(Message* message) {
	switch (message->mType) {
	case MessageType::INPUT: 
		{
			char* contents = (char*)message->content;
			this->debugOutput << contents[0] << std::endl;
		}
		break;
	case MessageType::TIME_STEP:
		break;
	case MessageType::DEBUG:
		{
			std::string* contents = (std::string*)message->content;
			this->debugOutput << contents << std::endl;
		}
		break;
	case MessageType::ERROR:
		//TODO: ERROR MANAGEMENT
		break;
	default:
		this->debugOutput<< "Debugger does not support message of type:" << message->mType << std::endl;
		break;
	}
}

Debugger::Debugger(Bus* bus) {
	this->debugOutput.open("logs.txt");
	this->bus = bus;
}
#endif