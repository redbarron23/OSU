/*
* (4 points) Find out how to use a simple random number:
* a. Visit http://www.cplusplus.com/reference/cstdlib/rand/, my sample code directory, the tutorials I mention,
* and any searches you want (including the book if you can find something good in there :) ),
* b. Print some random numbers using a loop (say 10 of them),

* Discuss: Run the program a few times and see what happens, 
* did you get the same numbers multiple times? 
* What is happening here? Can we fix this?
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
 * Doesn't seem to random
 * Can we make this more random than it is?
 */

int main() {

    int myRandomNum;

    /* initialize random seed: */
    srand (time(NULL));

    /* generate secret number between 1 and 10: */

    //cout << myRandomNum << endl;

    for (int i=0; i< 11; i++) {
        myRandomNum = rand() % 10 + 1;
        cout << myRandomNum << endl;
    }


}

