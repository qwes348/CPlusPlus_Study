#include <iostream>
#include <cstring>
#include "02.Car.h"
using namespace std;

void Car::InitMembers(char *ID, int fuel)
{
    // ������Ͽ��� ���ӽ����̽� CAR_CONST�� using�����ϱ� ���⼭�� using�ϴ°ɷ� �Ǵµ�
    strcpy_s(gamerID, ID_LEN, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()
{
    // ���� ������ ��� => �ܼ��� ��¸� �ϱ⿡ �Ű������� const�� ����
    cout << "������ID: " << gamerID << endl;
    cout << "���ᷮ: " << fuelGauge << "%" << endl;
    cout << "����ӵ�: " << curSpeed << "km/s" << endl
         << endl;
}

void Car::Accel()
{
    if (fuelGauge <= 0)
    {
        return;
    }
    else
    {
        fuelGauge -= FUEL_STEP;
    }

    if (curSpeed + ACC_STEP >= MAX_SPD)
    {
        curSpeed = MAX_SPD;
        return;
    }

    curSpeed += ACC_STEP;
}

void Car::Break()
{
    if (curSpeed < BRK_STEP)
    {
        curSpeed = 0;
        return;
    }

    curSpeed -= BRK_STEP;
}