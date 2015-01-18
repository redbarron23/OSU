#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
  
  if(argc != 2) {
    std::cout << "Usage: " << argv[0] << " <count> <filename> " << std::endl;
    return -1;
  }  

  std::ifstream outfile; 
  outfile.open(argv[2]);
  if (!outfile)
  {
      std::cout << "ERROR. File Name Required\n";
      return 1;
  } 
  
  int i = atoi(argv[1]);
  std::cout << "The number is: " << i << std::endl;
  std::cout << "The file name is: " << argv[2] << std::endl;
  

}
