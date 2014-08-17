/* weight of grades
 * quiz1 = 10 pts    .. ...........//12.5%
 * quiz2 = 10 pts    ............  //12.5%
 * midterm = 100 pts ............ // 25% of grade
 * final = 100 pts   .........// 50% of grade
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

struct studentRecord
{
   double quiz1;
   double quiz2;
   double midTerm;
   double final;
   double averageNumericScore;
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

/*
 * Read student records from command line arguments
 *
 * argc  The number of commnand line arguments
 * argv  The array of command line arguments
 */
studentRecord readStudentRecordCommandLine(char* argv[])
{
    studentRecord myStudentRecord;

    myStudentRecord.quiz1 = atof(argv[1]);
    myStudentRecord.quiz2 = atof(argv[2]);
    myStudentRecord.midTerm = atof(argv[3]);
    myStudentRecord.final = atof(argv[4]);

    // weighted total of quiz, midterm& final
    // http://www.blacksdomain.com/files/Notes/Calculating_WA.php
    // also need to stick the finalLetterGrade back into the same struct;
    // I decided against this as it was unecssary
    double weightedSum = (myStudentRecord.quiz1 * .125) + (myStudentRecord.quiz2 * .125) + (myStudentRecord.midTerm * .25) + (myStudentRecord.final * .50);
    myStudentRecord.averageNumericScore = weightedSum; // this is the final value
    
    return (myStudentRecord);
}


int main(int argc, char* argv[])
{
     // variable to store the studentRecord structure
     studentRecord myStudentRecord;

    // read the student record from command line arguments
     if(argc == 5)
     {
        myStudentRecord = readStudentRecordCommandLine(argv);
     }
     else
     {
        // read student record interactively from keyboard
        myStudentRecord = newStudentRecord();  //init new Record for Student
     }
     

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
