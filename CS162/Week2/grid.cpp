#include "grid.h"

Grid::Grid(){

}

// Copy constructor 
Grid::Grid(const Grid& otherGrid){
    for(int i=0; i < GRID_SIZE; i++){
        for(int j=0; j < GRID_SIZE; j++){
            grid[i][j] = otherGrid.grid[i][j];
        }
    }
}


bool Grid::getValueAt(int x, int y){
	return grid[x][y];
}

void Grid::setValueAt(int x, int y, bool value){
	grid[x][y] = value;
}

std::vector<bool> Grid::getNeighbors(int x, int y){
	std::vector<bool> neighbors;
	for(int c = -1; c < 2; c++){
        for(int d = -1; d < 2; d++){
            if(!(c == 0 && d == 0)){
                neighbors.push_back(grid[x+c][y+d]);
            }
        }
    }
	return neighbors;
}

int Grid::size(){
    return GRID_SIZE;
}
