/*
1. (4) Write a simple function that accepts two strings and returns whether they have the same contents with the use of a loop to check each character individually.
File must be called: retFun.cpp
(hint: you can compare individual characters with the <, ==, and > operators)
(hint: reusing code you have written may be a good idea... are there any challenges or easy mistakes you could make in doing this?)

1. When you call getString() it can not have any parameters in it because the parameters are what you are asking the user for.

2. At this time, you can only return one variable at a time from a function (you will learn how to return more data later) so you can only ask for one variable, return that    variable and then do something with it before you can ask for another variable from the user.

3. When you call a function that will be returning something, you need to have a container to put the return value in. i.e returnValue = getString();

4. When you have a function that returns something, you must have a return statement that returns the variable. i.e. return stringA;

My suggestion is to take out srtingB at this time and work on just getting one input from the user, returning it from the function, and then passing that variable to the       output function

Also, you are not returning anything from your output function so it should be void not string.
*/

#include <iostream>
#include <string>
using namespace std;

//getString(string); // Prototype

int main() {
    cout << "We are comparing Strings\n";

    //string returnValue;
    returnValue = getString();
    cout << returnValue;

    return 0;
}

void getString(string s)
{
    string s;
    cout << "Please enter a String\n";
    string string1;
    cin  >> string1;

    //cout << "Please enter another String\n";
    //string string2;
    //cin  >> string2;

    //if(string1 == string2) {
    //   cout << string1 << " and " << string2 << " are equal" << endl; 
   // }
}
*/
