// c++의 상속을 간단하게 보여주는 예제

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    int age;       // 나이
    char name[50]; // 이름
public:
    Person(int myage, char *myname) : age(myage)
    {
        strcpy(name, myname);
    }
    void WhatYourName() const
    {
        cout << "My name is " << name << endl;
    }
    void HowOldAreYou() const
    {
        cout << "I'm " << age << "years old" << endl;
    }
};

class UnivStudent : public Person // public으로 Person클래스를 상속속
{
private:
    char major[50]; // 전공
public:
    UnivStudent(char *myname, int myage, char *mymajor)
        : Person(myage, myname) // 부모 클래스의 생성자를 통해 부모 클래스의 멤버 변수 초기화
    {
        // 자신의 멤버 변수 초기화
        strcpy(major, mymajor);
    }
    void WhoAreYou() const
    {
        WhatYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl;
    }
};

int main(void)
{
    UnivStudent ustd1("Lee", 22, "Computer eng.");
    ustd1.WhoAreYou();

    cout << endl;

    UnivStudent ustd2("Yoon", 21, "Electronic eng.");
    ustd2.WhoAreYou();
    return 0;
}