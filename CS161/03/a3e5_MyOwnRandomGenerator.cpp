/* (4 points) Write a piece of code that acts like a random number generator with the following behavior: (Note: you can use the rand function in your function, you do not have to make your own random number generator code from scratch!)
 * a. it should ask for two int values (one for the minimum value for some random number in a range and one for the maximum number in the range),
 * b. check that the values entered were int values,
 * (Note: there are a number of ways user input can be incorrect, so think of a few ways input could be
 * incorrect and implement them in code if you can)
 * Discuss: What ways did you think of that user input could be incorrect for this problem, how might you be able to detect and possibly correct those errors, and were you able to implement it?
 * ￼
 * c. generate a number within that range,
 * d. assign that value to some variable,
 * e. and print out the value along with some indicator so the user knows what the value is for (you will not always want to print values out, but in this case we want to see that our code is working)
 * Discuss: I am guessing you may find ways to do this with a one line expression, so feel free to share why it might be a good idea or bad idea to have this as a few separate lines instead of as a one line expression in our code?
 *
 *
 */

/* My Feedback:
 * why it might be a good idea or bad idea to have this  as a few separate lines instead of as a one line expression in our code?
 * Answer:
 
 * What ways did you think of that user input could be incorrect for this problem?
 * Answer:
 
 * how might you be able to detect and possibly correct those errors, and were you able to implement it?
 * Answer:
 */
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

int main() {
    int min, max;
    srand(time(0));
    cout << "Please enter a min number: " << endl;
    cin >> min;
    cout << "Please enter a max number: " << endl;
    cin >> max;


    for(int x = min; x<max; x++) {
        cout << min+(rand()%max) << endl;
    }

}
