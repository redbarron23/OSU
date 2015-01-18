// grid.h
// This file contains the implementation of the grid as a Grid class and setter/getter methods
// for cell values.

#ifndef JH_FUNCTION_GRID
#define JH_FUNCTION_GRID

#define GRID_SIZE 80

#include <iostream>
#include <vector>

class Grid{
public:
	// class constructor
	Grid();

	// copy constructor
	//Grid(const Grid otherGrid);
	Grid(const Grid& otherGrid);

	// get the value of the grid at cell position (x,y)
	bool getValueAt(int x, int y);

	// set the value of grid at cell position (x,y)
	void setValueAt(int x, int y, bool value);

	// get values of all noor neighbors of cell at position (x,y)
	std::vector<bool> getNeighbors(int x, int y);

	// return the size of the grid
	int size();

private:
	// cells of the grid as a 2 d array of boolean
	bool grid[GRID_SIZE][GRID_SIZE];
};

#endif
