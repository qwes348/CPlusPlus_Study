#include <cstring>
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

// using은 '네임스페이스 CAR_CONST' 정의 밑에 해야함 안그럼 컴파일에러
using namespace CAR_CONST;

class Car
{
    // C++의 접근제어자 사용법
private:
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;

public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();

}; // 클래스 정의에도 중괄호 끝에 세미클론이 필요하다!

// 초기화 함수
void Car::InitMembers(char *ID, int fuel)
{
    // gamerID, fuelGauge는 private 변수지만
    // 이 함수는 클래스 내부에 정의됐기 때문에 접근할 수 있다.

    strcpy_s(gamerID, ID_LEN, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

// Car구조체 안에 정의된 함수들을 밖에서 정의
void Car::ShowCarState()
{
    // 차의 정보를 출력 => 단순히 출력만 하기에 매개변수는 const로 선언
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl
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
    // 클래스 객체 선언 new는 안쓰는듯?
    Car run99;
    // 초기화
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