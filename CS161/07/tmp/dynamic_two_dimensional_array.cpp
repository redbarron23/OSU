// https://www.youtube.com/watch?v=0BX5heUj0FI
#include <iostream>
#include <iomanip>
using namespace std;

void fill(int**, int, int);   //int **board, rows, columns;
void print(int**, int, int);   //int **board, rows, columns;


int main()
{
    /* 
    // 2 dimensional array but not truly dynamic
    int *board[4];  //array of 4 pointer of type int   0, 1, 2, 3 pointers will create rows
    for(int row=0; row < 4; row++) // 4x6 4 rows and 6 columns
        board[row] = new int[6];  // creates an array of 6 type components 
                                  // and returns the base address of the array
                                 

    int **board;
    board = new int* [10];  // an array of 10 pointers of type int
    for (int row=0; row < 10; row++) // create columsn of the board
        board[row] = new int[15];
        */

    int **board, rows, columns;  // array of integers and and two int variables
    cout << "Enter the number of rows: " << endl; 
    cin >> rows; 
    cout << "Enter the number columns: " << endl;
    cin >> columns;
    cout << endl;

    board = new int* [rows]; // create rows of board
    for (int row = 0; row < rows; row++)
        board[row] = new int[columns]; // create columns of board

    fill(board, rows, columns);  // input elements into boards
    cout << endl;
    print(board, rows, columns); // output elements of board
    //system("PAUSE");
    return 0;

}

void fill(int **p, int rowSize, int colSize)
{
    for(int row=0; row < rowSize; row++)
    {
        // prompt user for col and row size
        cout << "Enter " << colSize << " numbers for row number " << row << ": " << endl;
        for(int col=0; col < colSize; col++)
            cin >> p[row][col];
        cout << endl;
    }
}

void print(int **p, int rowSize, int colSize)
{
    for(int row=0; row < rowSize; row++)
    {
        for(int col=0; col < colSize; col++)
            cout << setw(5) << p[row][col];
        cout << endl;
    }
}
