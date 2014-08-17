/*
 * Author: james Hourihane
 * class: CS 161
 * program name: gradeClass.cpp
 * Desc: input and ouput student's AverageScore and Final letter grade based on quiz, midterm and final
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

/*
 * 4 terms are dynamic (quiz1, quiz2, midTerm and final)
 * and 1 is calculated upon the weighted sum
 * afterwards the  struct is passed by value
 */

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
    // I decided against this as it was unecssary
    double weightedSum = (myStudentRecord.quiz1 * .125) + (myStudentRecord.quiz2 * .125) + (myStudentRecord.midTerm * .25) + (myStudentRecord.final * .50);
    myStudentRecord.averageNumericScore = weightedSum; // this is the final value
   
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
