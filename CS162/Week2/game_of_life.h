// game_of_life.h
// This file contains the implementation of the game of life as a GameOfLife class with methods
// for displaying the game grid to console and update the grid cell values as per some rule in each
// iteration of the game.

#ifndef JH_FUNCTION_GAMEOFLIFE
#define JH_FUNCTION_GAMEOFLIFE

#include "grid.h"
#include <cstdlib>  // for random number 


class GameOfLife{
public:
	// class constructor that initiialzes all grid cell values to false or dead
	GameOfLife();

	// populate the game grid with some lives
	void init();

	// Rule to update each grid cell value for life or death based on neighbors in a single 
	// iteration of the game
	void LiveOrDie();

	// display the grid cell values to console output
	void Display();
private:
	// the grid of the game
	Grid grid;
};

#endif
