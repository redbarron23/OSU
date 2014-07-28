#include <stdio.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5}; //array named a
    int *p1;  // create pointer
    p1 = &a[1]; // assign p1 to second element of the set
    printf("*p1 = %d\n", *p1);  //print out second element
    p1 = p1+2;                 // add 2 to the second element
    printf("*p1 = %d\n", *p1);  // print out the new second element

    return 0; 
}
