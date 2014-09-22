#include <iostream>
using namespace std;

                    // brackets here
void printArray(int theArray[], int sizeOfArray);
                                 // size of array here 

int main()
{
    int bucky[3] = {20, 54, 675};
    int jessica[6] = {54,24,7,8,9,99};

               // no brackets needed here
    printArray(bucky, 3);
                      // size of array
                      
    // lets print out another array
    printArray(jessica, 6);

    return 0;
}
                    // include brackets here
void printArray(int theArray[], int sizeOfArray)
                                // size of the array 
{
    for(int x = 0; x <sizeOfArray; x++)
    {
        cout << theArray[x] << endl;
    }
}
