// https://www.youtube.com/watch?v=dSfjBoip4c0
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    //string bucky;
    //cin >> bucky;
    // will only get the first character
    //cout << "the string i entered is " << bucky << endl;


    string x;
    getline(cin, x);
    // will get the entire line
    cout << x << endl;

    // also this is valid
    //string s1("hampter");
    
    //also this works
    //s2 = s1;
    //s3.assign(s1);
    
    // get the 3rd element using the at function
    //string s1 = "omqjskjaass";
    //cout << st.at(3)
    
    // another way
    //for(int x=0; x<s1.length();x++)
   // {
   //     cout << s1.at(x);
   // }


    return 0;

}
