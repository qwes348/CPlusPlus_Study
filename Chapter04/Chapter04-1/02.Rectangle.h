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
    void ShowRecInfo() const; // const�Լ� => �� �Լ� �������� ��������� ���� �������� �ʰڴ�.
};

#endif