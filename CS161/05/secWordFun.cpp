/*
Write a 2 player word guess program that does the following:
a. (05) Asks one user to enter in the secret word to be guessed (you can decide on length limits if you want),
b. (05) Accepts and stores that word into a variable,
c. (10) Uses a function to decide if the word is a valid word (no special characters, spaces, or numbers
should be allowed),

d. (15) Uses a loop to repeatedly do the following (you choose how many guesses allowed, perhaps related to word length):
i. Show the user what (if any) of the word has been correctly guessed so far,
(Note: perhaps using underscores or hyphens to denote letters not yet guessed)
ii. Asks the other user to guess a letter in the secret word,
(Note: you might consider listing the valid letters to help the user choose) (Note: tell the user how many guesses they have left)

iii. Checks if the guess is a valid letter (best to use a function to keep the code in smaller sections)
iv. Tells the user whether the letter is in the word (and if it was in it multiple times),
(Note: likely using an if statement and loop here somewhere...)

v. Changes the list of possible letters to reflect the user's newest guess,
(Note: this can be tricky, but remember that you can usually use multiple variables to track multiple aspects of related information!)

e. (10) Tells the second user whether they got the secret word or ran out of guesses,
i. if the second user ran out of guesses, then the program tells them:
1. what the secret word was,
2. what letters were missing from their guesses,
f. (05) Lets the users to play again (without terminating and restarting the program or calling the main function...),
(Note: you might consider making a function that executes all these steps and a loop that calls this function as necessary)
(Note: you should not ever need to call the main function yourself) Remember to submit your report and source files to TEACH before the end of Sunday.
Remember to keep discussion going!
Submission Checklist:
Exercises (20 pts): randFun.cpp
refFun.cpp sort.cpp recFun.cpp recFun2.cpp savings.cpp
Project (50 pts): secWordFun.cpp
Report, in PDF format, must address these four sections (30 pts):
Understanding Design Testing Reflection
The implementation part of the assignment is the .cpp file you submit.
*/

#include <iostream>
#include <string>
using namespace std;

void validWord(string& guess1); 
int main()
{
    string player1Guess;
    string answer = "foo";
    int attempts = 1;

    cout << "Player1: " << endl;
    cout << "Please enter a string for secret word ";
    //cin >> player1Guess;
    getline (cin, player1Guess);
    validWord(player1Guess);

    //while(attempts < 5)
    //{
        // syntax to compare strings
     //   if (guess1.compare(answer) != 0)
      //  {
       //     cout << "strings are incorrect" << endl;
        //}

    //}



    /*
     *Uses a loop to repeatedly do the following 
     *(you choose how many guesses allowed, perhaps related to word length):
     *i. Show the user what (if any) of the word has been correctly guessed so far,
     *(Note: perhaps using underscores or hyphens to denote letters not yet guessed)
     *ii. Asks the other user to guess a letter in the secret word,
     */

    //while()
    //{
//
//    }

    /*
     * iii. Checks if the guess is a valid letter (best to use a function to keep the code in smaller sections)
     * iv. Tells the user whether the letter is in the word (and if it was in it multiple times),
     * (Note: likely using an if statement and loop here somewhere...)
     */ 

    /*
     * iv. Tells the user whether the letter is in the word (and if it was in it multiple times),
     * (Note: likely using an if statement and loop here somewhere...)
     *
     * v. Changes the list of possible letters to reflect the user's newest guess,
     * (Note: this can be tricky, but remember that you can usually use multiple variables to track multiple aspects of related     information!)
     */
}

void validWord(string& guess1)
{
    for (int i = 0; i < guess1.length(); i++) {
        //if (isdigit(guess1[0]))
        if (isdigit(guess1.at(i)))
        {
            // str.at(i);
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
