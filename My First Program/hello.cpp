// iostream ������� include => iostream�� C++ ǥ�� ����� ��������� C�� stdio.h�� ���
#include <iostream>

int main()
{
	//https://modoocode.com/136
	// 
	// C++�� ��ο��� ��� ���� �ٹٲޱ��� ����
	// std�� namespace ::�� C#�� .�� ����
	// 
	// ����
	// std::cout << /* ����� �� */ << /* ����� �� */ << ... << /* ����� �� */;
	std::cout << "Hello, World!!!" << std::endl;
	std::cout << "Hello, \n" << "World!!!" << std::endl;
	std::cout << std::endl;

	// C���� ���� Printf()�� ��밡����
	printf("Hello");
	return 0;
}