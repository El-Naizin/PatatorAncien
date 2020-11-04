#pragma once
#include "Message.h"

class Bus;

class Input {
public:
	Input(Bus* bus);
	void processInputs();
	void handleMessage(Message* message);
private:
	Bus* bus;
	int debugCounter = 0;
};
