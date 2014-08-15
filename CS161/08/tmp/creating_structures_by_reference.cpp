#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct contact {
    //string name;
    char name[20];
    //const char *name[20];
    string addr;
    int phone;
};

void init(contact &c)
{
    //c.name = "jen";
    strcpy(c.name, "jen"); 
    //strcpy( Book1.title, "Learn C++ Programming");
    c.addr = "oregon";
    c.phone = 123456789;
}

int main()
{
    contact one_contact;

    // initialize a function
    init(one_contact);

    cout << one_contact.name << endl;
    cout << one_contact.addr << endl;
    cout << one_contact.phone << endl;

    return 0;
}


