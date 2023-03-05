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

    // �Լ����� Struct������ ���� => ������ �Ű������� ���� �ʿ䵵 ��������.
    
    void ShowCarState()
    {
        // ���� ������ ��� => �ܼ��� ��¸� �ϱ⿡ �Ű������� const�� ����
        cout << "������ID: " << gamerID << endl;
        cout << "���ᷮ: " << fuelGauge << "%" << endl;
        cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;    
    }

    void Accel()
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

    void Break()
    {
        if(curSpeed < BRK_STEP)
        {
            curSpeed = 0;
            return;
        }

        curSpeed -= BRK_STEP;
    }

};  // Struct���𿡵� ����Ŭ���� �ʿ��ϴ�!


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
