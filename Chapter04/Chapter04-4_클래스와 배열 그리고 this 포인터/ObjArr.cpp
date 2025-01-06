// 객체 배열 예제

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

    // 디폴트 생성자
    Person()
    {
        name = NULL;
        age = 0;
        cout << "디폴트 생성자 호출됨" << endl;
    }

    void SetPsersonInfo(char *myname, int myage)
    {
        name = myname;
        age = myage;
    }

    void ShowPersonInfo() const
    {
        cout << "이름: " << name << ", ";
        cout << "나이: " << age << endl;
    }

    ~Person()
    {
        delete[] name;
        cout << "소멸자 호출됨" << endl;
    }
};

int main(void)
{
    Person parr[3];
    char namestr[100];
    char *strptr;
    int age;
    int len;

    // 입력받은 정보로 초기화 과정
    for (int i = 0; i < 3; i++)
    {
        cout << "이름: ";
        cin >> namestr;
        cout << "나이: ";
        cin >> age;
        len = strlen(namestr) + 1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPsersonInfo(strptr, age);
    }
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    return 0;
}