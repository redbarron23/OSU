// rule of three
// https://www.youtube.com/watch?v=PXcRe-W2w7s

#include <iostream>
#include "GCharacter.hpp"

// constructor
GCharacter::GCharacter(string n, int cap)
{
  name = n;
  capacity = cap;
  used = 0;
  toolHolder = new string[cap];
}

// Copy Constructor
GCharacter::GCharacter(const GCharacter& source)
{
  std::cout "Copy Constructor called." << std::endl;
  this->name = source.name;
  this->capacity = source.capacity;
  this->used = source.used;
  toolHolder = new string[source.capacity];

  copy(source.toolHolder, source.toolHolder + used, toolHolder);
}

// Overloaded Assignment Operator
GCharacter& CHaracter::operator=(const GCharacter& source)
{
  std::cout << "Overloaded Assignment called." << std::endl;

  // Check for self assignment
  // gc1 = gc1;
  if (this == &source)
  {
    return *this;  
  }

  this->name = source.name;
  this->capacity = source.capacity;
  used = source.used;

  copy(source.toolHolder, source.toolHolder + used, this->toolHolder);

  return *this;
}

//Destructor
GCharacter::~GCharacter()
{
  std::cout << "Destructor called for " << this.name
            << " @ this memory location " << this << std::endl;
  delete[] toolHolder;
}

int main()
{
  // Inserting a new tool into our toolHolder
  void GCharacter::insert(const string& toolName)
  {
    if (used == capacity)
    {
      std::cout << "Tool holder is full. Cannot add any additional tools" << std::endl;
    }
    else
    {
      toolHolder[used] = toolName;
      used++;
    }
  }

  std::ostream& operator<<(std::ostream& os, const GCharacter& gc)
  {
    os << "Game Character " << gc.name <<
      "\nhas the following tools:" << std::endl; << "| ";

    for(int i = 0; i < gc.used; i++)
    {
      os << gc.toolHolder[i] + " | ";
    }
  }

  return os << std::endl;

  return 0;
}
