#include <iostream>
using namespace std;
/*
    James Hourihane
    Student ID:932509127
*/

/*
v. a variable to store an integer (there are a few data types that can do this!), (such as a short, int, or long)
vi. printinganindicatormessagetotheusersothattheyknowthattheywillbeenteringdata, (likely with cout << “please type an integer so I can repeat it!” << endl;)
vii. extracting an integer value from the user's input, (likely with cin >> <integer identifier goes here>;)
viii. and printing a message that includes the integer value that the user input back to them, (likely with cout again)
*/


int main()
{
    int lowNum;    // 2147483647
    long highNum;  // 2147483647

    cout << "please type an integer so I can repeat it! ";
    cin >> lowNum; 
    cout << "please type a long so I can repeat it! ";
    cin >> highNum;
    cout << lowNum << " Is what you entered" << endl;
    cout << highNum << " Is what you entered" << endl;
    
    return 0;


}
