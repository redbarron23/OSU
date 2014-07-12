/*
* Write a piece of code using a loop that accepts two strings and returns whether they have the same contents with the use of a loop to check each character individually,
* (hint: you can compare individual characters with the <, ==, and > operators)

* Discussion idea: 
* is there an easier way to check for equality of two strings? 
* Why might I require you to “do it the hard way”?

*/

#include <iostream>
#include <string>
using namespace std;
string String1, String2;
int i;
str1Length = String1.length();
str2Length = String2.length();

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

    if(str1Length < str2Length){
        theSameLengthOrNot = false;
    } else 

    if(str1Length > str2Length){
        theSameLengthOrNot = false;
    } else if(str1Length == str2Length) {
        theSameLengthOrNot = true;
    }


}
