// 이 챕터부터 VS에서 VSCode로 에디터 변경함
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
}
// using은 '네임스페이스 CAR_CONST' 정의 밑에 해야함 안그럼 컴파일에러
using namespace CAR_CONST;

struct Car
{
    // using을 안하면 아래와 같은식으로 사용
    // char gamerID[CAR_CONST::ID_LEN];   // 소유자 ID

    // using을 했으니 CAR_CONST::를 생략함
    char gamerID[ID_LEN];   // 소유자 ID
    int fuelGauge;  // 연료량
    int curSpeed;   // 현재속도

    // 함수들을 Struct내에서 정의

    void ShowCarState();
    void Accel();
    void Break();

};  // Struct선언에도 세미클론이 필요하다!

// Car구조체 안에 정의된 함수들을 밖에서 정의
void Car::ShowCarState()
{
    // 차의 정보를 출력 => 단순히 출력만 하기에 매개변수는 const로 선언
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl << endl;    
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
