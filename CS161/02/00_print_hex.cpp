// a simple program to take a number as input from the user and print it back to the screen in hexadecimal (bas 16)
/* note that you can similarily use dec and oct to do the same thing as hex does hter ( though in base 10 and base 8 instead)
 * but that there is no basefield flag for bin ;(
 */

# include <iostream> // for cin, cout, endl and hex

using std::cout;
using std::cin;
using std::hex;
using std::endl;

int main()
{
    // create a variable to hold the user input
    int input_number;

    cout << "PLease enter a number for me to print to the world: ";
    cin >> input_number;

    // notice that we can break long printouts up over multiple lines!
    cout << "You entered: " << input_number << " which is: " << hex << input_number;
    cout << " in hexadecimal" << ", though it is often written as 0x" << input_number;
    cout << " to denote the base as a part of the value printed to reduce confusion" << endl;

    return 0;
}
 
