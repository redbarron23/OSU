/*
* stores player 1's secret word
* secret word will only be allowed to contain letters
* the program repeatedly asks for single letters from player 2,
* the program displays correct letter guesses and the word so far based on those correct guesses,
*  player two will only get so many guesses (how will you decide this?),
*  when done, the program will need to show the secret word, list which letters were missing still, and ask if the players want to play again.
*
*/

#include <iostream>
#include <string>
using namespace std;

string playerOneSecretWord;

void requestOneLetterfromPlayer2() //prototype

int main() {


   return 0;
}

void requestOneLetterfromPlayer2()
{
    while(true) 
    {
        cout << "Player2 please submitt a letter\n"; 
    } 
}

void checkplayerOneSecretWord()
{
     // compare strings to letters only no numbers or punct.
     // use isalpha :2
     //
     for (i = 0; i < playerOneSecretWord.length(); i++) {
         if(playerOneSecretWord[i])
         {

         }
         else
         {
             cout << "not a character\n";
             break;  //hmm is it posible to break out of function and go back to main?
         }
     }
}


