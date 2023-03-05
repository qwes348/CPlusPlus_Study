// �� é�ͺ��� VS���� VSCode�� ������ ������
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
}
// using�� '���ӽ����̽� CAR_CONST' ���� �ؿ� �ؾ��� �ȱ׷� �����Ͽ���
using namespace CAR_CONST;

struct Car
{
    // using�� ���ϸ� �Ʒ��� ���������� ���
    // char gamerID[CAR_CONST::ID_LEN];   // ������ ID

    // using�� ������ CAR_CONST::�� ������
    char gamerID[ID_LEN];   // ������ ID
    int fuelGauge;  // ���ᷮ
    int curSpeed;   // ����ӵ�

    // �Լ����� Struct������ ����

    void ShowCarState();
    void Accel();
    void Break();

};  // Struct���𿡵� ����Ŭ���� �ʿ��ϴ�!

// Car����ü �ȿ� ���ǵ� �Լ����� �ۿ��� ����
void Car::ShowCarState()
{
    // ���� ������ ��� => �ܼ��� ��¸� �ϱ⿡ �Ű������� const�� ����
    cout << "������ID: " << gamerID << endl;
    cout << "���ᷮ: " << fuelGauge << "%" << endl;
    cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;    
}

void Car::Accel()
{
    if(fuelGauge <= 0)
    {
        return;
    }
    else
    {
        fuelGauge -= FUEL_STEP;
    }

    if(curSpeed + ACC_STEP >= MAX_SPD)
    {
        curSpeed = MAX_SPD;
        return;
    }

    curSpeed += ACC_STEP;
}

void Car::Break()
{
    if(curSpeed < BRK_STEP)
    {
        curSpeed = 0;
        return;
    }

    curSpeed -= BRK_STEP;
}


int main(void)
{
    // ����ü �ʱ�ȭ�� �̷������� �����ѵ�
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car speed77 = {"speed77", 100, 0};
    speed77.Accel();
    speed77.Break();
    speed77.ShowCarState();

    return 0;
}
