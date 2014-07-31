#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Hello creating a file" << endl;
    std::ofstream o("Hello.txt");
    o << "Hello, World\n" << std::endl;
    return 0;
}
