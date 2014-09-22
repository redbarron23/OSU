#include <iostream>
using namespace std;

int findSmallestRemainingElement (int array[], int size, int index)
void sort (int array[], int size)

int main()
{
    int myArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
     
    return 0;
}

int findSmallestRemainingElement (int array[], int size, int index)
{
      int index_of_smallest_value = index;

      for (int i = index + 1; i < size; i++)
      {
            if ( array[ i ] < array[ index_of_smallest_value ]  ) 
            { 
                index_of_smallest_value = i; 
            }
      }

      return index_of_smallest_value;
}

void sort (int array[], int size)
{
      for ( int i = 0; i < size; i++ )
{
int index = findSmallestRemainingElement( array, size, i );
            swap( array, i, index );
      }
}
