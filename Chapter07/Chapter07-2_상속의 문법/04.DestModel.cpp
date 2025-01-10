// 자식 클래스의 생성자 및 소멸자 정의의 예시 모델

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;

public:
    Person(char *myname)
    {
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
    }
    ~Person()
    {
        delete[] name;
    }
    void WhatYourName() const
    {
        cout << "My name is " << name << endl;
    }
};

class UnivStudent : public Person
{
private:
    char *major;

public:
    UnivStudent(char *myname, char *mymajor)
        : Person(myname)
    {
        major = new char[strlen(mymajor) + 1];
        strcpy(major, mymajor);
    }
    ~UnivStudent()
    {
        delete[] major;
    }
    void WhoAreYou() const
    {
        WhatYourName();
        cout << "My major is " << major << endl;
    }
};

int main(void)
{
    UnivStudent st1("Kim", "Mathmatics");
    st1.WhoAreYou();
    UnivStudent st2("Hong", "Physics");
    st2.WhoAreYou();

    return 0;

    // 이 예제와 같이 소멸자에서는 자신의 생성자에서 할당한 멤버 변수만 메모리에서 해제한다
    //  즉, 자식 클래스의 소멸자에서 부모 클래스의 멤버 변수를 메모리에서 해제하지 않아야한다
}