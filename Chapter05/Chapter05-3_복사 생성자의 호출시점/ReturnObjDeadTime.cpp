// 반환으로 생성되는 임시객체의 소멸 타이밍을 알아보는 예제

#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;

public:
    SoSimple(int n) : num(n)
    {
        cout << "New Object: " << this << endl;
    }

    SoSimple(const SoSimple &copy) : num(copy.num)
    {
        cout << "New Copy obj: " << this << endl;
    }

    ~SoSimple()
    {
        cout << "Destroy obj: " << this << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout << "Param ADR: " << &ob << endl;
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout << endl;
    SoSimple tempRef = SimpleFuncObj(obj);
    cout << "Return Obj " << &tempRef << endl;
    return 0;
}