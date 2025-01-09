// const static 변수는 선언과 동시에 초기화가 가능하다는것을 보여주는 예제

#include <iostream>
using namespace std;

class CountryArea
{
public:
    // 일반 const 변수는 이니셜라이저에서 초기화해야 하지만 const static 변수는 선언과 동시에 초기화가 가능하다
    const static int RUSSIA = 1707540;
    const static int CANADA = 998467;
    const static int CHINA = 957290;
    const static int SOUTH_KOREA = 9922;
};

int main(void)
{
    cout << "러시아 면적: " << CountryArea::RUSSIA << " km2" << endl;
    cout << "캐나다 면적: " << CountryArea::CANADA << " km2" << endl;
    cout << "중국 면적: " << CountryArea::CHINA << " km2" << endl;
    cout << "한국 면적: " << CountryArea::SOUTH_KOREA << " km2" << endl;
    return 0;
}