#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    string middle;    // can be 1 or more chars
    string lastName;
    string middleName;
    string fullName;

    cout << "Enter First Name:" << endl;
    getline(cin, firstName);

    cout << "Enter Middle Name or Initial:\n";
    getline(cin, middle);
    middleName = middle;

    cout << "Enter Last Name or Initial:\n";
    getline(cin, lastName);

    //fullName = lastName + " " + middleName + " " + firstName;
    //cout << lastName +  middleName + firstName;
   fullName=lastName + " " +  middleName + " " + firstName;
   cout << fullName << endl;

    return 0;
}
