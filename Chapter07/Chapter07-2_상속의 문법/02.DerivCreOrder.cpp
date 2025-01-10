// 3가지 케이스의 자식 클래스 객체 생성 과정 예제

#include <iostream>
using namespace std;

class SoBase
{
private:
    int baseNum;

public:
    SoBase() : baseNum(20)
    {
        cout << "SoBase()" << endl;
    }
    SoBase(int n) : baseNum(n)
    {
        cout << "SoBase(int n)" << endl;
    }
    void ShowBaseData()
    {
        cout << baseNum << endl;
    }
};

class SoDerived : public SoBase
{
private:
    int derivNum;

public:
    SoDerived() : derivNum(30)
    {
        cout << "SoDerived()" << endl;
    }
    SoDerived(int n) : derivNum(n)
    {
        cout << "SoDerived(int n)" << endl;
    }
    SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) // 이 생성자만 부모 클래스 생성자 호출
    {
        cout << "Soderived(int n1, int n2)" << endl;
    }
    void ShowDerivData()
    {
        ShowBaseData();
        cout << derivNum << endl;
    }
};

int main(void)
{
    cout << "case1....." << endl;
    SoDerived dr1;
    dr1.ShowDerivData();
    cout << "-------------" << endl;

    cout << "case2....." << endl;
    SoDerived dr2(12);
    dr2.ShowDerivData();
    cout << "-------------" << endl;

    cout << "case3....." << endl;
    SoDerived dr3(23, 24);
    dr3.ShowDerivData();
    cout << "-------------" << endl;

    // 자식 클래스의 객체를 생성하면 부모 클래스의 생성자도 무조건 호출된다
    //  (순서는 부모 클래스의 생성자가 먼저 호출된다)
    // case2와 case3는 부모 생성자를 명시적으로 호출하지 않았기 때문에
    //  부모 클래스의 void 생성자가 호출된다

    return 0;
}
