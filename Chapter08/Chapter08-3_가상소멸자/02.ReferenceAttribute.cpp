// 이제까지 설명한 동적할당의 특성은 참조자에서도 똑같다는것을 보여주는 예제

#include <iostream>
using namespace std;

class First
{
public:
    void FirstFunc() { cout << "FirstFunc()" << endl; }
    virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
};

class Second : public First
{
public:
    void SecondFunc() { cout << "SecondFunc()" << endl; }
    virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
};

class Third : public Second
{
public:
    void ThirdFunc() { cout << "ThirdFunc()" << endl; }
    virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
};

int main(void)
{
    Third obj;
    obj.FirstFunc();
    obj.SecondFunc();
    obj.ThirdFunc();
    obj.SimpleFunc();

    cout << endl;

    Second &sref = obj; // Second형 참조자로 동적할당
    sref.FirstFunc();
    sref.SecondFunc();
    sref.SimpleFunc(); // Third's SimpleFunc()

    cout << endl;

    First &fref = obj; // First형 참조자로 동적할당
    fref.FirstFunc();
    fref.SimpleFunc(); // Third's SimpleFunc()

    return 0;
}