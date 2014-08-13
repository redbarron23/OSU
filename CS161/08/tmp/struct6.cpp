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

void set_vehicle(vehicle &v, string name, string make, string model, string color, int doors, int wheels, int windows, float engine_displacement, float mpg);

int main()
{
    vehicle my_car;

    set_vehicle(my_car, "The egg", "Ford", "Escort", "white", 4, 4, 6, 2.0, 30.5);

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



                 // pass in struct by reference
void set_vehicle(vehicle &v, string name, string make, string model, string color, int doors, int wheels, int windows, float disp, float mpg) 
{
    v.name = name;
    v.make = make;
    v.model = model;
    v.color = color;
    v.doors = doors;
    v.wheels = wheels;
    v.windows = windows;
    v.engine_displacement = disp;
    v.mpg = mpg;
}
