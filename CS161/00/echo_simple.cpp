// a simple program to take a number as input from the user and print it back to the screen

#include <iostream> // for cin, cout, and endl

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // create a variable to hold the user input
    int input_number;
    
    cout << "Please enter a number for me to print to the world!: ";  // notice no enl so I can have input on the same line as the request
    cin >> input_number; // you will want to try to enter a character, a many character word, and even muliple words and see what happens!
    cout << "You entered: " << input_number << endl;
  
    return 0; 
}
