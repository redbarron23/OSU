#include <stdio.h>
using namespace std;

int main()
{
    int a = 5, b = 10;
    int *p1, *p2;
    p1=&a;
    p2=&b;
    *p1 = 10;
    p1 = p2;
    *p1 = 20;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;

}
