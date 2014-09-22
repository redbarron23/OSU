#include <iostream>
#include <string>
using namespace std;

void validWord(string& guess1); 
void loop(string player1Guess);

int main()
{
    string answer = "foo";
    int attempts = 5;

    cout << "Player1: " << endl;
    cout << "Please enter a string for secret word ";
    //cin >> player1Guess;
    getline (cin, player1Guess);
    validWord(player1Guess);


    return 0;

}


void validWord(string& guess1)
{
    for (int i = 0; i < guess1.length(); i++) {
        if (isdigit(guess1.at(i)))
        {
            cout << "word must be a-z or A-Z";
        }
        else if (ispunct(guess1.at(i)))
        {
            cout << "word must be a-z or A-Z";
        }
        else if (isspace(guess1.at(i)))
        {
            cout << "word must be a-z or A-Z";
        }
    }
}


void loop(string& player1Guess)
{
    string player1Guess;
    do {
    
            if (player1Guess.compare(answer) != 0)
            {
                cout << "string is incorrect" << endl;
                attempts--;
                cout << attempts << endl;
                continue;
            }
            else
            {
                cout << "Congratulations" << endl;
                cout << attempts << endl;
            }

         //if (attempts >= 5)
         //{
         //    cout << "Too many attempts" << endl;
         //    break;
         //}

        cout << "Enter text: ";
        getline (cin,str);
        cout << "You entered: " << str << '\n';
        attempts++;
        cout << attempts << endl;
      } while (str != answer);
}

/*
bool mybool(string& ans)
{
    //if (ans = 'y' || ans = 'Y')
    if (ans = 'y')
    {
        cout << "Good! Lets Play!" << endl;
    }
    else
    {
        cout << "answer is false" << endl;
    }
}
*/
