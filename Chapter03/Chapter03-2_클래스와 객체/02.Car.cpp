#include <iostream>
#include <cstring>
#include "02.Car.h"
using namespace std;

void Car::InitMembers(char *ID, int fuel)
{
    // 헤더파일에서 네임스페이스 CAR_CONST를 using했으니까 여기서도 using하는걸로 되는듯
    strcpy_s(gamerID, ID_LEN, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()
{
    // 차의 정보를 출력 => 단순히 출력만 하기에 매개변수는 const로 선언
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl
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