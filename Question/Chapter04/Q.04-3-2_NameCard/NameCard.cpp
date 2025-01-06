#include "NameCard.h"
#include <iostream>
#include <cstring>
using namespace std;

NameCard::NameCard(char *name, char *company, char *phone, int compPos)
{
    int nameLen = strlen(name) + 1;
    int companyLen = strlen(company) + 1;
    int phoneLen = strlen(phone) + 1;

    this->name = new char[nameLen];
    this->company = new char[companyLen];
    this->phone = new char[phoneLen];

    strcpy(this->name, name);
    strcpy(this->company, company);
    strcpy(this->phone, phone);
    this->compPos = compPos;
}

void NameCard::ShowNameCardInfo()
{
    cout << "이름: " << name << endl;
    cout << "회사: " << company << endl;
    cout << "전화번호: " << phone << endl;

    char *pos;
    switch (compPos)
    {
    case COMP_POS::CLERK:
        pos = "사원";
        break;
    case COMP_POS::SENIOR:
        pos = "주임";
        break;
    case COMP_POS::ASSIST:
        pos = "대리";
        break;
    case COMP_POS::MANAGER:
        pos = "부장";
        break;
    }
    cout << "직급: " << pos << endl;
}
