/*
 * Author: james Hourihane
 * class: CS 161
 * program name: personClass.cpp
 * Desc: create object, cin user input and retrieve objects from class using dot notation
 */

#include <iostream>
#include <string>
using namespace std;

const int NAMELEN = 20;     // Max name length

class person
{
    public:
        char name[NAMELEN];
        int age;
        void having_birthday();
        person();
}; // don't forget the semicolon

person::person(void)
{
   cout << "Object is being created" << endl;
}

void person::having_birthday()
{
    //person birthday_person; // create object birthday_person from person class

    //cout << "Enter the new person's name: ";
    //cin.get (having_birthday.name, NAMELEN+1);  // Read name

    //cout << "Enter the age of " << having_birthday.name<< ": ";
    //cin >> birthday_person.age;
    age +=1;  // parameter incremented

}

int main()
{
    person birthday_person; // create object birthday_person from person class

    cout << "Enter the new person's name: ";
    //cin.get (birthday_person.name, NAMELEN+1);  // Read name
    cin.get (birthday_person.name, NAMELEN+1);  // Read name

    //cout << "Enter the age of " << having_birthday.name<< ": ";
    cout << "Enter the age of " << birthday_person.name<< ": ";
    cin >> birthday_person.age;

    birthday_person.having_birthday();

    cout << "Happy birthday! " << birthday_person.name << " You are: " << birthday_person.age << endl;

    return(0);

}



