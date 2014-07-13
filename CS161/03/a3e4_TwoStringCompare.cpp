/*
* Write a piece of code using a loop that accepts two strings and returns whether they have the same contents with the use of a loop to check each character individually,
* (hint: you can compare individual characters with the <, ==, and > operators)

* Discussion idea: 
* is there an easier way to check for equality of two strings? 
* Answer: Yes string1 == string2
* Why might I require you to “do it the hard way”?
* Answer:  if the array has a null char at the end?
*/

#include <iostream>
#include <string>
using namespace std;
string String1, String2;
int i;
int str1Length = String1.length();
int str2Length = String2.length();
int theSameLengthOrNot;

int main() {

    cout << "Enter Two Strings for Comparison:\n";
    cout << "Enter String1:\n";
    cin >> String1;
    cout << String1 << endl;
    for (i = 0; i < String1.length(); i++) {
        cout << String1[i] << endl;
    }

    cout << "Enter String2:\n";
    cin >> String2;
    cout << String2 << endl;
    for (i = 0; i < String2.length(); i++) {
        cout << String2[i] << endl;
    }

    if (str1Length < str2Length) {
            theSameLengthOrNot = false;
    } else if(str1Length > str2Length) {
            theSameLengthOrNot = false;
    } else if(str1Length == str2Length) {
            theSameLengthOrNot = true;
    }

    if (theSameLengthOrNot = true) {
        //cout << "Strings are equal" << endl; 
        for (i = 0; i < String1.length(); i++) {
            // compare String1[i] to String2[i] 
            if ( String1[i] == String2[i] ) {
                cout << String1[i] << " and " << String2[i] << " are equal " << endl;
            } else
                cout << String1[i] << " and " << String2[i] << " are not equal " << endl;
        }
        
    }

}
