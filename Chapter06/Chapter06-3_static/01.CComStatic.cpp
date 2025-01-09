// C언어에서의 static을 복습하는 예제

#include <iostream>
using namespace std;

void Counter()
{
    static int cnt; // 지역변수지만 static이므로 함수가 종료되도 메모리에서 해제되지 않는다.
    cnt++;
    cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        Counter();
    }
    return 0;
}