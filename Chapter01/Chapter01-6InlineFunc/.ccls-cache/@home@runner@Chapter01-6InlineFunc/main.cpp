#include <iostream>

// 인라인 함수 정의
inline int SQUARE(int x)
{
	return x * x;
}

// 데이터의 손실이 발생하지않는 Generic사용법
template <typename T>
inline T SQUARE(T x)
{
	return x*x;
}

int main() 
{
	// 인라인 함수 사용
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	std::cout << SQUARE(5.5) << std::endl;
	
	return 0;
}