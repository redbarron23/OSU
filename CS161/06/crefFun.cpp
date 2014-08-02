/*
 * 2. (3) Write a function that accepts two references to c-style strings and returns whether they have the same values,
 * File must be called: crefFun.cpp
 * Discussion idea: how is a c-style string different than an array of characters?
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
