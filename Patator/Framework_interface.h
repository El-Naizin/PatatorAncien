#pragma once
#include "Bus.h"
/// This is where i will put all the helper functions that will be usefull to manipulate the framework

/// <summary>
/// This helper function initialises the whole framework
/// </summary>
/// <param name="windowWidth">The target width of the window</param>
/// <param name="windowHeight">The target height of the window</param>
/// <returns>A pointer to the Bus the game logic will have to comunicate with, or nullptr if this function failed</returns>
Bus* initializeFramework(int windowWidth, int windowHeight);
