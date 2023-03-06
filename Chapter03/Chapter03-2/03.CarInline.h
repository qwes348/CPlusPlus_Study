// 헤더파일의 중복포함 문제를 해결하기 위한 매크로 선언
#ifndef __CARINLINE_H__
#define __CARINLINE_H__

#include <iostream>
using namespace std;

// 네임스페이스안에 열거형으로 상수 선언
namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
} // namespace CAR_CONST
using namespace CAR_CONST;

class Car
{
private:
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;

public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

inline void Car::ShowCarState()
{
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << endl;
    cout << "현재속도: " << curSpeed << endl;
}

inline void Car::Break()
{
    if (curSpeed < BRK_STEP)
    {
        curSpeed = 0;
        return;
    }
    curSpeed -= BRK_STEP;
}

#endif