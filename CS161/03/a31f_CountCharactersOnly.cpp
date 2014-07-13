/*
 * http://stackoverflow.com/questions/13779321/accept-only-letters
 * English-letter ranges in ascii 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a string to print one char at a time" << endl;
    string my_str;
    char c;
    int count = 0;
    cin >> my_str;
    // count the number of letters in the word rather than the number of characters
    for (int i=0; i< my_str.length(); i++) {
        my_str[i];
        c = my_str.at(i);         // Get a char from string
        //if (c) {
           //cout << c << endl;
         //  count +=1;
        //}
        

        // if it's NOT within these bounds, then it's not a character
        if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) {
             cout << "Error!" << endl;
             cout << c << " is not a letter" << endl;
        } else  {
             cout << c << endl;
             count +=1;
        }

    }
        cout << "There are " << count << " characters in your string" << endl;
}
