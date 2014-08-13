#include <iostream>
#include <string>
using namespace std;


struct vehicle
{
    string name;
    string make;
    string model;
    string color;
    int doors;
    int wheels;
    int windows;
    float engine_displacement;
    float mpg;
};

int main()
{
    vehicle my_car;
    my_car.name = "The egg";
    my_car.make = "Ford";
    my_car.model = "Escort";
    my_car.color = "white";
    my_car.doors = 4;
    my_car.wheels = 4;
    my_car.windows = 6;
    my_car.engine_displacement = 2.0;
    my_car.mpg = 30.5;

    cout << "My car's name: " << my_car.name << endl;
    cout << "My car's make: " << my_car.make << endl;
    cout << "My car's model: " << my_car.model << endl;
    cout << "My car's color: " << my_car.color << endl;
    cout << "My car's door count: " << my_car.doors << endl;
    cout << "My car's wheel count: " << my_car.wheels << endl;
    cout << "My car's window count: " << my_car.windows << endl;
    cout << "My car's engine displacement in litres: " << my_car.engine_displacement << endl;
    cout << "My car's fuel economy in miles per gallon: " << my_car.mpg << endl;

    return 0;
}
