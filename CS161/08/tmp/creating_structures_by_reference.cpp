#include <iostream>
#include <string>
using namespace std;

struct contact {
    string name;
    string addr;
    int phone;
};

void init(contact &c)
{
    c.name = "jen";
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


