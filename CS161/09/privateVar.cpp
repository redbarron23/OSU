#include <iostream>
#include <cstring>

using namespace std;

const int NAMELEN = 20;     // Max name length

class person
{
public:
    void setName(char n[NAMELEN+1]);
    void setAge(int age);
    char *getName(void);
    int  getAge(void);
    person(); // constructor
    ~person() {};
    void having_birthday();

private:
    char name[NAMELEN+1];
    int age;
};

//~person()
//{
    //cout << "deconstructing" << endl;
//}


person::person ( void )
{
    cout << "Object is being created." << endl;
}

void person::having_birthday()
{
    age += 1;  // parameter incremented
}

void person::setName ( char n[NAMELEN+1] )
{
    strcpy(name, n);
}

void person::setAge ( int a )
{
    age = a;
}

// has to be a pointer else it will return only on char at a time
// http://www.gamedev.net/topic/574855-accessor-getter-function-for-a-c-string-character-array/
char *person::getName ( void )
{
    return name;
}

int person::getAge()
{
    return age;
}

int main()
{
    person birthday_person;   // Celebrating a brithday
    char readname[NAMELEN+1]; // Values read
    int  age;

    cout << "Enter the new person's name: ";
    cin.get (readname, NAMELEN+1);  // Read name
    birthday_person.setName(readname);

    cout << "Enter the age of " << readname << ": ";
    cin >> age;
    birthday_person.setAge(age);

    birthday_person.having_birthday();

    cout << "Happy birthday! " << birthday_person.getName() << " You are: " << birthday_person.getAge() << endl;
    return(0);
}


