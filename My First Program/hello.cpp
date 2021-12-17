// iostream 헤더파일 include => iostream은 C++ 표준 입출력 헤더파일임 C의 stdio.h와 비슷
#include <iostream>

int main()
{
	//https://modoocode.com/136
	// 
	// C++의 헬로월드 출력 끝에 줄바꿈까지 포함
	// std는 namespace ::은 C#의 .과 같음
	// 
	// 사용법
	// std::cout << /* 출력할 것 */ << /* 출력할 것 */ << ... << /* 출력할 것 */;
	std::cout << "Hello, World!!!" << std::endl;
	std::cout << "Hello, \n" << "World!!!" << std::endl;
	std::cout << std::endl;

	// C에서 쓰던 Printf()도 사용가능함
	printf("Hello");
	return 0;
}