/* This program shows the access of structure data members with pointer to structure */
#include <iostream>
using namespace std;

int main()
{
// Declaration of student structure
struct student{
char name[64];
char course[64];
int age;
int year;
};
// Initializing the s1
student s1 = {"Ali", "C++ Programming", 22, 2002};
student *sptr;
// Assigning a structure to pointer
sptr = &s1;
cout << "Displaying the structure data members using pointers" << endl;
cout << "Using the * operator" << endl;
cout << endl;
cout << "The name is " << (*sptr).name << endl;
cout << "The course is " << (*sptr).course << endl;
cout << "The age is " << (*sptr).age << endl;
cout << "The year is " << (*sptr).year << endl;
cout << endl;
cout << "Using the -> operator" << endl;
cout << endl;
cout << "The name is " << sptr->name << endl;
cout << "The course is " << sptr->course << endl;
cout << "The age is " << sptr->age << endl;
cout << "The year is " << sptr->year << endl;
}
