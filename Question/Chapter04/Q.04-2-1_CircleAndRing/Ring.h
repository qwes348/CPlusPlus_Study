#ifndef __RING_H__
#define __RING_H__

#include <iostream>
#include "Circle.h"

class Ring
{
private:
    Circle innerCircle;
    Circle outerCircle;

public:
    bool Init(int innerX, int innerY, int innerRadius,
              int outerX, int outerY, int outerRadius);
    void ShowRingInfo() const;
};

#endif