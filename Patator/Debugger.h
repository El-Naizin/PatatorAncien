#pragma once
#ifndef NDEBUG
#include "Message.h"
#include <fstream>

class Bus;

class Debugger
{
public:
	Debugger(Bus* bus);
	void handleMessage(Message* message);

private:
	std::ofstream debugOutput;
	Bus* bus;
};
#endif
