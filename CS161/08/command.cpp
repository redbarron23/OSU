/*
 * Author: james Hourihane
 * class: CS 161
 * program name: command.cpp
 * Desc: take in user name and age and print it out by pointer
 */

/*
 * . (2) Create one or more additional programs from above to be command line arguments friendly (take in 
 * values from the command line instead of asking for them as user input)
 * (an advantage to command line arguments is that it can help with automation by not requiring human input 
 * and instead get those arguments from a file or program fed input (which we can talk about separate of the 
 * assignment or later when you learn about file IO))
 */

#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

const int NAMELEN = 20;     // Max name length

struct person {     // Personal data
    char name[NAMELEN];     // Name
    int  age;       // Age
};



int main(int argc, char* argv[])
{
      struct person my_person;
      person *person_ptr=&my_person;

      if(argc == 3)
      {
          // input name and age into struct 
          strcpy ( my_person.name, argv[1]);
          my_person.age = atoi(argv[2]);
          //atoi(argv[i])
          
          // print out name and age
          cout << "You have entered: " << person_ptr->name << " Age: " << person_ptr->age << endl << endl;
      } 
      else
      {
          cout << "Usage:  command name age " << endl;
      }

      return(0);

}
