// const 유무로 함수를 오버로딩 해보는 예제

#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;

public:
    SoSimple(int n) : num(n) {}

    SoSimple &AddNum(int n)
    {
        num += n;
        return *this;
    }

    void SimpleFunc()
    {
        cout << "SimpleFunc: " << num << endl;
    }

    void SimpleFunc() const
    {
        cout << "const SimpleFunc: " << num << endl;
    }
};

void YourFunc(const SoSimple &obj)
{
    // const참조자로 호출하기때문에 이 함수에 들어오기전엔 const 객체가 아니었어도 const 함수가 호출된다
    obj.SimpleFunc();
}

int main(void)
{
    SoSimple obj1(2);
    const SoSimple obj2(7);

    obj1.SimpleFunc(); // normal
    obj2.SimpleFunc(); // const

    YourFunc(obj1); // const
    YourFunc(obj2); // const

    return 0;
}