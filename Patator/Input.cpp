#include "Input.h"
#include "Bus.h"
#include "Message_contents.h"

Input::Input(Bus* bus) {
	this->bus = bus;
}

//Processes user input
void Input::processInputs() {
	Message message{};
	message.content = new MessageInput();
	message.mType = MessageType::INPUT;
	((MessageInput*)message.content)->input = 'W';
	bus->sendMessage(&message);
}

//Debugging prototype of the function
void Input::handleMessage(Message* message) {
	switch (message->mType) {
	case MessageType::TIME_STEP:
		this->debugCounter++;
		if (this->debugCounter >= 60) {
			this->processInputs();
			this->debugCounter = 0;
		}
		break;
	default:
		//TODO: Send error message to Bus
		break;
	}
}