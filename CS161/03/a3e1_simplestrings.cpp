/*
* 1. (4 points) Work with simple strings, create a program with the following:
* a. Include the string library (#include <string>),
* b. create a string variable (string my_str;),
* c. get user input for that string (cin >> my_str;),
* d. use a for loop to print the string one character at a time using the at function (example: for(int i = 0; i < my_str.length(); i++){cout << my_str.at(i) << endl;})
* e. use a for loop to print the string one character at a time in reverse using the at function (example: for(int i...){cout << my_str.at(i) << endl;})
* Discuss: notice how the body in my example for loop looks the same but that I hide the for loop's definition, how could I use this to make this print the string in reverse?
* f. use a loop to count how many letters there are in the word, keeping in mind that not all characters in the word need to be letters...
* Note: this exercise step asks you to count the number of letters in the word rather than the number of characters that are in the word.
*
* Discuss: the actual solution to the above is up to you, but let others know how you did this!
*
* g. Find out how you might be able to do this with multiple words in the input!
* (hint: using the getline function is one way) (example: getline(cin, my_str);)

* Discuss: what happens if you extract from cin and use getline in the same code repeatedly? How can you fix this?

*/

#include <iostream>
#include <string>
using namespace std;
char c;

int main() {
    cout << "Enter a string to print one char at a time" << endl;
    string my_str;
    cin >> my_str;
    
    // forward
    for (int i=0; i< my_str.length(); i++) {
        cout << my_str.at(i) << endl;
    }

    cout << "Enter a string to reverse" << endl;
    string reverse_my_str;
    cin >> reverse_my_str;

    // reverse
    for(int i= int(reverse_my_str.length()-1); i >= 0; i--) {
        cout << reverse_my_str.at(i) << endl;
    }

    //  count the number of letters in the word rather than the number of characters
    for (int i=0; i< my_str.length(); i++) {
       my_str[i]
       c = line.at(i);         // Get a char from string

        // if it's NOT within these bounds, then it's not a character
        if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) {

             std::cout << "Error!" << std::endl;

    }

    // multiple words in a line

    return 0;

}
