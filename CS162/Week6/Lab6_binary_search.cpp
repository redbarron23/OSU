/*
 * sort and display vector
 * data set must be sorted before peforming binary search
 * Still working on binary search and outputing sort vector to file via argv
 */

#include <iostream>
#include <fstream>
#include <vector>


void sortVector(std::vector<int> &);
void displayVector(std::vector<int>);

int main(int argc, char **argv)
{
    std::fstream fp;
    std::vector<int> numbers;
    int number;

    fp.open(argv[1], std::ios::in );
    std::ofstream myfile;
     myfile.open (argv[2]);

    if(fp.is_open()){
      while(fp >> number){
         numbers.push_back(number);
         fp.get();
      }
    }

    fp.close();

    // before sort
    std::cout << "Numbers:\n";
    displayVector(numbers);

    // Sort the values
    sortVector(numbers);

    //after sort
    displayVector(numbers);

    if (std::binary_search (numbers.begin(), numbers.end(), 5))
        std::cout << "The number 5 was found!\n"; else std::cout << "not found.\n";

    //myfile << displayVector(numbers);
    
    myfile.close();

    return 0;
}

void sortVector(std::vector<int> &numbers)
{
    int  temp;
    bool swap;

    do
    {  swap = false;
       for (unsigned count = 0; count < numbers.size()-1; count++)
       {
          if (numbers[count] > numbers[count + 1])
          {
                temp = numbers[count];
                numbers[count] = numbers[count + 1];
                numbers[count + 1] = temp;
                swap = true;
          }
       }
       } while (swap);
}


void displayVector(std::vector<int> numbers)
{
       for (unsigned count = 0; count < numbers.size(); count++)
                 std::cout << numbers[count] << " ";
       std::cout << std::endl;
}
