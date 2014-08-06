#include "iostream"
#include "ctype.h"
using namespace std;


bool Digit(char x);

int main()
{
    char x;
    int y;
    cout << "Please press a key" << endl;
    cin >> x;
    Digit(x);
    cout << Digit(x);
}

bool Digit(char x)
{ 
    if (isdigit(x))
        return 0;
    else 
        cout << "Sorry needs to be a digit";
        return 1;
}

