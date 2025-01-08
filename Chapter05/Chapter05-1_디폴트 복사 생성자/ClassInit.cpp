// 클래스의 복사 생성자에대해 알아보는 예제

#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num1;
    int num2;

public:
    SoSimple(int n1, int n2)
        : num1(n1), num2(n2)
    {
        // empty;
    }

    SoSimple(const SoSimple &copy)
        : num1(copy.num1), num2(copy.num2)
    {
        cout << "[복사 생성자 호출됨]" << endl;
    }

    void ShowSimpleData()
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main(void)
{
    SoSimple sim1(15, 30);
    cout << "생성 및 초기화 직전" << endl;
    SoSimple sim2 = sim1; // SoSimpe sim2(sim1); 으로 변한되어 실행됨. 즉 대입 연산이 복사 생성자를 통한 객체 생성으로 변환됨
    cout << "생성 및 초기화 직후" << endl;
    sim2.ShowSimpleData();

    return 0;
}