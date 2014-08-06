#include <iostream>
using namespace std;
const int MAX_NUMBER_SCORES = 10;

void fillArray(int a[], int size, int& numberUsed);
void printArray(const int a[], int numberUsed);

int main()
{
    int score[MAX_NUMBER_SCORES], numberUsed;
    fillArray(score, MAX_NUMBER_SCORES, numberUsed);
    printArray(score, numberUsed);

}

void fillArray(int a[], int size, int& numberUsed)
{
    cout << "Enter up to " << size << " nonnegative whole numbers. \n."
            " Mark the end of the list with a negative number \n";

     int next, index=0;
     cin >> next;
     while ((next >=0) && (index < size))
     {
         a[index] = next;
         index++;  
         cin >> next; 
         numberUsed = index; 
     }
}

void printArray(const int a[], int numberUsed)
{
    for (int index = 0; index < numberUsed; index++)
    {
        cout << a[index] << endl; 
    }
}
