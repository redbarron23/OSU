/*
4. (4) Programming Project 3.5 from Absolute C++ (p138 in the 5e book),
File must be called: size.cpp
“Write a program that asks for the user’s height, weight, and age, and then computes clothing sizes according to the following formulas.
• Hat size =weight in pounds divided by height in inches and all that multiplied by 2.9.
• Jacket size (chest in inches) =height times weight divided by 288 and then adjusted by adding one- eighth of an inch for each 10 years over age 30. (Note that the adjustment only takes place after a full 10 years. So, there is no adjustment for ages 30 through 39, but one-eighth of an inch is added for age 40.)
• Waist in inches =weight divided by 5.7 and then adjusted by adding one-tenth of an inch for each 2 years over age 28. (Note that the adjustment only takes place after a full 2 years. So, there is no adjustment for age 29, but one-tenth of an inch is added for age 30.)
Use functions for each calculation. Your program should allow the user to repeat this calculation as often as he or she wishes.”
*/

#include <iostream>
#include <string>
using namespace std;
float weight;
float height;
int age;
float jacketSize;
float hatSize;
float waistInches;

void userInput(float, float, int); 
int main() {
    userInput():

    return 0;

}

void userInput 
{
    cout << "Please enter your Height" << endl;
    cin >> height;
    cout << "Please enter your Weight" << endl;
    cin >> weight;
    cout << "Please enter your Age" << endl;
    cin >> age;
    cout << "Your Height is: << "height "Your Weight is:" << weight  << "And your Age is: " << age << endl;
}

//userOutput// 
//{
//    cout << "Your  hatsize, jacketsize" << endl;
//}


//void clothingSize 
//{
//    float height, 
//    int weight, 
//    int age; 
//    int hatSize = ((weight / height) * 2.9);
//    int jacketSize;
//    int waist = weight / 5.7;
//}
