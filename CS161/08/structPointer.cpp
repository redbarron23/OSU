/*
 * Author: james Hourihane
 * class: CS 161
 * program name: structPointer.cpp
 * Desc: Create a person struct using pointers from stdin 
 * and adding 5 other members as well for a total of 6 
 * print out all 6 memebers using pointer derefencing
 */

#include <iostream>
#include <cstring>

using namespace std;

const int NAMELEN = 20;     // Max name length
const int FRIENDS = 5;      // how many Friends we have

//typedef struct pers {     // short experiment with typedef 
struct person {     // Personal data
    char name[NAMELEN];     // Name
    int  age;       // Age
};

// Create another person and add someone from stdin
/*
 * also later we will use person struct via pointers
 * to add people into an array
 */
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
 * then arrayName friends is declared and has access to person struct 
 * members are then pushed on to the stack and are accessible via subscript of by a loop
 */

int main ( )
{
    person my_person = new_person();  // Get person's info

    person *person_ptr=&my_person;
    cout << "Address of person is: " << person_ptr << endl;

    cout << "You have entered: " << person_ptr->name << " Age: " << person_ptr->age << endl << endl;

    // array of the struct  called friends that containts arrays
    person friends[FRIENDS];
    // initializing the array with the folks at Bedrock
    strcpy (friends[0].name, "Fred"); friends[0].age = 45;
    strcpy (friends[1].name, "Barney"); friends[1].age = 42;
    strcpy (friends[2].name, "Wilma"); friends[2].age = 44;
    strcpy (friends[3].name, "Betty"); friends[3].age = 22;
    strcpy (friends[4].name, "Dino"); friends[4].age = 3;

    // print out the array of arrays
    for (int p = 0; p < FRIENDS; p++) {
        cout << "Your friend " << friends[p].name << " is " << friends[p].age << "." << endl;
    }
    return(0);
}

