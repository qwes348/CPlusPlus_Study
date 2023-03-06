#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>
using namespace std;

class Calculator
{
private:
    int addCount;
    int divCount;
    int minCount;
    int mulCount;

public:
    void Init();
    void ShowOpCount();

    float Add(float a, float b);
    float Min(float a, float b);
    float Div(float a, float b);
    float Mul(float a, float b);
};

#endif