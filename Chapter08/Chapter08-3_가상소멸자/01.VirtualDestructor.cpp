// virtual 소멸자를 설명하는 예제

#include <iostream>
#include <cstring>
using namespace std;

class First
{
private:
    char *strOne;

public:
    First(char *str)
    {
        strOne = new char[strlen(str) + 1];
    }
    // virtual 소멸자가 아니라면 동적할당한 Second객체의 소멸자는 ~First()만 호출된다
    // ~First()
    // {
    //     cout << "~First()" << endl;
    //     delete[] strOne;
    // }

    // virtual 키워드가 추가된 소멸자는 동적할당한 Second객체가 소멸할 때 ~Second() ~First()순으로 호출된다
    virtual ~First()
    {
        cout << "~First()" << endl;
        delete[] strOne;
    }
};

class Second : public First
{
private:
    char *strTwo;

public:
    Second(char *str1, char *str2) : First(str1)
    {
        strTwo = new char[strlen(str2) + 1];
    }
    // ~Second()
    // {
    //     cout << "~Second()" << endl;
    //     delete[] strTwo;
    // }
    virtual ~Second()
    {
        cout << "~Second()" << endl;
        delete[] strTwo;
    }
};

int main(void)
{
    First *ptr = new Second("simple", "complex");
    delete ptr;
    return 0;
}