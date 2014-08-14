/*
 * Author: james Hourihane
 * class: CS 161
 * program name: personStruct.cpp
 * Desc:
 */

/*
 * 1. (2) Create a struct called person,
a. Give the person struct member variables called name (of type char array, size 20 should be long enough)
and age (of type int),

b. create a function: person new_person() that creates an instance of that struct, asks the user for values 
to assign to that struct's member values, and returns that struct
(Note: you can access struct member variables with the struct variable's name followed by a dot followed 
by the member variable you are trying to access. For example: if you have a person struct variable called
my_person, then you can access its variables with my_person.name or my_person.age)
(Also note: this also means that I could access individual characters in the name with 
my_person.name[3])

Discuss: Read the following and then draw a picture of this, you should read all of it before beginning or 
expect to work on more than one drawing when working on more complex files
Show the whole source file as a big box with the source file name at the top,
Show the functions of the file as smaller boxes inside the source file box with their names at the top,
Show the struct definition as a box similar to the function boxes but make it obvious it is not a 
function itself,
Show any variables (name and expected type) that exist in the functions and struct,
This shows the aspects of the code that are available in this file.
Now make a separate drawing that shows the rough flow through your program.
Start with the program being started (being a large box),
which initially executes the main function (a smaller box inside the large box with a line coming in
from outside the program box),
which then creates variables (a small box inside the main in two parts, one being the 
identifier, and the other being the value it holds),
executes other functions (a function name in the main box with a line to another box outside 
the main but inside the program box)
which create local variables, execute other functions that leave and return, and 
eventually returns (a line going back to where it was called from)
and eventually returns (a line heading back out of the program box)
*/


#include <iostream>
using namespace std;

struct person 
{
    char name[20];
    int age;
};

/*
b. create a function: person new_person() that creates an instance of that struct, asks the user for values
to assign to that struct's member values, and returns that struct
(Note: you can access struct member variables with the struct variable's name followed by a dot followed
by the member variable you are trying to access. For example: if you have a person struct variable called
my_person, then you can access its variables with my_person.name or my_person.age)
(Also note: this also means that I could access individual characters in the name with
my_person.name[3])
*/

// prototype, note the pass by reference
void set_person(person &p, char name, int age);
void print_person(person &p);

int main()
{
    // first person
    person my_name;

    // pass in structure here
    set_person(my_name, "Barack Obama", 55);
   
    // output person1 from print function
    print_person(my_name);

    return 0;
}



void set_person(person &p, char name, int age)
{
    p.name = name;
    p.age = age;
}

void print_person(person &p)
{
    cout << "person's name: " << p.name << endl;
    cout << "person's age: " << p.age << endl;
}
