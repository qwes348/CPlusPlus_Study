#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point
{
private:
    int xpos, ypos;

public:
    void Init(int x, int y);
    void ShowPointInfo() const;
};
#endif