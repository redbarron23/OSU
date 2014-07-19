/*
5. (4) Programming Project 3.13 from Absolute C++ (p138 in the 5e book),
File must be called: finalist.cpp
“You have four identical prizes to give away and a pool of 25 finalists. 
The finalists are assigned numbers from 1 to 25. 
Write a program to randomly select the numbers of 4 finalists to receive a prize. 
Make sure not to pick the same number twice. For example, picking finalists 3, 15, 22, and 14 would be valid but picking 3, 3, 31, and 17 would be invalid, because finalist number 3 is listed twice and 31 is not a valid finalist number.”

Discussion idea: How can we make sure that in the end one person does not get picked twice (not that one number could not be generated, but that we need to detect and fix when that happens)?
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

//randFunc(void) //prototype

int main() {

    cout << randFunc;
}

void randFunc() {
    int myRandomNum;
    srand (time(NULL));

    for (int i=0; i< 11; i++) {
        myRandomNum = rand() % 10 + 1;
        cout << myRandomNum << endl;
    }
}
