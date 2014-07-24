#include <iostream>
#include <string>
using namespace std;

int playGame(string word)
{
    int misses = 0;
    string display = word;
    for(int i=0; i < display.length(); i++)
    {
        display[i] = '*';

        while(1) {
            cout << "Enter a letter in word ";
            cout << display << " : ";
            char response;
            cin >> response;

            bool goodGuess = false;
            for (int i=0; i < word.length(); i++)
            {
                if (response == word[i])
                    display[i] = word[i];
            }

            if (!goodGuess)
            {
                misses++;
                cout << response << " is not in the word
            }

        }
    }


}

int main() {
   playGame("Programming");

   return 0;
}
