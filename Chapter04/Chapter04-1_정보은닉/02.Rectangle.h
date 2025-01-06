#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "02.Point.h"

class Rectangle
{
private:
    Point upLeft;
    Point lowRight;

public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const; // const함수 => 이 함수 내에서는 멤버변수의 값을 변경하지 않겠다.
};

#endif