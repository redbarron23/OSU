/*
 * CS161
 * author: James Hourihane
 * program name: personClass.cpp
 * desc: "Create a class with getter and setter and access values via dot notation" 
 */
#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

const int NAMELEN = 20;     // Max name length

class person
{
public:
    // data member - name of this person
    char name[NAMELEN+1];
    // data member - age of this person
    int age;
    
    // constructor
    person();
     
    // Member function that increments the age of this
    // person
    void having_birthday();

private:
    
};

// A function that creates a new person object after reading
// class field values from the console
person new_person()
{
    person aPerson;
    char readname[NAMELEN+1];
    int age;
    // Read name
    cout << "Enter the new person's name: ";  
    cin.get (readname, NAMELEN+1);
    // Read age
    cout << "Enter the age of " << readname << ": ";
    cin >> age;
    
    // set the field values of the person object
    strcpy(aPerson.name,readname);
    aPerson.age = age;
    
    return aPerson;
}

person::person ( void )
{
    cout << "Object is being created." << endl;
}

void person::having_birthday()
{
    age += 1;  // parameter incremented
}

int main()
{
    // Celebrating a brithday
    person birthday_person = new_person();   

    // call birthday on the person object
    birthday_person.having_birthday();

    cout << "Happy birthday! " << birthday_person.name << " You are: " << birthday_person.age << endl;
    return(0);
}


