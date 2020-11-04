#include "Bus.h"
#include <string>
using namespace std::literals;
Bus::Bus() {
}

int Bus::setSystemReferences(Patator* renderer) {
	if (renderer != nullptr)
		this->renderer = renderer;
	else
		return -1;
	return 0;
}

void Bus::setDeltaTime(std::chrono::duration<double> deltaTime) {
	this->debugger->printLine(std::to_string(deltaTime/1s));
}