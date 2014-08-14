#include <iostream>
#include <string>
using namespace std;

struct contact {
    string name;
    string addr;
    int phone;
};

contact init()
{
    contact c;
    c.name = "jen";
    c.addr = "oregon";
    c.phone = 123456789;

    return c;
}

int main()
{
    contact one_contact;
    // initialize a function
    one_contact = init();

    cout << one_contact.name << endl;
    cout << one_contact.addr << endl;
    cout << one_contact.phone << endl;

    return 0;

}


