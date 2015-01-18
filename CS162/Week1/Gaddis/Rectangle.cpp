//Contents of Rectangle.cpp
// File Rectangle.cpp -- Rectangle class function implementation file
#include "Rectangle.h"
/*******************************************************************
 *                    Rectangle::setLength                         *
 * If the argument passed to the setLength function is zero or     *
 * greater, it is copied into the member variable length, and true *
 * is returned. If the argument is negative, the value of length   *
 * remains unchanged and false is returned.                        *
*******************************************************************/
bool Rectangle::setLength(double len)
{
    bool validData = true;
    
    if (len >= 0)
        length = len;
    else
        validData = false;

    return validData;
}

/*******************************************************************
*                    Rectangle::setWidth                           *
* If the argument passed to the setWidth function is zero or       *
* greater, it is copied into the member variable width, and true   *
* is returned. If the argument is negative, the value of width     *
* remains unchanged and false is returned.                         *
*******************************************************************/
bool Rectangle::setWidth(double w)
{
    bool validData = true;
    
    if (w >= 0)            // if w is valid
        width = w;         //  copy it to width
    else
        validData = false; //  else leave width unchanged
    
    return validData;
}

/*******************************************************************
*                       Rectangle::getLength                       *
* This function returns the value in member variable length.       *                 
*******************************************************************/
double Rectangle::getLength()
{
    return length;
}

/*******************************************************************
*                       Rectangle::getWidth                        *
* This function calculates and returns the area of the rectangle.  *                 
*******************************************************************/
double Rectangle::getWidth()
{
    return width;
}

/*******************************************************************
*                       Rectangle::getArea                         *
* This function calculates and returns the area of the rectangle.  *                 
*******************************************************************/
double Rectangle::getArea()
{
    return length * width;
}