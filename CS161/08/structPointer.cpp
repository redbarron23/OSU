/*
 * Author: james Hourihane
 * class: CS 161
 * program name: structPointer.cpp
 * Desc: Create a person struct using pointers from stdin 
 */

#include <iostream>
#include <cstring>

using namespace std;

const int NAMELEN = 20;     // Max name length
//const int FRIENDS = 5;      // how many Friends we have

//typedef struct pers {     // short experiment with typedef 
struct person {     // Personal data
    char name[NAMELEN];     // Name
    int  age;       // Age
};

person new_person ( )
{
    person my_person;       // New person

    cout << "Enter the new person's name: ";
    cin.get (my_person.name, NAMELEN+1);  // Read name

    cout << "Enter the age of " << my_person.name << ": ";
    cin >> my_person.age;
    return(my_person);
}

/*
 * The address of my_person is assigned to the pointer *person_ptr
 * and then you can dereference the pointer with the arrow notation
 * i.e. ptr ->member
 */

int main ( )
{
    person my_person = new_person();  // Get person's info

    person *person_ptr=&my_person;
    cout << "Address of person is: " << person_ptr << endl;

    cout << "You have entered: " << person_ptr->name << " Age: " << person_ptr->age << endl << endl;

    return(0);
}

