// http://cboard.cprogramming.com/cplusplus-programming/21362-getline-store-values-array.html
#include <iostream>
#include <fstream>
#include <ctime>

const int MAX = 100000;

int binarySearch(int a[], int size, int value);
void sortArray(int a[], int size);

int main(int argc, char **argv) {
        std::ifstream infile(argv[1]); //open the file;

if (infile.is_open() && infile.good()) {

    int count=0;
    int results;
    int array[MAX];
    int searchItem = 9;
 
    while(infile >> array[count])
        count++;

    infile.close();

    // before
   // for(int i=0; i<count; i++)
     //   std::cout << array[i] << std::endl;

    // sort array before search to ensure

    clock_t tStart = clock();
    sortArray(array, count);

    printf("Time taken for sorting: %0.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    // after
    //for(int i=0; i<count; i++)
      //  std::cout << array[i] << std::endl;

    // binary search only works if array is sorted
    clock_t tStartS = clock();
    results = binarySearch(array, MAX, searchItem);

    printf("Time taken for searching: %0.6fs\n", (double)(clock() - tStartS)/CLOCKS_PER_SEC);

    // check results and report back
    if (results == -1)
        std::cout << "That number does not exist in the array!" << std::endl;
    else
    {
        std::cout << searchItem << " were found in the array!" << std::endl;
    }


}

return 0;
}

int binarySearch(int a[], int size, int value) {
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (a[middle] == value) {
            found = true;
            position = middle;
        }
        else if (a[middle] > value)  // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;

}

void sortArray(int a[], int size)
{
    int temp,i,j;
    for(i=1;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
