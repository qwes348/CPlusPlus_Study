#ifndef __NAMECARD_H__
#define __NAMECARD_H__

#include <iostream>

// 직급 enum
namespace COMP_POS
{
    enum
    {
        CLERK,
        SENIOR,
        ASSIST,
        MANAGER
    };
}

class NameCard
{
private:
    char *name;
    char *company;
    char *phone;
    int compPos; // 직급

public:
    NameCard(char *name, char *company, char *phone, int compPos);
    // 소멸자에서 메모리 해제
    ~NameCard()
    {
        delete[] name;
        delete[] company;
        delete[] phone;
    }
    void ShowNameCardInfo();
};
#endif