#include <stdio.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5}; // create array an named 'a'
    int **ramon;     
    int *paul;
    int melissa = 5;
    paul = &melissa;
    ramon = &paul;
    printf("ramon = %d\n", ramon);
    printf("&paul = %d\n", &paul);
    printf("*ramon = %d\n", *ramon);
    printf("&melissa = %d\n", &melissa);
    printf("**ramon = %d\n", **ramon);

    return 0; 
}
