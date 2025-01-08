// 반환으로 객체를 넘길 때 복사 생성자가 호출되는 타이밍을 확인하는 예제

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

    SoSimple &AddNum(int n)
    {
        num += n;
        return *this;
    }

    void ShowData()
    {
        cout << "num: " << num << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout << "return 이전" << endl;
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    // SimpleFuncObj 함수에 매개변수로 넘길 때 한번, AddNum함수의 반환값으로 받을 때 한번 복사 생성자가 호출된다
    SimpleFuncObj(obj).AddNum(30).ShowData(); // 37
    obj.ShowData();                           // 7
    return 0;
}