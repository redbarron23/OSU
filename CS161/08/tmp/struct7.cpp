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
void print_vehicle(vehicle &v);

int main()
{
    vehicle my_car;

    set_vehicle(my_car, "The egg", "Ford", "Escort", "white", 4, 4, 6, 2.0, 30.5);

    print_vehicle(my_car);

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


void print_vehicle(vehicle &v)
{
    cout << "My car's name: " << v.name << endl;
    cout << "My car's make: " << v.make << endl;
    cout << "My car's model: " << v.model << endl;
    cout << "My car's color: " << v.color << endl;
    cout << "My car's door count: " << v.doors << endl;
    cout << "My car's wheel count: " << v.wheels << endl;
    cout << "My car's window count: " << v.windows << endl;
    cout << "My car's engine displacement in litres: " << v.engine_displacement << endl;
    cout << "My car's fuel economy in miles per gallon: " << v.mpg << endl;
}
