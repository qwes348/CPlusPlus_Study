// ��������� �ߺ����� ������ �ذ��ϱ� ���� ��ũ�� ����
#ifndef __CARINLINE_H__
#define __CARINLINE_H__

#include <iostream>
using namespace std;

// ���ӽ����̽��ȿ� ���������� ��� ����
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
    cout << "������ID: " << gamerID << endl;
    cout << "���ᷮ: " << fuelGauge << endl;
    cout << "����ӵ�: " << curSpeed << endl;
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