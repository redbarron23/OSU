#include <iostream>
using namespace std;

void printreverse(int x);
int main()
{
    // each one of these chars are < 10
    int x = 98774895;
    printreverse(x);

    return 0;
}

void printreverse(int x)
{
    if(x<10)  // base case
    {
        cout << x;
    }
    else
    {
        cout << x%10;
        printreverse(x/10);  // recursive call
    }
}
