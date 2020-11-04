#pragma once
#ifndef GAME_INCLUDES
#define GAME_INCLUDES
#include "Framework_interface.h"
#endif

class Game {
public:
	Game();
	void start();// Starts the gameLoop

private:
	Bus* bus;
};
