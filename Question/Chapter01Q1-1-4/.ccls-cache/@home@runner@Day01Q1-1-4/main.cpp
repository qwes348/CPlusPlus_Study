#include <iostream>

int main() 
{
	int soldAmount;

	while(true)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end)" << std::endl;
		std::cin >> soldAmount;

		if(soldAmount < 0)
			break;

		int result = 50 + soldAmount * 0.12;
		std::cout << "이번 달 급여: " << result << "만원" << std::endl;
	}

	return 0;
}