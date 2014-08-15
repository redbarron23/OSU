#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct person {
    char name[20];
    int age;
};

void new_person(person &p)
{
    strcpy(p.name, name); 
    p.age = age;
}

int main()
{
    person my_person;

    // don't know how to pass in name and age yet 
    new_person(my_person);

    cout << my_person.name << endl;
    cout << my_person.age << endl;

    return 0;
}
