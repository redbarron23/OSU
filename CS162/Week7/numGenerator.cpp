#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    int number;
    string fname;
    cout<<"How many numbers do you want? : ";
    cin>>number;
    cout<<"Enter the file name that you want? : ";
    cin>>fname;

    string fnamebeg = fname + "beg";
    string fnamemid = fname + "mid";
    string fnameend = fname + "end";

    ofstream out1 (fnamebeg.c_str());
    ofstream out2 (fnamemid.c_str());
    ofstream out3 (fnameend.c_str());

    int beg = 0;
    int end = number-1;
    int mid = number/2;

    srand (time(NULL));
    for (int i=0; i<number; i++)
    {
        if (i != beg)
            out1<< rand()%9 << " ";
        else
            out1<< "9 ";

        if (i != mid)
            out2<< rand()%9 << " ";
        else
            out2<< "9 ";

        if (i != end)
            out3<< rand()%9 << " ";
        else
            out3<< "9 ";
    }

    out1.close();
    out2.close();
    out3.close();
    return 0;
}
