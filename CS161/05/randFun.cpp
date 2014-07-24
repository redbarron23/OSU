#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

// credit to Takagi Shiro for solution
// https://piazza.com/class/huqen0l55wf4lp?cid=685#
void rand_int(const int& min, const int& max, int& val);

int main()
{
    int minNum=1;
    int maxNum=100;
    int generatedNum;
    rand_int(minNum, maxNum, generatedNum);
    cout << "The random number generated between [" << minNum << " and " << maxNum << "] is " << generatedNum << endl;

    return 0;
}

void rand_int(const int& min, const int& max, int& val)
{
    srand(time(NULL));
    val = rand() % max + min;
}
