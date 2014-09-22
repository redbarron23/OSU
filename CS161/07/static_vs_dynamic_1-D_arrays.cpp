/*
 * Okay. So dynamic versus static:
 * Dynamic means it's set at runtime, and is on the heap. 
 * But for your question in particular, yes you can change how big it is. 
 * But it's less that it shrinks and grows as you ask, 
 * but that you can figure out at runtime how big it needs to be, and make it that big. Like so:
 *
 * int *pointy;  // pointer
 * int number;   // int
 * cin >> number; // input number
 * pointy = new int[number]; // point to dynamic array
 */


#include <iostream>
using namespace std;

int main()
{

    return 0;

}
