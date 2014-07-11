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
    //int input_number = 0;
    
    //cout << input_number << " in binary is: " bitset<8>(input_number) << endl;
    //for ( input_number = 0; input_number <= 256; input_number++) 
    //    cout << bitset<8>(input_number) << endl;
    //}
    
    int input_number = 256;

    while (input_number > 0) {
        input_number = input_number + 1;
        cout << bitset<8>(input_number) << endl;
    }
    
    return 0;
}

