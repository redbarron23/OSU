// http://cboard.cprogramming.com/cplusplus-programming/21362-getline-store-values-array.html
#include <iostream>
#include <fstream>
int MAX = 100;
int main(int argc, char **argv) {
        std::ifstream infile(argv[1]); //open the file;

if (infile.is_open() && infile.good()) {

    int count=0;
    int i;
    double array[MAX];
 
    while(infile >> array[count])
        count++;

    for(i=0; i<count; i++) 
        std::cout << array[i] << std::endl;

    infile.close();
}

return 0;
}
