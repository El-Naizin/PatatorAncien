#include "Patator.h"
#include "Game.h"

int main() {
	// Steps we should do to start the game
	// 1 - initialize the classes
	// 2 - Put correct values when initializing the classes
	// 3 - start the gameloop
	Game* game = new Game();
	game->start();
	return 0;
}
