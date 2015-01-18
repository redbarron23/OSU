// main.cpp
// This is the main driver program to play the game of life
#include <iostream>
#include <unistd.h>
#include "game_of_life.h"


int main(int argc, char *argv[])
{

    for (int i = 0; i < argc; ++i) {
        //std::cout << argv[i] << std::endl;
        
    }

	// create an object of game of life
	GameOfLife game;

	// initialize the game with some random lives
	game.init();

	// play the game for ever
	while(true){
		// display the current state of the game
		game.Display();

		// update the grid with some rule
		game.LiveOrDie();

    sleep(2);
	}

    return 0;

}
