#include <iostream>
using namespace std;

grade assignments[8]; // holds 8 grade structs!

struct grade
{
    string course_name;
    int assignment_number;
    float score;
};


int main()
{
    grade a1;
    a1.course_name = "Intro to CS";
    a1.assignment_number = 0;
    a1.score = 10;


    return 0;

}
