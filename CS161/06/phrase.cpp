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

const int arrayOfWordsSize = 14;

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
    listValidCharacters();  //  print out valid alphabet
    selectPhrase();
    /guessMyPhrase(arrayOfWords, );

    //printArray(myArray, ARRAY_SIZE);

    return 0;

}

void listValidCharacters()
{
    char alphaBet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char capitalAlphaBet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout << "Please enter lower case characters such as:" << endl;
    for(int i=0; i < sizeof(alphaBet); i++)
    {
        cout << alphaBet[i];
    }

    cout << endl;
    cout << "or" << endl;

    cout << "Capital Letters such as:" << endl;
    for(int i=0; i < sizeof(capitalAlphaBet); i++)
    {
        cout << capitalAlphaBet[i];
    }

    cout << endl;
}


// I need to get guess from  selectPhrase() and pass it in to guessMyPhrase
void guessMyPhrase()
{
    //Ask the user to guess the secret phrase, one letter at a time
    //cin >> guess;
    attempts = 0;
    do
    {
        attempts++; 
        cout << "Guess the secret phrase: Please enter a character" << endl;
        cin >> guess;
        // need validation here to insure it is a character


    } while (attempts < 3);  // will increase later right now just need it to work
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
