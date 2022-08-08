// 헤더파일 선언문
#include <iostream>

int main() 
{
	int num = 20;

	// std::cout와 <<을 이용한 출력
	// std::endl or \n을 이용한 개행
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello World!\n";
	std::cout << "Hello " << "World!" << std::endl;

	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	
	return 0;
}