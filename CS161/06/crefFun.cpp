/*
 * name:  James Hourihane
 * date:  08/03/2014
 * class: CS 161
 * desc:  Create a function that accepts two references to c-style strings 
 *        and returns if they have same value
 * file: crefFun.cpp
 */
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 10;

void compareArrays(char array1[], int sizeOfArray1, char array2[], int sizeOfArray2);

int main()
{
    char myMessage[20] = "Hi there";
    char myMessage2[20] = "Goodbye";
    compareArrays(myMessage,7, myMessage2,6);
}

void compareArrays(char array1[], int sizeOfArray1, char array2[], int sizeOfArray2)
{
    if (strcmp(array1, array2) < 0)
        cout << array1 << " string comes 1st." << endl;

    if (strcmp(array1, array2) == 0)
       cout << "strings are equal." << endl;

    if (strcmp(array1, array2) > 0)
       cout << array2 << " string comes 1st." << endl;
}
