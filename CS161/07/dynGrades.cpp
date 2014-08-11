/*
 * author: James Hourihane
 * class:  CS161
 * program: dynGrads.cpp
 * Desc:   Create a grades histogram with user input
 * OSU ID is: 932509127
*/

#include <iostream>
//#include <sstream>
using namespace std;

//void fillAndPrintStaticArray();
void fillAndPrintDynamicArray();
int main()
{

    //fillAndPrintStaticArray();
    fillAndPrintDynamicArray();
    return 0;
}

void fillAndPrintDynamicArray()
{
    // Create Dynamic Array with new 
    int SIZE = 6;
    //int grade;
    int *dArray;       // create pointer
    dArray = new int[SIZE]; // do a new on dynamic array

    // initialise everything to 0
    dArray[0] = 0;
    dArray[1] = 0;
    dArray[2] = 0;
    dArray[3] = 0;
    dArray[4] = 0;
    dArray[5] = 0;

    cout << "please enter grades: " << endl;
    for (int i=0; i < SIZE; i++)
        cin >> dArray[i];

    /*
        stringstream ss(dArray[i]);
        if (!(ss >> dArray[i]))
        {
            cerr << "Invalid number " << i << '\n';
            //cin.clear();
            //fflush(stdin);
        } 
    */

 
    int totalGrades[6];
    /*
    for (int i=0; i<SIZE; i++)
    {
        for (int j=0; j<SIZE; j++)
        {
            if (dArray[i] == j)
                totalGrades[j]++;
                //cout << totalGrades <<" grade(s) of "<< i <<endl;  
        }
             cout << totalGrades[i] <<" grade(s) of "<< i <<endl;  

    }
    */

    for (int i=0; i<SIZE; i++)
    {
        if (dArray[i] == i)
            totalGrades[i]++;
        
        cout << totalGrades[i] <<" grade(s) of "<< i <<endl;  
    }
    
/*
in the for loop I tested whether gradeArr[i] == i.  
If true then I increased another variable totalGrades until i reached the end of gradeArr[].  
Then i would print out cout<< totalGrades <<" grade(s) of "<< i <<endl;  
then I set totalGrades to zero and increment to the next i and ran the test again, 
doing this for each potential grade you could have received.
*/
    
    // cleanup
    delete [] dArray;  // delete the array
    dArray = NULL;  //set Array to NULL so it won't point anywhere

}
