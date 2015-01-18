#include <iostream>
#include <fstream>
const int MAX = 20;


int main(int argc, char **argv) {
    std::ifstream infile(argv[1]); //open the file;

    if (infile.is_open() && infile.good()) {

        int count=0;
        int i;
        int results;
        int array[MAX];
     
        while(!infile.eof()) {
            while(infile >> array[count])
                count++;
        }


        // before
        for(i=0; i<count; i++)
            std::cout << array[i] << std::endl;
    }
        infile.close();

return 0;
}
