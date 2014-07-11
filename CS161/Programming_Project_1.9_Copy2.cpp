#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int gum, candybars, coupons, g_remainder, c_remainder;
    //int candyBars = (coupons/10);
    //int c_remainder = (coupons % 10);
    cout << "How many coupons did you win?" << endl;
    cin >> coupons;
   
    if (coupons == 3) {  // no remainder
        cout << "You get a Gumball." << endl;
    }
    else if (coupons == 10) {  // no remainder
        cout << "You get a candy bar." << endl;
    }
    else if (coupons == 13) { //  no remainder
        cout << "You get a candy bar and a gum ball." << endl;
    }
    else if (coupons > 13) {// if you have some coupons left over 
        candybars = (coupons/10);
        c_remainder = (coupons % 10);
        gum = (c_remainder / 3);
        g_remainder = (c_remainder % 3);
        cout << "You win candy bars: " << (candybars) << endl;
        cout << "You win gumball: " << (gum) << endl;
        cout << "Remaining coupons: " << (g_remainder) << endl;
    }
    else { // coupons < 3 
        cout << "Sorry better luck next time." << endl;
    }
    

    return 0;

}
