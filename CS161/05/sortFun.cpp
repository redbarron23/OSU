/*
 * Remember before you begin coding to draw or write out what this program will do. Also, remember to think of what tests you could use as you design and code up your solution.
 * (Note: you may be able to jump in and program a solution to this program with a bit of time, but you need to pay attention to how you decide what techniques you are using, why you are using them, and whether there are any other options available to you)
 * Discuss: what do your designs looked like, how did you go from design to program, what did you do to make sure your program was working correctly (consider letting someone else test your program to see if they can break it).
 
3. (3) Programming Project 4.17 from Absolute C++ (p183 in the 5e book),
File must be called: sortFun.cpp
“Write a function named sort that takes three integer parameters by reference. The function should rearrange the parameter values so that the first parameter gets set to the smallest value, the second parameter gets set to the second smallest value, and the third parameter gets set to the largest value. For example, given the variable assignments a = 30; b = 10; c = 20; then the function call sort(a,b,c)should result in a =10, b =20, and c =30. Note that the array construct covered in Chapter 5 will give you a way to solve this problem for an arbitrary number of items instead of only for three items”
*/

#include <iostream>
using namespace std;

int sort(int& p1, int& p2, int& p3);

int main()
{
     int a=30, b=10, c=20;
     //int a=30, b=100, c=20;
     //int a=10, b=1, c=2;
     cout << "original:" << endl;
     cout << "a is: " << a << " b is: " << b << " c is: " << c << endl << endl;
     sort(a, b, c);
     return 0;
}

int sort(int& p1, int& p2, int& p3)
{

   if (p1 > p2)
   {
       int temp = p1;
       p1 = p2;
       p2 = temp;
   }

   if (p1 > p3)
   {
       int temp = p1;
       p1 = p3;
       p3 = temp;
   }

   if (p2 > p3)
   {
       int temp = p2;
       p2 = p3;
       p3 = temp;
   }

   cout << "after swap:" << endl;
   cout << "a is: " << p1 << " b is: " << p2 << " c is: " << p3 << endl;
}
