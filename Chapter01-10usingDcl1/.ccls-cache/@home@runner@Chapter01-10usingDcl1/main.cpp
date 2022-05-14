#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main() 
{
	using Hybrid::HybFunc;
	// 네임스페이스:: 없이 함수호출
	// Unity C#에서 using Random = UnityEngine.Random 이랑 같은듯
	HybFunc();
	return 0;
}