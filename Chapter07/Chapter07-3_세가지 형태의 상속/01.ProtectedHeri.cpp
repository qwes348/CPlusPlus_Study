// protected상속 예제

#include <iostream>
using namespace std;

class Base
{
private:
    int num1;

protected:
    int num2;

public:
    int num3;

    Base() : num1(1), num2(2), num3(3) {}
};

class Derived : protected Base
{
}; // Base클래스를 protected형태로 상속받음

int main(void)
{
    Derived drv;
    cout << drv.num3 << endl; // 에러! 접근 불가
    return 0;

    // protected로 상속받으면 protected보다 접근 범위가 넓은 public 멤버는 접근제어자가 protected가 된다
    // 따라서 num3 변수는 부모 클래스에서는 public이어서 외부에서 접근 가능하지만 자식 클래스에선 외부에서 접근할 수 없다
}