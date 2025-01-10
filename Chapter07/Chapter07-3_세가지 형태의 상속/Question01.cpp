// 직사각형을 상속받는 정사각형 클래스 만들기

#include <iostream>
using namespace std;

class Rectangle
{
protected:
    int x;
    int y;

public:
    Rectangle(int newX, int newY) : x(newX), y(newY) {}
    void ShowAreaInfo()
    {
        cout << "면적: " << x * y << endl;
    }
};

class Square : public Rectangle
{
public:
    Square(int newX) : Rectangle(newX, newX) {}
};

int main(void)
{
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();

    return 0;
}