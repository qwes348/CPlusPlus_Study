#include <iostream>

// 두 정수사이의 모든 수의 합을 구하기
int main() 
{
  	int val1, val2;
	int result = 0;
	std::cout << "두개의 숫자 입력: ";
	// 연속적입 데이터 입력
	std::cin >> val1 >> val2;

	if(val1 < val2)
	{
		for(int i = val1 + 1; i < val2; i++)
			result += i;		
	}
	else
	{
		for(int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}