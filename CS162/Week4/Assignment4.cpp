#include <iostream>
#include <cstdlib>
//#include <srand>

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
 srand(time(NULL)); // Seeds random number generator
}

Dice::Dice(int numSides)
{
 this->numSides = numSides;
 srand(time(NULL)); // Seeds random number generator
}

int Dice::rollDice() const
{
 return (rand() % numSides) + 1;
}

// Take two dice objects, roll them, and return the sum
int rollTwoDice(const Dice& die1, const Dice& die2)
{
 return die1.rollDice() + die2.rollDice();
}

/*
 * Write a main function that creates two Dice objects with a number of sides of your choosing. 
 * Invoke the rollTwoDice function in a loop that iterates ten times and verify that the functions 
 *are working as expected. 
*/

int main(int argc, char **argv)
{
    // Two Dice
    Dice myDice;
    myDice.rollDice(rollTwoDice);

    return 0;
}
