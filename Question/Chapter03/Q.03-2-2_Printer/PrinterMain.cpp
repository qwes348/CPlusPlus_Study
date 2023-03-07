#include "Printer.h"
#include <iostream>

int main(void)
{
    Printer pnt;
    pnt.SetString("Hello World!");
    pnt.ShowString();

    pnt.SetString("I Love C++");
    pnt.ShowString();
}