/*
 * 1. (3) Write a function that creates a single dimensional array of int values, 
 * asks the user to input values to fill it, then prints the sum of the values to the user.
 * (be sure to verify that the values entered are integers and to search for or ask about how to clear errors from the cin stream if needed)
 * (you may decide how large the array is)
 * File must be called: arrayFun.cpp
 */

// credit to Bucky
// https://www.youtube.com/watch?v=TzIL4cb23GA

#include <iostream>
#include <string>
using namespace std;

// verify that the values entered are integers
// search for or ask about how to clear errors from the cin stream if needed


// creates a single dimensional array of int values
int createArray(int array1[], int number);

//prints the sum of the values to the user
void printArray(int array1[], int number);

int main()
{
    int someArray[5] = {};
    createArray(someArray, 5);
    printArray(someArray,5);
    return 0; 
}

int createArray(int array1[], int number)
{
    int input;
    int i;
    for(i=0; i < number; i++)
    {
        cout << "Please input values to fill my Array" << (i+1) << endl;
        cin >> input;
        array1[i] = input;
    }
    return i;
}


void printArray(int array1[], int number)
{
    for(int i=0; i<number; i++)
    {
        cout << "the value of item " << (i+1) << " is " << array1[i] << endl;
    }
}
