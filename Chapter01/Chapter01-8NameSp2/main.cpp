// 함수의 선언과 정의를 구분하는 예제

#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main() 
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}

void BestComImpl::SimpleFunc()
{
	std::cout << "BestCom이 정의한 함수" << std::endl;	
}

void ProgComImpl::SimpleFunc()
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}