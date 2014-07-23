/*
Remember before you begin coding to draw or write out what this program will do. Also, remember to think of what tests you could use as you design and code up your solution.
(Note: you may be able to jump in and program a solution to this program with a bit of time, but you need to pay attention to how you decide what techniques you are using, why you are using them, and whether there are any other options available to you)
Discuss: what do your designs looked like, how did you go from design to program, what did you do to make sure your program was working correctly (consider letting someone else test your program to see if they can break it).

1. (3) Write a simple function that acts like a random number generator with the following behavior:
File must be called: randFun.cpp
a. its definition looks like the following: void rand_int(const int &min, const int &max, int &val),
b. it accepts references to two int values and a reference to a third value (one for the bottom of the random range, one for the top of the random range, and one to store the final value), generates a number within that range, and then sets the value of the third number to that generated value,
Discuss:
i. Why might I use const in the signature of the function?
Answer:
ii. Why might I want to do this with references to values instead of copies of values?
Answer:

iii. Can I return two values from a function? Is there a way to alter multiple values passed into a function call?
Answer:


*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

void getNumbers(int& min, int& max);
//void rand_int(const int& min, const int& max, int& val);
//void showResults(int val);

int main()
{
    int firstNum, secondNum;
    getNumbers(firstNum, secondNum);
    //rand_int(min, max, val);
    //showResults(rand_int);
    
    return 0;
}

void getNumbers(int& min, int& max)
{
    cout << "Please enter a min number: " << endl;
    cin >> min;
    cout << "Please enter a max number: " << endl;
    cin >> max;
}

void rand_int(const int& min, const int& max, int& val)
{
    srand (time(NULL));
    val = rand() % max + min;
}

void showResults(int val)
{
    cout << "Random number is: "
         << val << endl;
}

