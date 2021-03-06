/*
 * Remember before you begin coding to draw or write out what this program will do. Also, remember to think of what tests you could use as you design and code up your solution.
 * (Note: you may be able to jump in and program a solution to this program with a bit of time, but you need to pay attention to how you decide what techniques you are using, why you are using them, and whether there are any other options available to you)
 * Discuss: what do your designs looked like, how did you go from design to program, what did you do to make sure your program was working correctly (consider letting someone else test your program to see if they can break it).
 
4. (3) Programming Project 13.1 from Absolute C++ (p607 in the 5e book),
File must be called: recFun.cpp
“Write a recursive function definition for a function that has one parameter n of type int and that returns the nth Fibonacci number. The Fibonacci numbers are F0 is 1, F1 is 1, F2 is 2, F3 is 3, F4 is 5, and in general
￼Fi+2 =Fi +Fi+1 fori=0,1,2,...”
Discuss: later elements rely on earlier elements, so how many elements do we need to have provided to start this recursive process?
*/

#include <iostream>
using namespace std;

int fibo(const int& n);

int main()
{
    int firstNum = 11;
    //fibo(first);
    cout << fibo(firstNum);
    return 0;
}

// borrowed this from stakoverflow
// http://stackoverflow.com/questions/1518726/recursive-fibonacci
int fibo(const int& n)
{
    if (n == 0)
    {
        return 0;
    }    

    if ( n == 1)
    {
         return 1; 
    }
    return fibo(n - 1) + fibo(n - 2);
}
