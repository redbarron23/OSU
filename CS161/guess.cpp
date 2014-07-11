
#include <iostream>
using namespace std;

int main()
{
    int answer = 10;
    int guess;
    int guess_remain = 3;
    int guess_attempt = 1; 
    do
    {
        cout << "Please enter a range of numbers from 1 to 10:" << endl;
        cin >> guess;
        if (guess == 10 && guess_attempt < 4) {
           cout << "Your entered:" << guess << endl;
        }
        else if (guess_attempt < 3){
            cout << "Your entered: " << guess << endl;
            cout << "You have: " << guess_attempt << " remaining" << endl;
            cout << "Hint your answer is too low" << endl;
            guess_attempt++;
        }
        else {
            cout << "Sorry you reached max attempts" << endl; 
            cout << "You were off by: " << answer - guess << endl;
            break; // comment break if you want to make endless loop
        }

    } while ( guess < 10 && guess_attempt < 4);

    return 0;

}
