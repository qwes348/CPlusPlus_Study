// 클래스 끼리의 friend 선언을 해보는 예제

#include <iostream>
#include <cstring>
using namespace std;

class Girl; // Girl이라는 이름이 클래스의 이름임을 알림

class Boy
{
private:
    int height;
    friend class Girl; // Girl 클래스에 대한 friend 선언
public:
    Boy(int len) : height(len) {}

    void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
private:
    char phNum[20];

public:
    Girl(char *num)
    {
        strcpy(phNum, num);
    }

    void ShowYourFriendInfo(Boy &frn);
    friend class Boy; // Boy 클래스에 대한 friend 선언 -> 선언 위치는 중요하지않다
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
    // Girl클래스의 private 멤버 변수인 phNum에 접근
    cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
    // Boy클래스의 private 멤버 변수인 height에 접근
    cout << "His height: " << frn.height << endl;
}

int main(void)
{
    Boy boy(170);
    Girl girl("010-1234-6578");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}