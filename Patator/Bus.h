#pragma once
#include <chrono>
#include "Debugger.h"

class Patator; //Forward dependency

/// <summary>
/// This class will serve as a message carrier between all classes that need to interact with each-other
/// A class needs to get messages by this Bus
/// </summary>
class Bus{
public:
	Bus();
	void setDeltaTime(std::chrono::duration<double> deltaTime);
	int setSystemReferences(Patator* renderer);

private:
	Patator* renderer;
	Debugger* debugger;
};
