#include <iostream>
// 구구단
int main() 
{
	int num;

	std::cout << "숫자 입력: ";
	std::cin >> num;

	for(int i = 1; i < 10; i++)
	{
		std::cout << num << "X" << i << " = " << num * i << std::endl;		
	}

	return 0;
}