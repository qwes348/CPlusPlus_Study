#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;
    int age;

public:
    Person(char *myName, int myAge)
    {
        int len = strlen(myName) + 1;
        name = new char[len]; // 동적할당
        strcpy(name, myName);
        age = myAge;
    }

    void ShowPersonInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }

    ~Person()
    {
        delete[] name; // 동적할당한 메모리 해제
        cout << "소멸자 호출됨!" << endl;
    }
};

int main(void)
{
    Person man1("Lee dong woo", 29);
    Person man2 = man1; // 여기서 얕은 복사가 일어남. -> man1과 man2는 같은 "Lee dong woo"의 메모리 주소를 참조함
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}

enum Color
{
    Black,
    Red
};