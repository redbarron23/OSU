#include <iostream>

using std::cout;
using std::endl;
using std::cin;

/*
    a demonstration of simple and somewhat smarter input validation
*/
int main()
{
    char input_char = '!'; //initialize to known bad value

    cout << "Please enter a lower-case letter: ";
    cin >> input_char;
    
    //simple check, does not take into account errors in the stream itself!
    while(input_char < 'a' || input_char > 'z')
    {
        cout << "The current value stored is: " << input_char << endl;
        cout << "This is invalid, please try again, entering in a lower-case letter: ";
        cin >> input_char;
    }
    
    cout << "You entered '" << input_char << "' which is valid." << endl;
    cout << "Thank you, now, Please enter an upper-case letter: ";
    cin >> input_char;
    
    //somewhat smarter check, does take into account errors in the stream itself
    while(input_char < 'A' || input_char > 'Z')
    {
        cout << "The current value stored is: " << input_char << endl;
        cout << "This is invalid, please try again, entering in an upper-case letter: ";
        
        //clear error and buffer to stream
        cin.clear(); //clear error bit
         /*
            drop first 999 characters up to and including
            the first newline (up to length of current stream)
        */
        cin.ignore(999, '\n');
        
        cin >> input_char;
    }
    
    cout << "You entered '" << input_char << "' which is valid." << endl;
    cout << "Thank you, now, Please enter a numeric digit: ";
    cin >> input_char;
    
    while(input_char < '0' || input_char > '9')
    {
        cout << "The current value stored is: " << input_char << endl;
        cout << "This is invalid, please try again, entering in a numeric digit:" << endl;
        cout << "For example, 0, 6, 8, and 2 are each numeric digits." << endl;
        cout << "What is your numeric digit of choice: ";
        
        //clear error and buffer to stream
        cin.clear(); //clear error bit
         /*
            drop first 999 characters up to and including
            the first newline (up to length of current stream)
        */
        cin.ignore(999, '\n');
        
        cin >> input_char;
    }
    
    cout << "You entered '" << input_char << "' which is valid." << endl;
    cout << "Thank you for playing along." << endl;
    cout << "Now exiting." << endl;

    return 0;
}
