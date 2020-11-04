#pragma once
#include <chrono>
#include "Debugger.h"
#include "Message.h"
#include <chrono>
using namespace std::literals;
using Clock = std::chrono::steady_clock;
using Duration = std::chrono::duration<double>;
using TimePoint = std::chrono::time_point<Clock, Duration>;

class Input;//Forward dependency for input
class Patator; //renderer

/// <summary>
/// This class will serve as a message carrier between all classes that need to interact with each-other
/// A class needs to get messages by this Bus
/// </summary>
class Bus{
public:
	Bus();
#ifndef NDEBUG
	int setSystemReferences(Patator* renderer, Input* input, Debugger* debugger);
#else
	int setSystemReferences(Patator* renderer, Input* input);
#endif
	void sendMessage(Message* message);

private:
	Patator* renderer;
	Input* input;
#ifndef NDEBUG
	Debugger* debugger;
#endif
	TimePoint currentTime;

	//Private helper functions:
	void advanceSimulation(Message* message);
};
