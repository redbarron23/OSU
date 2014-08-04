/*
 * name:  James Hourihane
 * date:  08/03/2014
 * class: CS 161
 * desc:  create an array of X's and O's to simulate tic-tac-dae
 * file:  tictactoe.cpp
 */
#include <iostream>
using namespace std;

const int SIZE = 10;

void promptXandY(char array1[], int sizeOfArray);
void printBoard(char array1[], int sizeOfArray1);

int main()
{
    char tictacdoe[] ={1,2,3,4,5,6,7,8,9};
    int attempts = 0;
    while(attempts < 9)
    {
        attempts++;
        promptXandY(tictacdoe, 9);
        printBoard(tictacdoe, 9);
        cout << endl;
    }
    return 0;
}

void promptXandY(char array1[], int sizeOfArray)
{
    int x, y;
    cout << "User X please enter a number in corresponding space [1-9]";  
    cin  >> x;
    array1[x] = 'X';

    cout << "User O please enter a number in corresponding space[1-9]";  
    cin  >> y;
    array1[y] = 'O';
}

void printBoard(char array1[], int sizeOfArray1)
{
    
    for(int i = 0; i < 3 && array1[i] != '\0'; i++)
    {
            cout << array1[i];
    }
    //cout << endl;
    for(int i = 3; i < 7 && array1[i] != '\0'; i++)
    {
            cout << array1[i];
    }
    //cout << endl;
    for(int i = 4; i < 10 && array1[i] != '\0'; i++)
    {
            cout << array1[i];
    }
    //cout << endl;
    
/*
for(int i = 0; i < strlen(gameBoard); i++)
    {
        cout << gameBoard[i] << " ";
        if(i == 2)
        {
            cout << endl;
        }
        if(i == 5)
        {
            cout << endl;
        }
    }
*/

    /*
    cout << array[0] << " " << array[1] << " " << array1[2] << endl;
    cout << array[3] << " " << array[4] << " " << array1[5] << endl;
    cout << array[6] << " " << array[7] << " " << array1[8] << endl;
    */
}

