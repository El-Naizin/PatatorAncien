#pragma once

class Bus;

/// <summary>
/// This class is the renderer, it will process all the objects and display them to the screen
/// It has a reference to the Bus so that it can get the location of moving objects that moved
/// Maybe i'll work out a way to d this without the bus, (and i probably should) but i won't get into it
/// just yet
/// </summary>
class Patator{
public: 
	Patator(int width, int height, Bus* bus);

private:
	Bus* bus; // The bus is needed to receive and post messages from/to other parts of the framework
};








