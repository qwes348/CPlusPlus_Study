#include <iostream>
using namespace std;

// 정보은닉을 안했을 때 문제를 보여주는 예제

class Point
{
    // 클래스의 멤버 변수를 public으로 선언하였다.
public:
    int x; // x좌표의 범위는 0이상 100이하
    int y; // y좌표의 범위는 0이상 100 이하
};

class Rectangle
{
public:
    Point upLeft;
    Point lowRight;

public:
    void ShowRecInfo()
    {
        cout << "좌 상단: " << '[' << upLeft.x << ", ";
        cout << upLeft.y << ']' << endl;
        cout << "우 하단: " << '[' << lowRight.x << ", ";
        cout << lowRight.y << ']' << endl;
    }
};

int main(void)
{
    /*
    생기는 문제:
    좌 상단 좌표의 값은 우 하단 좌표의 값보다 작아야 하지만
    좌표의 값이 public이기 때문에 대입할 때 예외처리를 할 수 없다.
    */
    Point pos1{-2, 4};
    Point pos2{5, 9};
    Rectangle rec = {pos2, pos1};
    rec.ShowRecInfo();

    return 0;
}