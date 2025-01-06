#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
    : upLeft(x1, y1), lowRight(x2, y2) // 이니셜라이져
// Rectangle객체의 생성자에서 멤버 객체인 upLeft와 lowRight의 이니셜라이져 호출
{
    // empty
}

void Rectangle::ShowRecInfo() const
{
    cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
    cout << upLeft.GetY() << ']' << endl;
    cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
    cout << lowRight.GetY() << ']' << endl;
}