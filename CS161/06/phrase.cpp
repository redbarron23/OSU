/*
 * name:  James Hourihane
 * date:  08/03/2014
 * class: CS 161
 * desc:  create an array of words have user guess the word one string at a time
 * file:  phrase.cpp
*/
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

//a. Create an array of words consisting only of letters
void listValidCharacters();

// b. Select a phrase by randomly selecting a number of words from your array of words
// Note: perhaps use underscores or hyphens to denote   letters not yet guessed,
void selectPhrase();

//c. Ask the user to guess the secret phrase, one letter at a time
void guessMyPhrase();

// Show the user what (if any) of the phrase has been correctly guessed so far, 
void printArray(int array[], int size);

int main()
{
    listValidCharacters();  //
    guessMyPhrase();

    for(int i=0; i < sizeof(arrayOfWords); i++)
     {
         cout << arrayOfWords[i] << endl;
     }

    printArray(myArray, ARRAY_SIZE);

    return 0;

}

void listValidCharacters()
{
    cout << "Valid Characters are: [a-z] or [A-Z]   such as:  ABC or abc or Abc" << endl;

}

void guessMyPhrase()
{
    char guess;
    int arrayOfWordsSize = 13;
    srand (time(NULL));
    int randomVar = rand()%arrayOfWordsSize;
    //cout << randomVar << endl;
    //char arrayOfWords[] = {"I" "Love" "Summer!"};
    char arrayOfWords[] = "I Love Summer!";
    //Ask the user to guess the secret phrase, one letter at a time
    cout << "Guess the secret phrase: Please enter a character" << endl;
    cin >> guess;

}

void printArray(int array[], int size){

    static int printCount = 0;

    //loop for moving through each element of the array
    for(int i = 0; i < size; i++){
        if(printCount == 0){
            cout << "The element value of myArray " << (i + 1) << " is: " << array[i] << endl;
        }
        else{
            cout << "\nThe element value of myNextArray " << (i + 1) << " is: " << array[i];
        }
    }
}
