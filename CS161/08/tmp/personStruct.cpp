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
*/


#include <iostream>
#include <cstring>
using namespace std;

struct person 
{
    char name[20];
    int age;
};

void person(new_person &p)
{
    strcpy(p.name, my_name);
    p.age = my_age;
}


int main()
{
    person my_person;

    cout << "Please enter a name: " << endl;
    cin >> my_name;
    cout << "Please enter their age: " << endl;
    cin >> my_age;

    person(my_person);

    cout << my_person.name << endl;
    cout << my_person.age << endl;

    return 0;
}
