// a simple program to take a number as input from the user and print it back to the screen in binary (base 2)

//one way to get binary numbers is to use a bitset :D!
// though I will not say whether this is the best way to do this... after all you could just program your own binary manipulator that acts like the basefield flags for hex, dec, and oct

#include <iostream> //for cin, cout, endl
#include <bitset>

using std::cout;
using std::cin;
using std::bitset;
using std::endl;

int main()
{
    //create a variable to hold the user input
    int input_number;
    
    cout << "Please enter a number for me to print to the world!: ";
    cin >> input_number;
    
    cout << "You entered: " << input_number << " which is: " << bitset<8>(input_number);
    cout << " in binary" << ", though it is sometimes written as 0b" << input_number;
    cout << " to denote the base as a part of the value printed to reduce confusion" << endl;
    
    return 0;
}

