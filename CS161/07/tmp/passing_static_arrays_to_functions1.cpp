// The whole array is not passwd to a function
// a pointer to the first element of the array is passwd
//
#include <iostream>
using namespace std;

void printArray(double array[], int size);
void userInputArray(double array[], int size);

int main()
{
    double rainfall[5];

    rainfall[0] = 2.3;
    rainfall[1] = 0.3;
    rainfall[2] = 0.0;
    rainfall[3] = 4.1;
    rainfall[4] = 0.5;

    printArray(rainfall, 5);  // print array w/ static values
    userInputArray(rainfall, 5); // input values into same array overwrite
    printArray(rainfall, 5); // print array with new input values

    return 0;
}


void printArray(double array[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << array[i] << endl;
    }
}


void userInputArray(double array[], int size)
{
    for(int i=0; i<5; i++)
    {
        cout << "Enter a rainfall amount: " << endl;
        cin >> array[i];
    }
}
