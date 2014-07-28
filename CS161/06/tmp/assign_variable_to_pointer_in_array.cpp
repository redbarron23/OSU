#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5}; // create array an named 'a'
    int *p1;     // create pointer p1
    p1 = &a[1];  // assign pointer to second element
    int dave;  //create variable dave
    dave = *(p1+2);  // add 2 to second element of array
    printf("*p1 = %d\n", *p1);  // print out *p1
    printf("dave = %d\n", dave); // print out dave

    return 0; 
}
