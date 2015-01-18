#include <iostream>
#include <cstdlib>
#include <iomanip>

class Creature
{
protected:
  int armorPoints=0;
  int strengthPoints=0;
  int numSides=0;

public:
  //Creature();
  
  //setter
  void setStrengthPoints(int s)
  {strengthPoints = s;}
  void setArmorPoints(int a)
  {armorPoints = a;}
  
  //getter 
  int getStrengthPoints()
  {return strengthPoints;}
  int getArmorPoints()
  {return armorPoints;}

  // roll the dice
  int attackRoll();
  int defenseRoll();

};
   
// goblin subclass
class Goblin : public Creature
{
protected:
  int armor = 3;
  int strengthPoints = 8;
  int numSides = 6;

public:
  Creature();
  
  //setter
  void setStrengthPoints(int s)
  {strengthPoints = s;}
  void setArmorPoints(int a)
  {armorPoints = a;}
  
  //getter 
  int getStrengthPoints()
  {return strengthPoints;}
  int getArmorPoints()
  {return armorPoints;}

  // roll the dice
  int attackRoll();
  int defenseRoll();
};

// default constructor  before battle begins
Goblin() : Creature()
{
    this->armorPoints = 3;
    this->strengthPoints = 8;
}

// constructor that sets armor and strength
Goblin(int x, int y, int n) : Creature() 
{
    armorPoints = x;
    strengthPoints = y;
    numSides = n;
}

int attack_roll() const
{
    return (rand() % numSides) + 1;
}

int defenseRoll() const
{
    return (rand() % numSides) + 1;
}


int main()
{

  Goblin g;
  Creature *goblin1 = &g;
  goblin1->attack_roll();
  goblin1->defenseRoll();

 
  return 0;
}
