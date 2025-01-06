// Private 생성자 예제
#include <iostream>
using namespace std;

class AAA
{
private:
    int num;

public:
    // 디폴트 생성자 -> 멤버 변수인 num에 0을 대입
    AAA() : num(0) {}

    AAA &CreateInitObj(int n) const
    {
        AAA *ptr = new AAA(n);
        return *ptr;
    }

    void ShowNum() const
    {
        cout << num << endl;
    }

private:
    // 인자를 받는 private 생성자
    AAA(int n) : num(n) {}
};

int main(void)
{
    AAA base;
    base.ShowNum(); // 0

    AAA &obj1 = base.CreateInitObj(3);
    obj1.ShowNum(); // 3

    AAA &obj2 = base.CreateInitObj(12);
    obj2.ShowNum(); // 12

    obj1.ShowNum(); // 3

    // 메모리해제
    delete &obj1;
    delete &obj2;
}