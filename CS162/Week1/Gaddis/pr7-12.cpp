// This program that uses the Rectangle class.
// The Rectangle class declaration is in file Rectangle.h
// The Rectangle member function definitions are in Rectangle.cpp
// These files should all be combined into a project.
#include <iostream>
#include "Rectangle.h"   // Rectangle class declaration
using std::cout;
using std::cin;
using std::endl;

int main()
{

    Rectangle box;      // Declare a Recrtangle object
    double boxLength, boxWidth;

    // Get box length and width;
    std::cout << "This program will calculate the area of a rectangle.\n";
    std::cout << "What is the length? ";
    std::cin >> boxLength;
    std::cout << "What is the width? ";
    std::cin >> boxWidth;

    // Call member functions to set box dimensions.
    // If the function call returns false, it means the
    // argument sent to it was invalid and not stored.
    if (!box.setLength(boxLength))     // Store the length
      std::cout << "Invalid box length entered.\n";
    else if (!box.setWidth(boxWidth))
      std::cout << "Invalid box width entered.\n";
    else
    {
      // Call member functions to get box information to display
        std::cout << "\nHere is the rectangle's data:\n";
        std::cout << "Length: " << box.getLength() << std::endl;
        std::cout << "Width : " << box.getWidth() << std::endl;
        std::cout << "Area : " << box.getArea()  << std::endl;
    }
    return 0;
}
