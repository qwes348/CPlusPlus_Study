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

};	// Ŭ���� ���𿡵� ����Ŭ���� �ʿ��ϴ�

int main(void)
{
	// new �����ڸ� �̿��� �� ������ ���� �Ҵ�
	cout << "case 1: ";
	Simple* sp1 = new Simple();

	// malloc �Լ�ȣ���� ���� �� ������ ���� �Ҵ�
	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);
	
	// �Ҵ� ����� ���� �Ҹ�
	cout << endl << "end of main" << endl;
	// new �����ڴ� delete
	delete sp1;
	// malloc�Լ��� free�Լ�
	free(sp2);


	return 0;

	/*
	* ���:
	* case 1: I'm simple constructor!
	* case 2:
	* end of main
	*/
}