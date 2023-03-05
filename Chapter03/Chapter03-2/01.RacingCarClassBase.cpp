#include <cstring>
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

// using�� '���ӽ����̽� CAR_CONST' ���� �ؿ� �ؾ��� �ȱ׷� �����Ͽ���
using namespace CAR_CONST;

class Car
{
    // C++�� ���������� ����
private:
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;

public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();

}; // Ŭ���� ���ǿ��� �߰�ȣ ���� ����Ŭ���� �ʿ��ϴ�!

// �ʱ�ȭ �Լ�
void Car::InitMembers(char *ID, int fuel)
{
    // gamerID, fuelGauge�� private ��������
    // �� �Լ��� Ŭ���� ���ο� ���ǵƱ� ������ ������ �� �ִ�.

    strcpy_s(gamerID, ID_LEN, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

// Car����ü �ȿ� ���ǵ� �Լ����� �ۿ��� ����
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