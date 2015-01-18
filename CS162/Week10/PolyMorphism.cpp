#include <iostream>
#include <string>

class Car
{
    private:

    public:
        void method() {};

};

class BarCar:  public Car
{
    public:
        void someMethod()
        {std::cout << "It is in the BarCar" << std::endl;}

};

/*
 * pullmanCar
 * baggageCar
 * diningCar
 * barCar
 * bathRoomCar
 * engineCar
 * employeeCar
 * passengerFirstClassCar
 * passengerSecondClassCar
 * passengerGeneralCar
 */

int main()
{

}
