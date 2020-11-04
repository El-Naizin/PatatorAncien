#include "Framework_interface.h"
#include "Patator.h"

Bus* initializeFramework(int windowWidth, int windowHeight) {
	Bus* bus = new Bus();
	Patator* renderer = new Patator(windowWidth, windowHeight, bus);
	if (bus->setSystemReferences(renderer) == 0)
		return bus;
	else
		return nullptr;
}
