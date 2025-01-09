// c++에서 static 멤버 변수를 활용하는 예제

#include <iostream>
using namespace std;

class SoSimple
{
private:
    static int simObjCnt;

public:
    SoSimple()
    {
        simObjCnt++; // SoSimple객체는 멤버 변수처럼 접근할 수 있다
        cout << simObjCnt << "번째 SoSimple 객체" << endl;
    }
};

int SoSimple::simObjCnt = 0; // 스태틱 변수 초기화

class SoComplex
{
private:
    static int cmxObjCnt;

public:
    SoComplex()
    {
        cmxObjCnt++; // SoComplex객체는 멤버 변수처럼 접근할 수 있다
        cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
    }
};

int SoComplex::cmxObjCnt = 0; // 스태틱 변수 초기화

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2 = cmx1;
    SoComplex();

    return 0;
}