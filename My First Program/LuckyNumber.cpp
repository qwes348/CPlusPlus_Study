#include <iostream>

int main()
{
	int luckyNumber = 3;
	std::cout << "�� ��� ���� ���߾� ������~" << std::endl;

	int userInput;	// ����� �Է�

	while (1)
	{
		std::cout << "�Է� :";
		std::cin >> userInput;
		if (luckyNumber == userInput)
		{
			std::cout << "���߼̽��ϴ�~~" << std::endl;
			break;
		}
		else
		{
			std::cout << "�ٽ� ������ ������~" << std::endl;
		}
	}

	return 0;
}