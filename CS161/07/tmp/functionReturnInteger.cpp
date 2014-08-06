/*
(4) Write a function to create a variable of some data type (say an int or a string), create a pointer that points to that variable, ask the user for a value to assign to that variable,
File must be called: pointerFun.cpp
(Note: you can access the value of a variable directly (example to print it: cout << var_name), as you have in the past)
(Note: you can access the address of a variable with the reference operator (example to print it: cout << &var_name))
(Note: you can access a pointer's value by accessing it directly (example to print it: cout << pointer_var)) (Note: you can access the value of the “pointee” by dereferencing a pointer (example to print it: cout << *pointer_var))
*/

#include <iostream>
using namespace std;

int functionIntParameter();
int main()
{
    functionIntParameter();
    //return 0;
}


int functionIntParameter()
{
    int x;
    cout << "Please enter a value for x:";
    cin >> x;
    cout << x << endl;
    return x;
}
