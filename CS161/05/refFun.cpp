/*
 * Remember before you begin coding to draw or write out what this program will do. Also, remember to think of what tests you could use as you design and code up your solution.
 * (Note: you may be able to jump in and program a solution to this program with a bit of time, but you need to pay attention to how you decide what techniques you are using, why you are using them, and whether there are any other options available to you)
 * Discuss: what do your designs looked like, how did you go from design to program, what did you do to make sure your program was working correctly (consider letting someone else test your program to see if they can break it).
 
2. (3) Write a simple function that accepts two references to string and returns whether they have the same contents with the use of a loop to check each character individually.
File must be called: refFun.cpp
*/


#include <iostream>
#include <string>
using namespace std;

void compareString(string& s1, string& s2);

int main()
{
    string string1="foo";
    string string2="foo";
    compareString(string1, string2);
    return 0;
}

void compareString(string& s1, string& s2)
{
    for (int i = 0; i < s1.length(); i++) {
            // compare s1[i] to s2[i]
            if ( s1[i] == s2[i] ) {
                cout << s1[i] << " and " << s2[i] << " are equal " << endl;
            } else
                cout << s1[i] << " and " << s2[i] << " are not equal " << endl;
        }

}
