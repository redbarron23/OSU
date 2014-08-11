/*
 * author: James Hourihane
 * class:  CS161
 * program pointerFun.cpp
 * Desc:   to print out pointer values and addresses from function with cin
 * OSU ID is: 932509127
*/

#include <iostream>
using namespace std;

void myFunction();
int main()
{
    myFunction();

}

void myFunction()
{
    int x, *p;   // declare pointer p
    p = new int; // new operator creates a new dynamic variable of a specified type and returns a pointer
    cout << "Please enter a value for x: ";
    cin >> x;
    cout << "Value of 'x' is: " << x << endl;  //print out value of cin nothing new here

    *p = x;  // assign x's value to *p
    //cout << "'p' value is: " << p << endl;  // why does this work?
    //cout << "p asterik value is: " << p* << endl;  // dereference *p  should print x's value
    cout << p << endl; // prints some hex number
    cout << *p << endl; // dereferences it

    cout << &p << endl;  // print address of *p  
                        // I noted this is unique everytime I run this

    //delete p; // deallocate memory

}

/*
 * Please enter a value for x: 3
 * Value of 'x' is: 3
 * 0xf0a010
 * 3
 * 0x7fff7d245540
 */
