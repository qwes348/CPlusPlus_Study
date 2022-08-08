#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main() 
{
	// C++에서의 namespace내에 정의된 함수 호출하는 방법
	// :: 이것을 '범위지정 연산자(scope resolution operator)'라 한다
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}