#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

const int NAMELEN = 20;     // Max name length

class person
{
public:
    person(); // default constructor
    person(string n, int a); // constructor with arguments

    string  get_name(void);
    int  get_age(void);
    void set_name(string n);
    void set_age(int a);
    void having_birthday();

private:
    string name;
    int age;
};

person::person()
{

}

person::person (string n, int a)
{
    cout << "Object is being created." << endl;
    //strcpy(name,n);
    name = n;
    age = a;
}

void person::having_birthday()
{
    age += 1;  // parameter incremented
}

string person::get_name ( void )
{
    return name;
}

int person::get_age()
{
    return age;
}

void person::set_name(string n)
{
    //strcpy(name,n);
    name = n;
}

void person::set_age(int a)
{
    age = a;
}

int main()
{
    char readname[NAMELEN+1]; // Values read
    int  age;
    cout << "Enter the new person's name: ";
    cin.get (readname, NAMELEN+1);  // Read name
    cout << "Enter the age of " << readname << ": ";
    cin >> age;

    // create a variable to store person object
    cout << "creating person object variable Person with name " << readname << " and age " << age << "..." << endl;
    person birthday_person(readname,age);   // Celebrating a brithday

    // declare a pointer variable
    cout << "declaring a pointer variable person_ptr pointing to Person..." << endl;
    person* person_ptr = &birthday_person;

    // print the pointer variable (should display address)
    cout << "cout person_ptr = " << person_ptr << endl;

  // access the person object members through pointer
    cout << endl << "accessing Person members through pointer person_ptr..." << endl;
    cout << "Person.name = " << person_ptr->get_name() << endl;
    cout << "Person.age = " << person_ptr->get_age() << endl;
    person_ptr->having_birthday();
    cout << "Happy birthday! " << person_ptr->get_name() << " You are: " << person_ptr->get_age() << endl;

    // create an array of person objects
    cout << endl << "declaring an array of person objects as friends[5]..." << endl;
    person friends[5];

    // fill in the member values of all objects in the array
    const char* names[] = {"John","George", "Sheila","Walter","Mary"};
    int ages[] = {50,59,36,75,40};
    cout << "filling member data values to array objects of friends[5]..." << endl;
    for(int i=0; i < 5; i++)
    {
        friends[i].set_name((char*)names[i]);
        friends[i].set_age(ages[i]);
    }


        // create an array of pointers to person objects
    cout << endl << "creating array of pointers friends_ptr[5] pointing to objects in friends[5]..." << endl;
    person* friends_ptr[5];
    for(int i=0; i < 5; i++)
    {
        friends_ptr[i] = &friends[i];
    }

    // access members of all objects in array of pointers
    cout << endl << "accessing members of all objects in pointer array..."<<endl;
    for(int i=0; i < 5; i++)
    {
        cout << "name = " << friends_ptr[i]->get_name() << endl;
        cout << "age = " << friends_ptr[i]->get_age() << endl;
        cout << endl;
    }


    return(0);
}

