// 매개변수로 생성되는는 임시객체의 소멸 타이밍에대해 알아보는 예제

#include <iostream>
using namespace std;

class Temporary
{
private:
    int num;

public:
    Temporary(int n) : num(n)
    {
        cout << "create obj: " << num << endl;
    }

    ~Temporary()
    {
        cout << "destroy obj: " << num << endl;
    }

    void ShowTempInfo()
    {
        cout << "My num is" << num << endl;
    }
};

int main(void)
{
    Temporary(100);
    cout << "********** after make!" << endl // 디버그 콘솔에서는 이 출력이 안보임 터미널로 실행해야 함
         << endl;

    Temporary(200).ShowTempInfo();
    cout << "********** after make!" << endl
         << endl;

    // 이 위 2가지 예제로 임시객체는 해당 line을 넘어가는 순간 소멸된다는 것을 알 수 있다
    // 하지만 아래 예제로 참조자로 임시객체를 참조하면 해당 line을 넘어가도 소멸되지 않고 프로그램이 종료될 때 소멸된다는 것을 알 수 있다

    const Temporary &ref = Temporary(300);
    cout << "********** end of main!" << endl
         << endl;
    return 0;
}