#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    cout << argc << endl; // argc is always 1
    cout << argv << endl;
    cout << argv[0] << endl; // programe name is 1st
    cout << argv[0][0] << endl; // first character in string
    cout << strlen(argv[0]) << endl;

    cout << &argv << endl;
    cout << argv << endl;

    cout << argv[1] << endl;

    for(int i=1; i<argc; i++)
        cout << argv[i] << endl;

    // can we change argv, is it constant...
    //delete [] argv[0]; // never delete off stack!
    //delete [] argv;
    //argv = new char*[3];

    return 0;

}
