#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include "Point.h"

class Circle
{
private:
    int radius;
    Point centerPoint;

public:
    void Init(int radius, Point &centerPoint);
    void ShowRadiusInfo() const;
    void ShowCenterPoint() const;
};

#endif