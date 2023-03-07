#include <iostream>
#include "02.Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
    // 최소 범위 예외처리
    if (xpos < 0 || ypos < 0)
    {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }

    x = xpos;
    y = ypos;
    return true;
}

int Point::GetX() const // const 함수!
{
    return x;
}

int Point::GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    // 최소, 최대 범위 예외처리
    if (xpos < 0 || xpos > 100)
    {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    // 최소, 최대 범위 예외처리
    if (ypos < 0 || ypos > 100)
    {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }

    y = ypos;
    return true;
}