/*
 * name:  James Hourihane
 * date:  08/03/2014
 * class: CS 161
 * desc:  Create an array from cin and print out array after completion of input
 * file:  arrayFun.cpp
 *
 * credit to Bucky
 * https://www.youtube.com/watch?v=TzIL4cb23GA
 */


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
       
        // maybe add a function and pass input
        /*
        if (isdigit((input)))
        {
            cout << "must be an integer [0-99]" << endl;
        }
        else if (ispunct((input)))
        {
            cout << "must be an integer [0-99]" << endl;
        }
        else if (isspace((input)))
        {
            cout << "must be an integer [0-99]" << endl;
        }
        else
        {
            array1[i] = input;
        }  
        */

            array1[i] = input;

        //cin.clear();
        //fflush(stdin);

    }
    return i;
}


void printArray(int array1[], int number)
{
    int sum = 0;
    for(int i=0; i<number; i++)
    {
        //cout << "the value of item " << (i+1) << " is " << array1[i] << endl;
        sum = sum + i;
    }
    // sum is defintely off  
    cout << sum << endl;
}
