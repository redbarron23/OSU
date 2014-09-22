/*
 * author: James Hourihane
 * class:  CS161
 * Desc:   Create a dynamic tic-tac-doe using dynamic  arrays
 * OSU ID is: 932509127
 * Note I borrowed heavily from Kathy Allen  this is all her work except for the dynamic array
 * dynamic array
 * for the dynamic array I borrowed this // https://www.youtube.com/watch?v=0BX5heUj0FI
*/

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <iomanip>

using namespace std;

//char box[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };


// prototype
int winner();
void board();
void fill(char**, int, int);   //int **board, rows, columns;
void print(char**, int, int);   //int **board, rows, columns;


int main()
{
    int player = 1, i, choice;
    
    char mark;

    /*
    char box = new char*i[3];
    for (int i=0; i< 3; i++)
    {
        box[i] = new char[4];
    }
    */

    /* one dimensional started but going with two dimension
    int *box;       // create pointer
    box = new int[9]; // do a new on  dynamic array

    box[0] = 1;
    box[1] = 2;
    box[2] = 3;
    box[3] = 4;
    box[4] = 5;
    box[5] = 6;
    box[6] = 7;
    box[7] = 8;
    box[8] = 9;
    */

    // trying two dimensional now
    char **box; 
    int rows=3, columns=3;
    box = new char* [rows]; // create rows for box
    for (int row = 0; row < rows; row++)
        box[row] = new char[columns]; // create columns for box

    // maybe don't need to put default values
    //fill(box, rows, columns);  // input elements into box
    print(box, rows, columns); // output elements of box 

    do
    {
        board();
        player = (player % 2) ? 1 : 2;  //prevents infinite loop and alternates turns 

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;
        
                if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Please enter whole numbers only!" << endl;
            cin >> choice;
        }

        mark = (player == 1) ? 'X' : 'O';  //tells program to mark x's or o's

        /*
         *  [0,0] [0,1] [0,2]
         *  [1,0] [1,1] [1,2]
         *  [2,0] [2,1] [2,2]
         */

        // I need to figure how to cast from string to number and vice - versa
        if (choice == 1 && box[0][0] == '1')  //if the box number is selected it will mark the box
        {
            box[0][0] = mark;
        }
        else if (choice == 2 && box[0][1] == '2')
        {
            box[2] = mark;
        }
        else if (choice == 3 && box[0][2] == '3')
        {
            box[3] = mark;
        }
        else if (choice == 4 && box[1][0] == '4')
        {
            box[4] = mark;
        }
        else if (choice == 5 && box[1][1] == '5')
        {
            box[5] = mark;
        }
        else if (choice == 6 && box[1][2] == '6')
        {
            box[6] = mark;
        }
        else if (choice == 7 && box[2][0] == '7')
        {
            box[7] = mark;
        }
        else if (choice == 8 && box[2][1] == '8')
        {
            box[8] = mark;
        }
        else if (choice == 9 && box[2][2] == '9')
        {
            box[9] = mark;
        }
        else
        {
            cout << "That move has already been played";

            player--;
            cin.ignore();
            cin.get();
        }
        i = winner();

        player++;  //counts the turns
    } while (i == -1);  //declares winner.
    board();

    if (i == 1)
    {
        cout << "Player " << --player << " wins the game!";
    }
    else
    {
        cout << "You Tied!";
    }
    cin.ignore();
    cin.get();

    delete [] box;  // delete the array
    box = NULL;  //set Array to NULL so it won't point anywhere

    return 0;
}

int winner()  //tells pc what the winning combinations could be.
{
    if (box[1] == box[2] && box[2] == box[3])
    {
        return 1;
    }
    else if (box[4] == box[5] && box[5] == box[6])
    {
        return 1;
    }
    else if (box[7] == box[8] && box[8] == box[9])
    {
        return 1;
    }
    else if (box[1] == box[4] && box[4] == box[7])
    {
        return 1;
    }
    else if (box[2] == box[5] && box[5] == box[8])
    {
        return 1;
    }
    else if (box[3] == box[6] && box[6] == box[9])
    {
        return 1;
    }
    else if (box[1] == box[5] && box[5] == box[9])
    {
        return 1;
    }
    else if (box[3] == box[5] && box[5] == box[7])
    {
        return 1;
    }
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void fill(char **p, int rowSize, int colSize)
{
    for(int row=0; row < rowSize; row++)
    {
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


void board() //draws out playing board
{

    cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;
    cout << "     |     |     " << endl << endl;
}
