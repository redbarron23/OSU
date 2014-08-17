/*
 * Author: james Hourihane
 * class: CS 161
 * program name:
 * Desc:
 */

/*
 *  (4) Create a program that achieves the same goal as programming project 6.1 from Absolute C++ (p271 in 
the 5e book), but check if command line arguments were used to enter the two quiz scores and two exam 
scores as 4 numerical values in order of quiz, quiz, midterm, final.
File must be called: commandGrade.cpp
For extra (optional but valuable) practice allow the scores to be input in any order by using flags to identify 
which score is coming after the flag (such as -q and two numerical values, -m and one numerical value, and -f
and one numerical value), but remember to tell the user if they entered an invalid flag or invalid numerical 
value for the flag used (by printing a usage statement explaining what flags are needed and what their values
can be).
*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) { 
   cout << "argc = " << argc << endl; 
   for(int i = 0; i < argc; i++) 
      cout << "argv[" << i << "] = " << argv[i] << endl; 
   return 0; 
}
