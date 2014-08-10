/*
 * author: James Hourihane
 * class:  CS161
 * Desc:   Create a program with command line arguments
 * OSU ID is: 932509127
*/

/*
(5) Create one or more of the above programs to be command line arguments friendly
(take in values from the command line instead of asking for them as user input)
(Note: You really do want to know why we would want to use command line arguments, so do a brief search
and then discuss it on the discussion boards!)
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
void myFunction(char **argv);

int main(int argc, char* argv[])
                   // array of chars   argv[0] name of the command
{

    if(argc < 2) 
    {
        printf("You must provide one numeric argument\n");
        exit(1);
    }


    myFunction(argv);

    return 0;
}


void myFunction(char **argv)
{
    //int x, *p;   // declare pointer p
    // http://stackoverflow.com/questions/2797813/convert-c-argument-to-int
    int x = atoi(argv[1]);
    int *p;   // int pointer p
    p = new int; // new operator creates a new dynamic variable of a specified type and returns a pointer
    cout << "Value of 'x' is: " << argv[1] << endl;  //print out value of cin nothing new here

    *p = x;  // assign x's value to *p
    cout << p << endl; // prints some hex number
    cout << *p << endl; // dereferences it

    cout << &p << endl;  // print address of *p
                        // I noted this is unique everytime I run this

    //delete p; // deallocate memory

}
