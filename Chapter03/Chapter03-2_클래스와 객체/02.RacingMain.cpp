#include "02.Car.h"

int main(void)
{
    // Ŭ���� ��ü ���� new�� �Ⱦ��µ�?
    Car run99;
    // �ʱ�ȭ
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