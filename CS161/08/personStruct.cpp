/*
 * Author: james Hourihane
 * class: CS 161
 * program name: personStruct.cpp
 * Desc: get name and age from cin and store in struct and return members from struct
*/

#include <iostream>
using namespace std;

const int NAMELEN = 20;     // Max name length

// person struct with name and age
// initially worried about overflow but name shouldn't go over 20 chars
struct person {     
    //char name[NAMELEN+1];     // Name
    char name[NAMELEN];
    int  age;       // Age
};

// Create another person
// note this is not a function
// cin and cout from init ` 
person new_person ( )
{
    person my_person;       // New person

    cout << "Enter the new person's name: ";
    cin.get (my_person.name, NAMELEN+1);  // Read name

    cout << "Enter the age of " << my_person.name << ": ";
    cin >> my_person.age;
    return(my_person);
}


int main ( )
{
    // initially concerned if my_person.member would conflict with my_person structure tag
    // but it looks like it is possible
    //person who = new_person();  // Get person's info
    person my_person = new_person();  // Get person's info

    //cout << "You have entered: " << who.name << " Age: " << who.age << endl;
    cout << "You have entered: " << my_person.name << " Age: " << my_person.age << endl;
    return(0);
}


