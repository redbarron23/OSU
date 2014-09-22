//https://www.youtube.com/watch?v=VnZbghMhfOY
#include <stdio.h>
#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);
int main()
{
    int bucky[3] = {20, 54, 675};
    int jessica[6] = {54, 24,7,8,9,99};

    printArray(bucky,3);
    //printArray(jessica, 6);

    return 0;

}


void printArray(int theArray[], int sizeOfArray)
{
    for (int x = 0; x<sizeOfArray; x++)
    {
        cout << theArray[x] << endl;

    }

}
