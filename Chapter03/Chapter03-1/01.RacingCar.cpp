// �� é�ͺ��� VS���� VSCode�� ������ ������
#include <iostream>
using namespace std;

// ��� ����
#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gamerID[ID_LEN];   // ������ ID
    int fuelGauge;  // ���ᷮ
    int curSpeed;   // ����ӵ�
};  // Struct���𿡵� ����Ŭ���� �ʿ��ϴ�!

// ���� ������ ��� => �ܼ��� ��¸� �ϱ⿡ �Ű������� const�� ����
void ShowCarState(const Car &car)
{
    cout << "������ID: " << car.gamerID << endl;
    cout << "���ᷮ: " << car.fuelGauge << "%" << endl;
    cout << "����ӵ�: " << car.curSpeed << "km/s" << endl << endl;    
}

void Accel(Car &car)
{
    if(car.fuelGauge <= 0)
    {
        return;
    }
    else
    {
        car.fuelGauge -= FUEL_STEP;
    }

    if(car.curSpeed + ACC_STEP >= MAX_SPD)
    {
        car.curSpeed = MAX_SPD;
        return;
    }

    car.curSpeed += ACC_STEP;
}

void Break(Car &car)
{
    if(car.curSpeed < BRK_STEP)
    {
        car.curSpeed = 0;
        return;
    }

    car.curSpeed -= BRK_STEP;
}

int main(void)
{
    // ����ü �ʱ�ȭ�� �̷������� �����ѵ�
    Car run99 = {"run99", 100, 0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);

    Car speed77 = {"speed77", 100, 0};
    Accel(speed77);
    Break(speed77);
    ShowCarState(speed77);

    return 0;
}