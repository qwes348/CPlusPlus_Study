// 이 챕터부터 VS에서 VSCode로 에디터 변경함
#include <iostream>
using namespace std;

// 상수 선언
#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gamerID[ID_LEN];   // 소유자 ID
    int fuelGauge;  // 연료량
    int curSpeed;   // 현재속도

    // 함수들을 Struct내에서 정의 => 포인터 매개변수를 받을 필요도 없어진다.
    
    void ShowCarState()
    {
        // 차의 정보를 출력 => 단순히 출력만 하기에 매개변수는 const로 선언
        cout << "소유자ID: " << gamerID << endl;
        cout << "연료량: " << fuelGauge << "%" << endl;
        cout << "현재속도: " << curSpeed << "km/s" << endl << endl;    
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

};  // Struct선언에도 세미클론이 필요하다!


int main(void)
{
    // 구조체 초기화를 이런식으로 가능한듯
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
