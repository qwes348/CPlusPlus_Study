#include <iostream>
#include "Circle.h"
#include "Point.h"
#include "Ring.h"

using namespace std;

bool Ring::Init(int innerX, int innerY, int innerRadius,
                int outerX, int outerY, int outerRadius)
{
    if (innerX > outerX || innerY > outerY || innerRadius > outerRadius)
    {
        return false;
    }

    Point innerCenter;
    Point outerCenter;
    innerCenter.Init(innerX, innerY);
    outerCenter.Init(outerX, outerY);

    innerCircle.Init(innerRadius, innerCenter);
    outerCircle.Init(outerRadius, outerCenter);

    return true;
}

void Ring::ShowRingInfo() const
{
    cout << "Inner Circle Info..." << endl;
    innerCircle.ShowRadiusInfo();
    innerCircle.ShowCenterPoint();

    cout << "Outer Circle Info..." << endl;
    outerCircle.ShowRadiusInfo();
    outerCircle.ShowCenterPoint();
}