/*
 * name:  James Hourihane
 * date:  08/03/2014
 * class: CS 161
 * desc:  create an array of grades and print out a histogoram based on grades
 * file:  grades.cpp
 */

#include <iostream>
using namespace std;

const int SIZE_OF_ARRAY=6;

int createArray(int array1[], int number);
void printHisto(int array1[], int number);

int main()
{
   int someArray[SIZE_OF_ARRAY] = {};

   createArray(someArray, 5);
   printHisto(someArray,5);

   return 0; 
}

int createArray(int array1[], int number)
{
    int input;
    int i;
    for(i=0; i < number + 1; i++)
    {
        cout << "Please input grades" << (i+1) << endl;
        cin >> input;
        array1[i] = input;
    }

    return i;
}


void printHisto(int array1[], int sizeOfArray)
{
    cout << endl;

    for (int i=1; i < sizeOfArray + 1; i++)
    {
        //cout << i << endl;
        if (i < 1)
            cout << "" << endl;
        if (i == 1)
            cout << "*" << endl;
        if (i == 2)
            cout << "**" << endl;
        if (i == 3)
            cout << "***" << endl;
        if (i == 4)
            cout << "****" << endl;
        if (i == 5)
            cout << "*****" << endl;
    }
}
