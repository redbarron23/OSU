#include <iostream>
using namespace std;

int fact(int n);
void star_row(int start, int stop);
void triangle(int start, int stop);
int main()
{
    int input;
    int start, stop;
    cout << "Please enter a starting number for a number of asteriks to be printend in a triangle." << endl;
    cin >> start;
    cout << "Now please enter a number to stop printing astericks at a triangle" << endl;
    cin >> stop;
    triangle(start, stop);

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

void star_row(int start, int stop)
{
    if( start > stop)
    {
        cout << endl;
        return;
    }
    else
    {
        cout << " * ";
        star_row(start + 1, stop);
    }
}

void triangle(int start, int stop)
{
    if( start > stop)
    {
        return;
    }
    else
    {
        triangle(start + 1, stop);
        star_row(start, stop);
    }
}
