#include <iostream>
#include <cstdlib>

class Dice
{
public:
      Dice();
      Dice( int numSides);
      virtual int rollDice() const;
protected:
      int numSides;
};

Dice::Dice()
{
  numSides = 6;
  std::srand(time(NULL)); // Seeds random number generator
}

Dice::Dice(int numSides)
{
  this->numSides = numSides;
  std::srand(time(NULL)); // Seeds random number generator
}

int Dice::rollDice() const
{
  return (rand() % numSides) + 1;
}

// Take two dice objects, roll them, and return the sum
int rollTwoDice(const Dice& die1, const Dice& die2){
  return die1.rollDice() + die2.rollDice();
}

int main(){

  // create 2 objects of Dice
  Dice d1(2);
  Dice d2(8);

  // run loop 10 times
  for(int i=0; i < 10; i++){
    // roll both the dice and display the result
    int result = rollTwoDice(d1,d2);

    std::cout << std::endl << "Iteration "<< (i+1) << ":" << std::endl;
    std::cout << "rollTwoDice: " << result << std::endl;
  }

  return 0;
}
