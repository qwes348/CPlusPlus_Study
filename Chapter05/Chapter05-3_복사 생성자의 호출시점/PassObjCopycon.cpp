// 매개변수로 객체를 넘길 때 복사 생성자가 호출되는 타이밍을 확인하는 예제

#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;

public:
    SoSimple(int n) : num(n) {}

    SoSimple(const SoSimple &copy) : num(copy.num)
    {
        cout << "복사 생성자 호출됨!" << endl;
    }

    void ShowData()
    {
        cout << "num: " << num << endl;
    }
};

void SimpleFuncObj(SoSimple ob)
{
    ob.ShowData();
}

int main(void)
{
    SoSimple obj(7);
    cout << "함수 호출 전" << endl;
    SimpleFuncObj(obj); // 매개변수로 객체를 전달하는 시점에 복사 생성자가 호출된다
    cout << "함수 호출 후" << endl;
    return 0;
}