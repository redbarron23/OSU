#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
const int arrayOfWordsSize = 14;

// b. Select a phrase by randomly selecting a number of words from your array of words
// Note: perhaps use underscores or hyphens to denote   letters not yet guessed,
void selectPhrase();
int main()
{
    //randomly selecting a number of words from your array of words
    selectPhrase();

    return 0;

}


void selectPhrase()
{
    srand (time(NULL));
    int randomVar = rand()%arrayOfWordsSize;
    char arrayOfWords[] = "I Love Summer!";
    for(int i = 0; i < randomVar; i++)
    { 
        cout << arrayOfWords[i];
        char guessString = arrayOfWords[i]; // build new string off random
    }

    string guessString; // convert C- String to C++ style
    cout << guessString;
}
