#include <iostream>
#include <cstdlib>
#include <iomanip>

/*
class Creature
{
private:
  int armor;
  int strengthPoints;

public:
  //attack_roll();
  //defense_roll();
  //Creature();  // constructor

};


int main()
{

  return 0;
}
*/



class Dice{
  public:
    Dice();
    int getNums();
    void Roll();
  private:
    int nNums;
};

Dice::Dice(){
    nNums=5;
}
int Dice::getNums()
{
    return nNums;
}
void Dice::Roll()
{
    nNums = rand()%6 + 1;
}

int main()
{
      Dice* ptrDice = new Dice;
      ptrDice -> getNums();
      for (int i = 0; i < 10; i++)
      {
       ptrDice->Roll();                // roll the 5 dice
       cout << "You rolled: ";
       cout << ptrDice->getNums() << setw(4);
       cout << std::endl;                             // print the outcome
      }

      delete ptrDice;
}



/*
class Dice() {
    public:
        int roll() { return rand() % 6 + 1; }
};


int main() {
    Dice* ptrDice = new Dice;
    for (int i=0; i<5; i++) {
        cout << "You rolled" << ptrDice->roll() << '\n';
    }
    delete ptrDice;
}
*/
