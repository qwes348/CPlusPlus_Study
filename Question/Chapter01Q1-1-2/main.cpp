#include <iostream>

int main() 
{
	char name[100];
	char phoneNumber[200];

	std::cout << "이름 : ";
	std::cin >> name;

	std::cout << "전화번호 : ";
	std::cin >> phoneNumber;

	std::cout << "이름: " << name << std::endl;
	std::cout << "전화번호: " << phoneNumber << std::endl;

	return 0;
}