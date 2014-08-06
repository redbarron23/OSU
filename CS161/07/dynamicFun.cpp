/*
(3) Write a function that creates an array of int values dynamically (with the new keyword), asks the user to input values to fill it, then prints the largest and smallest values stored in the array (you can keep track of this information while getting input from the user if you would like),
File must be called: dynamicFun.cpp
(be sure to verify that the values entered are integers and remember to search for or ask about how to clear errors from the input stream if needed)
(you may decide how large the array is)
*/

// https://www.youtube.com/watch?v=7WSzTTu207c
#include <iostream>
using namespace std;

void fillAndPrintIntegers();

int main()
{
    fillAndPrintIntegers();
    return 0;
}

void fillAndPrintIntegers()
{
    int* integers;
    int numberofIntegers;

    cout << "How many integers do you want me to remember?" << endl;
    cin >> numberofIntegers;

    integers = new int[numberofIntegers];

    for (int i=0; i<numberofIntegers;i++)
    {
        cout << "Please give me the integer to input" << i+1 <<":";
        // need validation here to make sure it is only a digit
        cin >> integers[i];
    }

    cout << "The integers I got were as follows: " << endl;

    // need to sort first before printing
    for(int i=0; i<numberofIntegers;i++)
    {
        cout << integers[i] << " ";
    }

    cout << endl;
}
