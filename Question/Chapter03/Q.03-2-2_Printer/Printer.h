#ifndef __PRINTER_H__
#define __PRINTER_H__

#include <iostream>

class Printer
{
private:
    char savedStr[1024];

public:
    void SetString(char *str);
    void ShowString();
};

#endif