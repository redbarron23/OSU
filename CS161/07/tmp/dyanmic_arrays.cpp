// https://www.youtube.com/watch?v=FHhcSncuHEI
#include <iostream>
using namespace std;

const int CAPACITY = 1000;

int main()
{
    int *dArray;       // create pointer
    dArray = new int[CAPACITY]; // do a new on  dynamic array

    dArray[0] = 3;
    dArray[1] = 7;
    dArray[2] = 2;
    dArray[3] = 9;

    cout << "Array: ";

    for (int i=0; i<4; i++)
    {
        cout << dArray[i] << " ";
    }
    cout << endl;

    cout << dArray[0];

    delete [] dArray;  // delete the array
    dArray = NULL;  //set Array to NULL so it won't point anywhere

    //cout << dArray[0] << endl;  // array has been deleted so no longer accessible

    return 0;

}
