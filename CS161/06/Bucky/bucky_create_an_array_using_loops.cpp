// https://www.youtube.com/watch?v=Z9Wc8EsGjJY&list=PLCD2D08DD53165CA8&index=33
#include <iostream>
using namespace std;

int main()
{
    int bucky[9];

    cout << "Element - Value"  << endl; 

    for(int x=0; x <= 8; x++)
    {
        bucky[x] = 99;
        cout << x << " -------- " << bucky[x] << endl;

    }
    return 0;
}
