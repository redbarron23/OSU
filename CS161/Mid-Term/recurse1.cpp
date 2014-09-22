#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    cout << factorial(5) << endl;  // 5 * 4 * 3 * 2 * 1
    cout << factorial(6) << endl;  // 6 * 5 * 4 * 3 * 2 * 1
    cout << factorial(7) << endl;  
    cout << factorial(8) << endl;  
    cout << factorial(9) << endl;  
    cout << factorial(10) << endl; 
    return 0;
}

int factorial(int n)
{
    // base case
   if(n == 1)
   {
      return 1;
   }
   else  // recursion
   {
      return n * factorial(n - 1);
                 // recursive function
   }
}


/*
 * type functionName(type parameter)
 * {
 *     // base case with if
 *     if(type <,>,== parameter)
 *     {
 *         return 1;
 *     }
 *     else  // recurse here
 *     {
 *         return functionName(parameter);
 *     }
 * }
 *
 *
 *
 *
 * }
 */
