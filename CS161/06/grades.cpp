/*
 * Generate a text based histogram for a quiz given to a class of students. The quiz is
 * graded on a scale from 0 to 5. Write a program that allows the user to enter grades
 * for each student. As the grades are being entered, the program should count, using an array
 * the number of 0's, the number of 1's the number of 2's the number of 3's the number of 4's and the number
 * of 5's The program should be capable of handling an arbitray number of student grades.
 *
 * You can do this by making an array of size 6, where each array element is initialized to zero.
 * Whenever a one is entered, increment the value in the array at index 1, adn so on, up to to index 5 of the array
 *
 * 3. (4) Programming Project 5.7 from Absolute C++ (p233 in the 5e book)
 * (Histogram of grades)
 * File must be called: grades.cpp
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
    for(i=0; i < number; i++)
    {
        cout << "Please input grades" << (i+1) << endl;
        cin >> input;
        array1[i] = input;
    }

    return i;
}


void printHisto(int array1[], int sizeOfArray)
{
    for (int i=1; i < sizeOfArray + 1; i++)
    {
        //cout << i << endl;
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
