#include <iostream>
#include <string>
using namespace std;
/*
 *  should also produce the output User, Mary A.
*/

int main() {
    string firstName;
    string middle;    // can be 1 or more chars
    string lastName;
    string middleName;
    string fullName;
    string dot =("."); //nount

    cout << "Enter First Name:\n";
    getline(cin, firstName);

    cout << "Enter Middle Name or Initial:\n";
    getline(cin, middle);

    if (middle.length() == 1) {
        //middleName = str1 += str2;
        middleName = middle += dot;
    }
    else {
        middleName = middle;
    } 

    cout << "Enter Last Name or Initial:\n";
    getline(cin, lastName);

    fullName=lastName + ", " +  middleName + " " + firstName;
    cout << fullName << endl;

    return 0;
}
