// 셀프 레퍼런스 반환 예제

#include <iostream>
using namespace std;

class SelfRef
{
private:
    int num;

public:
    SelfRef(int n) : num(n)
    {
        cout << "객체생성" << endl;
    }

    SelfRef &Adder(int n)
    {
        num += n;
        return *this;
    }

    SelfRef &ShowTwoNumber()
    {
        cout << num << endl;
        return *this;
    }
};

int main(void)
{
    SelfRef obj(3);
    SelfRef &ref = obj.Adder(2);

    ref.ShowTwoNumber(); // 5
    obj.ShowTwoNumber(); // 5

    // 참조자를 반환받기 때문에 이런식으로 호출이 가능함
    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber(); // 6 8
    obj.ShowTwoNumber();                                   // 8
    return 0;
}
