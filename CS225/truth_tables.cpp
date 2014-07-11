//**************************************
// Name: Truth Table Generator
// Description:This program prints a truth table using two variables (p, q), an operator (AND, OR, NAND [not and], NOR [not or], XOR [exclusive OR]) and negation (NOT). This is a great assistance for anyone who is learning about truth tables or programming. Helpful comments are included in code.
// By: Paul Peterson
//
//This code is copyrighted and has// limited warranties.Please see http://www.Planet-Source-Code.com/vb/scripts/ShowCode.asp?txtCodeId=3257&lngWId=3//for details.//**************************************

/*

// prints a truth table using two variables (p, q), an operator (AND, OR, NAND [not and], NOR [not or], XOR [exclusive OR]) and negation (NOT)

cout << "P | Q | " << bp << " P " << op << " " << bq << " Q\n";

By Paul Peterson
Truth Table Calculator Program
Status: Complete
*/
#include <iostream>
#include <string>
using namespace std;
int main () {
 string op;//operator user chooses to input
 char p, q;// used when asked to negate p and/or q
 bool P, Q;//Used to keep track of variable values
 char result [4]; //Used to record results of each tt row
 int counter;//Just a simple counter
 string bp = "";//Used for printing tt
 string bq = "";
 cout << "Values Available: AND OR NAND NOR XOR" << endl;
 cout << "Please enter an operator to use: ";
 cin >> op;
 cout << "Negate p (y/n)? ";
 cin >> p;
 cout << "Negate q (y/n): ";
 cin >> q;
 P = true;//Variables are initially set to true
 Q = true;
 if(p == 'y' || p == 'Y') {//P and Q are negated at user's discretion
 P = false;
 bp = "NOT";}
 if(q == 'y' || q == 'Y') {
 Q = false;
 bq = "NOT";}
 //begin calculating truth table results
 for (counter = 0; counter < 4; counter++) {
 if (op == "AND" || op == "and") {
if(P && Q)
result[counter]= 'T';
else
result[counter]= 'F';
 }else if (op == "OR" || op == "or") {
if(P || Q)
result[counter] = 'T';
else
result[counter] = 'F';
 }else if (op == "NAND" || op == "nand") {
if (P && Q)
result[counter] = 'F';
else
result[counter] = 'T';
 }else if (op == "NOR" || op == "nor") {
if (P || Q)
result[counter] = 'F';
else
result[counter] = 'T';
 }else if (op == "XOR" || op == "xor") {
if(P == Q)
result[counter] = 'F';
else
result[counter] = 'T';
 }else{
cout << "Invalid Operator\n";
return 0;
 }
 // begin change values of variables
 if (counter == 0)// T | F
Q = (!Q);
 if (counter == 1) { // F | T
Q = (!Q);
P = (!P);
 }
 if (counter == 2)// F | F
Q = (!Q);
 // end change values of variables
 }
 //end of calculating truth table results
 //begin print truth table
 //count << "AND, OR, NAND [not and], NOR [not or], XOR [exclusive OR]) and negation (NOT)";
 cout << "--|---|--------------\n";
 cout << "T | T | " << result[0] << endl;
 cout << "T | F | " << result[1] << endl;
 cout << "F | T | " << result[2] << endl;
 cout << "F | F | " << result[3] << endl;
 // end print truth table
 cin >> bp;// just a simple way to keep dos box from closing
 return 0;
}
