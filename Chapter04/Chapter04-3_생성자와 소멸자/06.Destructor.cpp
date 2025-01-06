// 소멸자 예제
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;
    int age;

public:
    Person(char *myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }

    void ShowPersonInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }

    // 소멸자
    ~Person()
    {
        // 생성자에서 할당된 name의 메모리 공간 소멸
        delete[] name;
        cout << "소멸자 호출됨 !" << endl;
    }
};

int main(void)
{
    // 명시적 소멸
    Person man1("황경언", 29);
    man1.ShowPersonInfo();
    delete &man1;

    // 프로그램이 끝나면 자동 소멸
    Person man2("홍길동", 41);
    man2.ShowPersonInfo();

    return 0;
}