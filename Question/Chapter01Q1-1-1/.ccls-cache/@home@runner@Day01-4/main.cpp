#include <iostream>

// 윤성우 열혈C++ P.22 문제
int main() 
{
	// 문제 1 정수 5개를 입력받아 합계 출력
	// C++식 배열선언 아직 본문에는 안나왔지만 배열을 쓰는게 좋을것같아 선언함
	int nums[5];
	int result = 0;
	
	for(int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "번째 정수 입력 : "	;
		std::cin >> nums[i];		

		result += nums[i];
	}	

	std::cout << "합계: " << result;

	
	return 0;
}