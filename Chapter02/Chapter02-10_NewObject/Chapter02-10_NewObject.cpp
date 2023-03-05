#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}

};	// 클래스 선언에도 세미클론이 필요하다

int main(void)
{
	// new 연산자를 이용한 힙 영역에 변수 할당
	cout << "case 1: ";
	Simple* sp1 = new Simple();

	// malloc 함수호출을 통한 힙 영역에 변수 할당
	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);
	
	// 할당 방법에 따른 소멸
	cout << endl << "end of main" << endl;
	// new 연산자는 delete
	delete sp1;
	// malloc함수는 free함수
	free(sp2);


	return 0;

	/*
	* 출력:
	* case 1: I'm simple constructor!
	* case 2:
	* end of main
	*/
}