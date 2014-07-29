/*
 * 1. (3) Write a function that creates a single dimensional array of int values, 
 * asks the user to input values to fill it, then prints the sum of the values to the user.
 * (be sure to verify that the values entered are integers and to search for or ask about how to clear errors from the cin stream if needed)
 * (you may decide how large the array is)
 * File must be called: arrayFun.cpp
 */

#include <iostream>
using namespace std;
#include <string>

int main()
{
    string narray;
    cout << "Please enter a sequence of values: ";
    getline (cin, narray);
    cout << narray;
    // assign int values to an array from string?

   //cout << "Hello" << endl;
   return 0; 
}
