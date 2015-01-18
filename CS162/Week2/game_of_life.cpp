#include "game_of_life.h"

GameOfLife::GameOfLife(){
	// initialize all the cell values to false
	for(int i=0; i < GRID_SIZE; i++){
		for(int j=0; j < GRID_SIZE; j++){
			grid.setValueAt(i,j,false);
		}
	}
}

void GameOfLife::init(){
	// get the size of the grid which is size X size
	int size = grid.size();

	// loop to access each grid cells
	for(int i=0; i < size; i++){
		for(int j=0; j < size; j++){
			// create a random number in the range [0,size]
			int val = (rand() % size);
			// we give a life to cell at (i,j) if val is even
			if(val % 2 == 0){
				grid.setValueAt(i,j,true);
			}
		}
	}
}


void GameOfLife::LiveOrDie(){
	// make a copy of current grid
	Grid copy(grid);

	// update lives in the cells on the copy for next generation
	for(int i = 1; i < grid.size(); i++){
        for(int j = 1; j < grid.size(); j++){
            int life = 0;   // count of live neighbors for cell at (i,j)
	        for(int c = -1; c < 2; c++){
	            for(int d = -1; d < 2; d++){
	                if(!(c == 0 && d == 0)){
	                    if(copy.getValueAt(i+c,j+d)) {++life;}
	                }
	            }
	        }
	        // apply the rules on current cell at position (i,j)
	        if(life < 2) {grid.setValueAt(i,j,false);}
	        else if(life == 3){grid.setValueAt(i,j,true);}
	        else if(life > 3){grid.setValueAt(i,j,false);}
        }
    }
}

void GameOfLife::Display(){
	// loop over all the grid cells
	for(int i=0; i < GRID_SIZE; i++){
		for(int j=0; j < GRID_SIZE; j++){
			if(grid.getValueAt(i,j)){  // print * if cell at (i,j) is true/live
				std::cout << "* ";
			}else{                     // print a space if cell at (i,j) is false/dead
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}
}

