// public static 변수의 접근 방법을 보여주는 예제

#include <iostream>
using namespace std;

class SoSimple
{
public:
    static int simObjCnt;

public: // 불필요하지만 변수 영역과 함수 영역의 구분을 목적으로 삽입
    SoSimple()
    {
        simObjCnt++;
    }
};

int SoSimple::simObjCnt = 0;

int main(void)
{
    cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
    SoSimple sim1;
    SoSimple sim2;

    // 공유하는 static 변수이기 때문에 출력은 모두 같다
    cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
    // 아래 2줄처럼 static변수를 접근하는 경우는 멤버 변수를 접근하는지 static 변수를 접근하는지 읽는 입장에서 구분하기 어렵다
    // 따라서 아래 2줄처럼 사용하는것은 지양한다
    cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
    cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
}