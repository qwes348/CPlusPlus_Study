// c++에서 일반 오버라이드 함수와 virtual 오버라이드 함수의 차이를 보여주는 예제

#include <iostream>
using namespace std;

class First
{
public:
    void MyFunc() { cout << "FirstFunc" << endl; }
    virtual void VirtualMyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
    void MyFunc() { cout << "SecondFunc" << endl; }
    virtual void VirtualMyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
    void MyFunc() { cout << "ThirdFunc" << endl; }
    virtual void VirtualMyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
    Third *thirdPtr = new Third();
    Second *secondPtr = thirdPtr;
    First *firstPtr = secondPtr;

    firstPtr->MyFunc();
    secondPtr->MyFunc();
    thirdPtr->MyFunc();
    // 정적 바인딩
    // FirstFunc
    // SecondFunc
    // ThirdFunc

    cout << endl;

    firstPtr->VirtualMyFunc();
    secondPtr->VirtualMyFunc();
    thirdPtr->VirtualMyFunc();
    // 동적 바인딩
    // ThirdFunc
    // ThirdFunc
    // ThirdFunc

    // 일반 오버라이드 함수는 포인터 타입의 함수를 호출한다 (사실 이쪽은 오버라이드가 아니라 [함수 숨김]이다)
    // virtual 오버라이드 함수는 포인터 타입의 함수가 아닌 실제 객체 타입의 함수를 호출한다

    delete thirdPtr;
    return 0;
}