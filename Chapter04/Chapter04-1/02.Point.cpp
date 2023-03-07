#include <iostream>
#include "02.Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
    // �ּ� ���� ����ó��
    if (xpos < 0 || ypos < 0)
    {
        cout << "��� ������ �� ����" << endl;
        return false;
    }

    x = xpos;
    y = ypos;
    return true;
}

int Point::GetX() const // const �Լ�!
{
    return x;
}

int Point::GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    // �ּ�, �ִ� ���� ����ó��
    if (xpos < 0 || xpos > 100)
    {
        cout << "��� ������ �� ����" << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    // �ּ�, �ִ� ���� ����ó��
    if (ypos < 0 || ypos > 100)
    {
        cout << "��� ������ �� ����" << endl;
        return false;
    }

    y = ypos;
    return true;
}