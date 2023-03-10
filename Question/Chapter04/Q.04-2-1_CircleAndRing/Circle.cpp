#include <iostream>

#include "Circle.h"
#include "Point.h"

using namespace std;

void Circle::Init(int radius, Point &centerPoint)
{
    this->radius = radius;
    this->centerPoint = centerPoint;
}

void Circle::ShowRadiusInfo() const
{
    cout << "radius: " << radius << endl;
}

void Circle::ShowCenterPoint() const
{
    centerPoint.ShowPointInfo();
}