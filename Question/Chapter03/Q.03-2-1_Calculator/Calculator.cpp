#include "Calculator.h"
using namespace std;

void Calculator::Init()
{
    addCount = 0;
    divCount = 0;
    minCount = 0;
    mulCount = 0;
}

void Calculator::ShowOpCount()
{
    cout << "µ¡¼À: " << addCount << " »¬¼À: " << minCount << " °ö¼À: " << mulCount << " ³ª´°¼À: " << divCount;
}

float Calculator::Add(float a, float b)
{
    return a + b;
}

float Calculator::Div(float a, float b)
{
    return a / b;
}

float Calculator::Min(float a, float b)
{
    return a - b;
}

float Calculator::Mul(float a, float b)
{
    return a * b;
}