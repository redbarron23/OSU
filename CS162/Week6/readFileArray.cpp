#include <iostream>
#include <fstream>
#include <string>

int MAX = 20;
int main(int argc, char **argv)
{
    std::ifstream infile(argv[1]);
    std::string line;
    int i = 0;
    int array[MAX];
   
    /*
    while (! infile.eof())
    {
        getline (infile,line);
        for (int i = 0; i < MAX; i++)
            array[i] = line;
    }
    */

    /*
    int index = 0;
    while (! infile.eof() )
    {
      getline (infile, line);
      int num = atoi(line.c_str());
      array[index++] << num;
    }
    */
   
    
    for(i=0; i<MAX; i++)
       std::cout << array[i] << std::endl;
    infile.close();
}
