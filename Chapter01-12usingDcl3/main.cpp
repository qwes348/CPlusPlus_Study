#include <iostream>
// std네임스페이스 안에 있는 모든것을 호출할때 네임스페이스 참조 생략
// 하지만 권장은 안함
using namespace std;

int main() 
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	
	return 0;
}