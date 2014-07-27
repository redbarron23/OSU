#include <iostream>
using namespace std;

int fact(int n);
int main()
{
    int input;
    cout << "Please enter a whole number from 1 to 9 and I will tell you factorial of that number " << endl;
    cin >> input;
    cout << input << "! = " << fact(input) << endl;
    return 0; 
}

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
       return n * fact(n - 1);
    }
}
