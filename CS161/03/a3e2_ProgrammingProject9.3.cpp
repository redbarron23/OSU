/*
 * (4 points) Programming Project 9.3 from the textbook (p413 in the 5e book).
 * “Write a program that reads a person’s name in the following format: first name, then middle name or initial, and then last name. The program then outputs  the name in the following format: Last_Name, First_Name, Middle_Initial.
 * For example, the input
 * Mary Average User
 * should produce the output User, Mary A.
 * The input
 * Mary A. User
 * should also produce the output User, Mary A.
 * Your program should place a period after the middle initial even if the input did not contain a period. Your program should allow for users who give no middle name or middle initial. In that case, the output, of course, * contains no middle name or initial. For example, the input
 * Mary User
 * should produce the output User, Mary
 * If you are using C-strings, assume that each name is at most 20 characters long. Alternatively, use the class string. (Hint: You may want to use three string variables rather than one large string variable for the input. You may find it easier to not use getline.)”
 * (hint: I personally still find it easier to use getline...)
 *
 *     Discuss: how might we be able to solve this without using the getline function?
 *
*/

/*
 * Anser to Discuss
 * strcpy (Target_ String_Var, Src_String)
 * Copies the C-string value Src_ String into the C-string variable Target_String_Var.
 * Does not check to make sure Target_String_Var is large enough to hold the value Src_ String.

*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    string middle;    // can be 1 or more chars
    string lastName;
    string middleName;
    string fullName;
    string dot =(".");

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
