/*
 * Author: james Hourihane
 * class: CS 161
 * program name: gradeClass.cpp
 * Desc: input and ouput student's AverageScore and Final letter grade based on quiz, midterm and final
 */

/*
 * (4) Programming Project 6.1 from Absolute C++ (p271 in the 5e book),
 * 1. Write a grading program for a class with the following grading policies:
a. There are two quizzes, each graded on the basis of 10 points.
b. There is one midterm exam and one final exam, each graded on the basis of 100 points.
c. The final exam counts for 50% of the grade, the midterm counts for 25%, and the two quizzes together count for a total of 25%. (Do not forget to normalize the quiz scores. They should be converted to a percentage before they are aver- aged in.)
Any grade of 90 or more is an A, any grade of 80 or more (but less than 90) is a B, any grade of 70 or more (but less than 80) is a C, any grade of 60 or more (but less than 70) is a D, and any grade below 60 is an F. The program will read in the student’s scores and output the student’s record, which consists of two quiz and two exam scores as well as the student’s average numeric score for the entire course and final letter grade. Define and use a structure for the student record.
 */

/* weight of grades
 * quiz1 = 10 pts    .. ...........//12.5% 
 * quiz2 = 10 pts    ............  //12.5% 
 * midterm = 100 pts ............ // 25% of grade
 * final = 100 pts   .........// 50% of grade 
 */

#include <iostream>
using namespace std;

struct studentRecord
{
   double quiz1;
   double quiz2;
   double midTerm;
   double final;
   double averageNumericScore;
   // maybe reassign this in main
   //char finalLetterGrade[4];
   //string finalLetterGrade;
};

studentRecord newStudentRecord ( )
{
    studentRecord myStudentRecord; // intialize studentRecord to be returned

    cout << "Enter the person's quiz1: ";
    //cin.get >> myStudentRecord.quiz1;
    cin  >> myStudentRecord.quiz1;

    cout << "Enter the person's quiz2: ";
    cin >> myStudentRecord.quiz2;

    cout << "Enter the person's midTerm: ";
    cin >> myStudentRecord.midTerm;

    cout << "Enter the person's final: ";
    cin >> myStudentRecord.final;

    // weighted total of quiz, midterm& final
    // http://www.blacksdomain.com/files/Notes/Calculating_WA.php
    // also need to stick the finalLetterGrade back into the same struct; 
    double weightedSum = (myStudentRecord.quiz1 * .125) + (myStudentRecord.quiz2 * .125) + (myStudentRecord.midTerm * .25) + (myStudentRecord.final * .50);
    myStudentRecord.averageNumericScore = weightedSum;
   
   

    return(myStudentRecord); // return by value
}

int main()
{
     studentRecord myStudentRecord = newStudentRecord();  //init new Record for Student
     //studentRecord myStudentRecord;
     // if (0 <= number && number <= 10)
     //
     // Hopefully not over 100 no test condition for that yet
     if (myStudentRecord.averageNumericScore > 90.0 && myStudentRecord.averageNumericScore < 101.0)
     {
         cout << "student got an A" << endl;
     }
     else if (myStudentRecord.averageNumericScore > 80.0 && myStudentRecord.averageNumericScore < 90.0)
     {
         cout << "student got an B" << endl;
     }
     else if (myStudentRecord.averageNumericScore > 70.0 && myStudentRecord.averageNumericScore < 80.0)
     {
         cout << "student got an C" << endl;
     }
     else if (myStudentRecord.averageNumericScore > 60.0 && myStudentRecord.averageNumericScore < 70.0)
     {
         cout << "student got an D" << endl;
     }
     else
     {
         cout << "student got an F" << endl;
     } // ouch failed

}
