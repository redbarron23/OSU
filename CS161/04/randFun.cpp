/*
2. (4) Write a simple function that acts like a random number generator with the following behavior:
File must be called: randFun.cpp
(Note: you can use the rand function in your function, you do not have to make your own random number generator code from scratch!)
(hint: reusing code you have written may be a good idea again...)
Discussion idea: Are there different ways you could setup a function to do this? Are there benefits of
accepting arguments over asking for user input (and the other way around)?
a. I say that your final answer should look like: int rand_int(int min, int max),
b. I say that it should accept two int values (one for the minimum value for some random number in a range and one for the maximum number in the range), generate a number within that range, and then return that number, though the exact details on how it generates the number are up to you,
Discussion idea: I am guessing that some of you may have found ways to generate random numbers with a one line expression, why might it be a good idea (or a bad idea) to have this in a function instead of as a one line expression in our code? Why might I say that your final answer should accept arguments and return a value and not mention the user input or possibility of output to the screen?
*/

#include <iostream>
#include <string>
#include <time.h>
#include <ctime>
#include <cstdlib>
using namespace std;

// prototype
void rand_int(int, int);

int main() {
    int min, max;
    cout << "Please enter a minimum number: " << endl;
    cin >> min;
    cout << "Please enter a maximum number: " << endl;
    cin >> max;

    rand_int(min, max);
    return 0;
}

void rand_int(int min, int max)
{
     srand(time(0));
     //int min, max;
     int myrand;
     myrand = rand() % ((max-min) + min);
    // return myrand;
     cout << myrand;
}
