#include "02.Car.h"

int main(void)
{
    // 클래스 객체 선언 new는 안쓰는듯?
    Car run99;
    // 초기화
    run99.InitMembers("run99", 100);

    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car speed77;
    speed77.InitMembers("speed77", 100);
    speed77.Accel();
    speed77.Break();
    speed77.ShowCarState();

    return 0;
}