#include <iostream>
// using 선언을 전역으로 삽입함
// cin, cout, endl을 호출할때만 네임스페이스 참조 생략
using std::cin;
using std::cout;
using std::endl;

int main() 
{
	int num = 20;

	// namespace참조없이 cout, endl 사용
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}