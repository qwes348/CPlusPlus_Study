#include <iostream>

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void Swap(double* a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

// 다음 main 함수에서 필요로 하는 Swap 함수를 오버로딩 해서 구현해보자.
int main() 
{
	int num1 = 20, num2 = 30;
	Swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	Swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	Swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 <<std::endl;
	
	return 0;
}