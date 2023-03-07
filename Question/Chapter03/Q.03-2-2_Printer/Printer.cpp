#include <cstring>
#include "Printer.h"
using namespace std;

void Printer::SetString(char *str)
{
    strcpy(savedStr, str);
}

void Printer::ShowString()
{
    cout << savedStr << endl;
}