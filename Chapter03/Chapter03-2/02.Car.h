// 헤더파일의 중복포함 문제를 해결하기 위한 매크로 선언
#ifndef __CAR_H__
#define __CAR_H__

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

#endif