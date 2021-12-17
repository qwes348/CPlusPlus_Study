#include <iostream>

int main()
{
	int luckyNumber = 3;
	std::cout << "내 비밀 수를 맞추어 보세요~" << std::endl;

	int userInput;	// 사용자 입력

	while (1)
	{
		std::cout << "입력 :";
		std::cin >> userInput;
		if (luckyNumber == userInput)
		{
			std::cout << "맞추셨습니다~~" << std::endl;
			break;
		}
		else
		{
			std::cout << "다시 생각해 보세요~" << std::endl;
		}
	}

	return 0;
}