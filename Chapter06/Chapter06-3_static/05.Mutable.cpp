// mutable키워드를 체험해보는 예제

#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num1;
    mutable int num2; // const 함수에 대해 예외를 둔다!
public:
    SoSimple(int n1, int n2) : num1(n1), num2(n2) {}

    void ShowSimpleData() const
    {
        cout << num1 << ", " << num2 << endl;
    }

    void CopyToNum2() const
    {
        num2 = num1; // const 함수임에도 num2의 값을 변경할 수 있다
    }
};

int main(void)
{
    SoSimple sm(1, 2);
    sm.ShowSimpleData();
    sm.CopyToNum2();
    sm.ShowSimpleData();
    return 0;
}

// mutable 키워드는 const키워드를 의미없게 만들어버릴 수 있다 웬만하면 사용을 지양하는것이 좋다