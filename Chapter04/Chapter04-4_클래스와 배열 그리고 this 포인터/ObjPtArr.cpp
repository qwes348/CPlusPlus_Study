// 객체 포인터 배열 예제

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
    Person *parr[3];
    char namestr[100];
    int age;

    for (int i = 0; i < 3; i++)
    {
        cout << "이름: ";
        cin >> namestr;
        cout << "나이: ";
        cin >> age;
        // C#에서 하듯이
        parr[i] = new Person(namestr, age);
    }

    // 배열안의 요소는 포인터이기때문에 포인터 연산자로 접근
    parr[0]->ShowPersonInfo();
    parr[1]->ShowPersonInfo();
    parr[2]->ShowPersonInfo();
    // 포인터 즉 레퍼런스니까 메모리해제도 필요
    delete parr[0];
    delete parr[1];
    delete parr[2];
    return 0;
}