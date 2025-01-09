// const 객체의 특성을 확인해보는 예제

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

    // 멤버를 변경하지 않는 함수는 가급적 const로 선언해서 const 객체도 호출할 수 있게 하는것이 좋다
    void ShowData() const
    {
        cout << "num: " << num << endl;
    }
};

int main(void)
{
    const SoSimple obj(7);
    // obj.AddNum(20);  // 에러! -> const객체는 const가 아닌 멤버 함수를 호출할 수 없다
    obj.ShowData();
    return 0;
}