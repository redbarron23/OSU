// http://www.cplusplus.com/doc/tutorial/structures/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t 
{
    string title;
    int year;
};


int main()
{
    string mystr;

    movies_t amovie;  // Declares a new struct type called amovie
    movies_t *pmovie; // *pmovies pointer is created
    pmovie = &amovie; // pmovie now points to the address of struct name amovie

    cout << "Enter title: ";
    getline (cin, pmovie->title); // getline with arrow notation
    cout << "Enter year: ";
    getline (cin, mystr);  // getline used to input into mystr
    (stringstream) mystr >> pmovie->year;

    cout << "\nYou have entered:\n";
    cout << pmovie->title;                 // output movie title  dereferences pointer:1

    cout << " (" << pmovie->year << ")\n"; // output movie year

    return 0;

}
