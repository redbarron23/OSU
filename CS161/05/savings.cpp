/*
 * borrowed some of the code from here
 * http://www.cpp-home.com/forum/viewtopic.php?f=6&t=14020
 *
 */

#include <iostream>
using namespace std;

float interest(float principle, float rate, int years);
int main()
{
   cout << interest(100, .05, 12) << endl;
   return 0; 
}

float interest(float principle, float rate, int years) 
{
    if (years < 1)
    {
        cout << "years  must be greater than 1" << endl;
    }
    else
    {
        // A = P(1 + rt)
        float amount = principle * (1 + rate * years);
        return amount;
    }
}
