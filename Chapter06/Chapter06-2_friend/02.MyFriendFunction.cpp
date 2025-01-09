// 함수를 대상으로 friend 선언을 해보는 예제

#include <iostream>
using namespace std;

class Point; // Point가 클래스의 이름임을 선언

class PointOP
{
private:
    int opcnt;

public:
    PointOP() : opcnt(0) {}

    Point PointAdd(const Point &, const Point &);
    Point PointSub(const Point &, const Point &);
    ~PointOP()
    {
        cout << "Operation times: " << opcnt << endl;
    }
};

class Point
{
private:
    int x;
    int y;

public:
    Point(const int &xpos, const int &ypos) : x(xpos), y(ypos) {}

    // 함수를 대상으로 friend 선언
    friend Point PointOP::PointAdd(const Point &, const Point &);
    friend Point PointOP::PointSub(const Point &, const Point &);
    friend void ShowPointPos(const Point &);
};

Point PointOP::PointAdd(const Point &pnt1, const Point &pnt2)
{
    opcnt++;
    // 이 함수는 Point클래스에서 friend 선언을 했기 때문에 Point 클래스의 private 멤버 변수에 접근 가능하다
    return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::PointSub(const Point &pnt1, const Point &pnt2)
{
    opcnt++;
    // 이 함수는 Point클래스에서 friend 선언을 했기 때문에 Point 클래스의 private 멤버 변수에 접근 가능하다
    return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main(void)
{
    Point pos1(1, 2);
    Point pos2(2, 4);
    PointOP op;

    ShowPointPos(op.PointAdd(pos1, pos2));
    ShowPointPos(op.PointSub(pos2, pos1));

    // cout << pos1.x << endl; // 접근 불가 에러!
    return 0;
}

void ShowPointPos(const Point &pos)
{
    // 이 함수는 Point클래스에서 friend 선언을 했기 때문에 Point 클래스의 private 멤버 변수에 접근 가능하다
    cout << "x: " << pos.x << ", ";
    cout << "y: " << pos.y << endl;
}
