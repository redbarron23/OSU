#include <iostream>
using namespace std;

// function definition to swap the values.

// function declaration
void swap(int &x, int &y, int &z);

int main ()
{
   // local variable declaration:
   int a = 100;
   int b = 200;
   int c = 300;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
   cout << "Before swap, value of c :" << c << endl;

   /* calling a function to swap the values using variable reference.*/
   swap(a, b, c);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
   cout << "After swap, value of c :" << c << endl;
 
   return 0;
}

// function definition to swap the values.
void swap(int &x, int &y, int &z)
{
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = z; /* put x into y */
   z = temp;
  
   return;
}
