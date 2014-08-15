#include <iostream>
#include <string>
using namespace std;

struct contact {
    string name;
    string addr;
    int phone;
};

void init(contact *c)  // notice the *c   this is a pointer that gets passed 
{
    c->name = "jen";
    // this is another way of doing it
    //(*c).addr = "oregon";
    c->addr = "oregon";
    c->phone = 123456789;
}

int main()
{
    contact one_contact;

    // initialize a function
    init(&one_contact);         // &one_contact passing the memory address of the structure

    cout << one_contact.name << endl; // print members like usual
    cout << one_contact.addr << endl;
    cout << one_contact.phone << endl;

    return 0;

}


