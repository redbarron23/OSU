/*
(3) Programming Project 5.7 from Absolute C++ (p233 in the 5e book) using dynamic arrays, (Histogram of grades)
File must be called: dynGrades.cpp
*/

/*
 * 7. Generate a text-based histogram for a quiz given to a class of students. 
 * The quiz is graded on a scale from 0 to 5. 
 * Write a program that allows the user to enter grades for each student. 
 * As the grades are being entered, the program should count, using an array, the number of 0’s, the number of 1’s, the number of 2’s, the number of
 * Solution to * Programming * Project 5.7 3’s, the number of 4’s, and the number of 5’s. 
 * The program should be capable of
 * handling an arbitrary number of student grades.
 * You can do this by making an array of size 6, where each array element is initialized to zero. Whenever a zero is entered, increment the value in the array at index 0. Whenever a one is entered, increment the value in the array at index 1, and so on, up to index 5 of the array.
 * Output the histogram count at the end. For example, if the input grades are 3, 0, 1, 3, 3, 5, 5, 4, 5, 4, then the program should output
 * 1 grade(s) of 0 
 * 1 grade(s) of 1 
 * 0 grade(s) of 2 
 * 3 grade(s) of 3 
 * 2 grade(s) of 4 
 * 3 grade(s) of 5
 */

#include <iostream>
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
    

    for (int i=0; i<6; i++)
    {
        //* 1 grade(s) of 0 
        //* 1 grade(s) of 1 
        cout << "grade(s) of " << dArray[i] << endl;
    }
    
    // cleanup
    delete [] dArray;  // delete the array
    dArray = NULL;  //set Array to NULL so it won't point anywhere

}

/*
void fillAndPrintStaticArray()
{
    //Write a program that allows the user to enter grades for each student.
    int *dArray;       // create pointer
    dArray = new int[CAPACITY]; // do a new on  dynamic array

    // initialise everything to 0
    dArray[0] = 0;
    dArray[1] = 0;
    dArray[2] = 0;
    dArray[3] = 0;
    dArray[4] = 0;
    dArray[5] = 0;
    
    //cout << "dArray: "; // prints out first element
    //cout << dArray[0];  // same

    // print inputed grades
    for (int i=0; i<6; i++)
    {
        //1 grade(s) of 0
        cout << i << " " << dArray[i] << "grade(s)" of << " ";
    }

    //cout << endl;
    
    // cleanup
    delete [] dArray;  // delete the array
    dArray = NULL;  //set Array to NULL so it won't point anywhere

}
*/
