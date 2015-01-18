#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>

int main(int argc, char **argv)
{
    std::ifstream infile(argv[1]);
    std::ifstream is(infile);
    std::istream_iterator<int> start(is), end;
    std::vector<int> numbers(start, end);
    std::cout << "Read " << numbers.size() << " numbers" << std::endl;

  for ( auto &i : numbers ) {
          std::cout << i << std::endl;
  }

    return 0;
}
/*
int main()
{
  std::ifstream is("inputfile");
  std::istream_iterator<int> start(is), end;
  std::vector<int> numbers(start, end);
  std::cout << "Read " << numbers.size() << " numbers" << std::endl;

  for ( auto &i : numbers ) {
          std::cout << i << std::endl;
  }
}
*/
