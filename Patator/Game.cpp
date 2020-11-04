#include "Game.h"
#include <chrono>
using namespace std::literals;
using Clock = std::chrono::steady_clock;
using Duration = std::chrono::duration<double>;
using TimePoint = std::chrono::time_point<Clock, Duration>;
constexpr auto TIME_STEP = 1.0s / 60.;

Game::Game() {
	this->bus = initializeFramework(1024, 576);
}

void Game::start() {
	bool stop = false;
	TimePoint currentTime = Clock::now();
	TimePoint newTime;
	while (!stop) {
		newTime = Clock::now();
		while (newTime - currentTime < TIME_STEP) {
			newTime = Clock::now();
		}
		this->bus->setDeltaTime(newTime - currentTime);
		currentTime = newTime;
	}
}