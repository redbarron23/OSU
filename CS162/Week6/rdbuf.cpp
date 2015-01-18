#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
   if (argc < 2) {
      std::cout << "usage: " << argv[0] << " <filename>\n";
      return 2;
   }

   std::ifstream fin(argv[1]);
   if (fin) {
      std::stringstream ss;
      // this copies the entire contents of the file into the string stream
      ss << fin.rdbuf();
      // get the string out of the string stream
      std::string contents = ss.str();
      std::cout << contents;
      // construct the vector from the string.
      std::vector<int> buff(contents.begin(), contents.end());
   }
   else {
      std::cout << "Couldn't open " << argv[1] << "\n";
      return 1;
   }

   for ( auto &i : contents ) {
          std::cout << i << std::endl;
   }
   return 0;
}
