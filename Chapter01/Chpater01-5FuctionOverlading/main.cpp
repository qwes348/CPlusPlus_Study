// C#에는있지만 C에는 없는 함수 오버로딩
#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main() 
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}