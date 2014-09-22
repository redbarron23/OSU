#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);
int main()
{
    int betty = 13;  // variable to pass by value
    int sandy = 13;  // variable to pass by reference

    passByValue(betty);  
    passByReference(&sandy);  // notice the amperstand

    cout << "betty is now " << betty << endl;
    cout << "sandy is now " << sandy << endl;


    return 0;
}


void passByValue(int x) 
{
    x =99;  // only sets x ; does not change variable passing in
}

void passByReference(int *x)
{
    *x = 66;   // this will point  to whatever is passed in
               // in this case it will be sandy
               // therefore it will change sandy to 66 
}
