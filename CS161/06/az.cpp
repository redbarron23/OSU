#include <iostream>
using namespace std;

void listValidCharacters();
int main()
{
    listValidCharacters();
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
