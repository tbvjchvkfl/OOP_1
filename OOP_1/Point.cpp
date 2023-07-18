#include <iostream>
#include <cmath>
#include "Point.h"

void Point::Set(int x, int y)
{
    mX = x;
    mY = y;
}

double Point::Distance() const
{
    
    return sqrt(mX * mX + mY * mY);
}

void Point::Print() const
{
    std::cout << "(" << mX << ", " << mY << ")" << std::endl;
}
