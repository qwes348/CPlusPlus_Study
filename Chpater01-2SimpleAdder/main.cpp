#include <iostream>

int main() 
{
  	int val1;
	std::cout << "첫번째 숫자 입력: ";
	// 정수를 입력 받아서 val1에 저장
	std::cin >> val1;

	int val2;
	std::cout << "두번째 숫자 입력: ";
	// 정수를 입력 받아서 val2에 저장
	std::cin >> val2;

	int result = val1+val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;
}