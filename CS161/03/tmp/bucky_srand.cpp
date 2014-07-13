#include <iostream>
#include <cstdlib>
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
