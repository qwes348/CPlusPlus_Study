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

    // 함수들을 Struct내에서 정의

    // 차의 정보를 출력 => 단순히 출력만 하기에 매개변수는 const로 선언
    void ShowCarState(const Car &car)
    {
        cout << "소유자ID: " << car.gamerID << endl;
        cout << "연료량: " << car.fuelGauge << "%" << endl;
        cout << "현재속도: " << car.curSpeed << "km/s" << endl << endl;    
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

};  // Struct선언에도 세미클론이 필요하다!


int main(void)
{
    // 구조체 초기화를 이런식으로 가능한듯
    Car run99 = {"run99", 100, 0};
    run99.Accel(run99);
    run99.Accel(run99);
    run99.ShowCarState(run99);
    run99.Break(run99);
    run99.ShowCarState(run99);

    Car speed77 = {"speed77", 100, 0};
    speed77.Accel(speed77);
    speed77.Break(speed77);
    speed77.ShowCarState(speed77);

    return 0;
}
