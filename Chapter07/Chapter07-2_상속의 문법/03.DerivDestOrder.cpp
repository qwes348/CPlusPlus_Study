// 자식 클래스 객체의 소멸 과정 예제

#include <iostream>
using namespace std;

class SoBase
{
private:
    int baseNum;

public:
    SoBase(int n) : baseNum(n)
    {
        cout << "SoBase() : " << baseNum << endl;
    }
    ~SoBase()
    {
        cout << "~SoBase() : " << baseNum << endl;
    }
};

class SoDerived : public SoBase
{
private:
    int derivNum;

public:
    SoDerived(int n) : SoBase(n), derivNum(n)
    {
        cout << "Soderived() : " << derivNum << endl;
    }
    ~SoDerived()
    {
        cout << "~SoDerived() : " << derivNum << endl;
    }
};

int main(void)
{
    SoDerived drv1(15);
    SoDerived drv2(27);
    return 0;

    // 소멸자 순서는 생성자 순서와 반대로 자식클래스->부모클래스 순서이다
    //  (스택에 부모가 먼저 들어가기 때문에 늦게 들어간 자식이 먼저 소멸)
}