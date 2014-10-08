#include <iostream>

/*
 * 2) Write a function that takes three pointers to int as arguments. Your program should put 
 * the lowest of the three values in the first argument. The second lowest in the middle argument. 
 * The highest value in the third argument. As they are call-by-reference there is nothing to return. 
 */

void func(int &x, int &y, int &z);

int main()
{
    int a = 1;
    int b = 10;
    int c = 100;

    func(a, b, c);

    //std::cout << a << std::endl;
    //std::cout << b << std::endl; 
    //std::cout << c << std::endl;

    return 0;
}

void func(int &x, int &y, int &z)
{
    //return;

}
