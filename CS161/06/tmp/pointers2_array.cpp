#include <stdio.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int *p1;
    p1 = &a[1];  // gets address of this element
    printf("*p1 = %d\n", *p1);
    p1++; // point to the next element
    printf("*p1 = %d\n", *p1);
    p1++; // point to the next element
    printf("*p1 = %d\n", *p1);

    return 0; 
}
