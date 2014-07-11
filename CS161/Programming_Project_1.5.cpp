/*
 * James Hourihane
 * Student ID:932509127
 * Programming Project” 1.5
*/

/*
 *     Before beginning any coding on a project, draw or write out approximately what the portion of the program will look like. Be sure that you show us that you understand the various aspects of the problem, the solution,
 *     and that you will be able to test your solution (think of your tests as you are designing and coding up your solution, this is called test driven development and it works wonders for writing complete programs).
 */

/*
 * It is legal to hold the meeting and tells how many additional people may legally attend.
 * In addition you may allow people2attend.
 */

#include <iostream>
using namespace std;


int main() {

    int maxRoomCap;
    int numberPeople;

    // Room Requirements and Capacity
    cout << "Please input the Room capacity:" << endl;
    cin >> maxRoomCap;
    cout << "Please input how many people are attending:" << endl;
    cin >> numberPeople;   

    // Test conditions 
    if (numberPeople < maxRoomCap) {
        cout << "It is legal to hold the meeting and tells how many additional people may legally attend." << endl;
        cout << "In addition you may allow " << maxRoomCap - numberPeople << " people attend." << endl;
    }
    else {
        cout << "The meeting cannot be held as planned due to fire regulations" << endl;
        cout << "You will need to exclude: " << maxRoomCap - numberPeople <<  " people in order to meet regulations." << endl; 
    }

}
