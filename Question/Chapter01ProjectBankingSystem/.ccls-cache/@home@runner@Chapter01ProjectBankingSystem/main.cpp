/*
*	은행계좌 관리 프로그램 구현
*	구현할 기능 :
*		1. 계좌개설
*		2. 입	금
*		3. 출	금
*		4. 전체고객 잔액조회
*
*	가정 :
*		- 계좌번호 중복은 없다(중복검사를 하지 않는다.)
*		- 입금 및 출금액은 무조건 0보다 크다(입금 및 출금액의 오류검사 않겠다는 뜻)
*		- 고객의 계좌정보는 '계좌번호, 고객이름, 고객의 잔액' 세가지만 저장 및 관리한다.
*		- 둘 이상의 고객 정보 저장을 위해 배열을 사용한다.
*		- 계좌번호는 정수의 형태이다.
*
*	실행의 예 :
*		P.51 참고
*/

#include <iostream>
#include <cstring>	// strcpy함수를 사용하기위함
using namespace std;
// 이름의 최대길이 선언
const int NAME_LEN = 20;

void ShowMenu();
int MenuChoice();
void MakeMenu();
void DepositMenu();
void WithdrawMenu();
void InquireMenu();

// c++의 enum선언 
// 개설, 입금, 출금, 조회, 나가기
enum { Make = 1, Deposit, Withdraw, Inquire, Exit };

struct Account
{
	int accID = -1;	// 계좌번호
	int balance;	// 잔액
	char cusName[NAME_LEN];	// 고객이름	
};

Account accArr[100];	// Account 저장할 배열
int accNum = 0;			// 저장된 Account 수

int main() 
{
	while(true)
	{
		ShowMenu();
		int choice = MenuChoice();

		switch(choice)
		{
		case Make:
			MakeMenu();
			break;
		case Deposit:
			DepositMenu();
			break;
		case Withdraw:
			WithdrawMenu();
			break;
		case Inquire:
			InquireMenu();
			break;
		case Exit:
			return 0;
		default:
			cout << "입력이 잘못됐습니다." << endl;
			break;
		}
	}
}

void ShowMenu()
{
	cout << endl;
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입	금" << endl;
	cout << "3. 출	금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;	
}

int MenuChoice()
{
	int selectedMenu = -1;
	cout << "선택: ";	
	cin >> selectedMenu;
	cout << endl;	

	return selectedMenu;
}

void MakeMenu()
{
	int id = 0;
	char name[NAME_LEN];
	int depositMoney;
	
	cout << "[계좌개설]" << endl;

	cout << "계좌ID: ";
	cin >> id;
	// cout << endl;

	if(id <= 0)
	{
		cout << "ID는 0보다 작거나 같을 수 없습니다." << endl;
		return;
	}

	cout  << "이름: ";
	cin >> name;
	// cout << endl;

	cout << "입금액: ";
	cin >> depositMoney;
	// cout << endl;

	Account newAcc = { id, depositMoney };
	strcpy(newAcc.cusName, name);

	accArr[accNum++] = newAcc;
}

void DepositMenu()
{
	int id;
	
	cout << "[입	금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	// cout << endl;

	int accIndex = -1;
	for(int i = 0; i < accNum; i++)
	{
		if(accArr[i].accID == id)
		{
			accIndex = i;
			break;
		}		
	}

	if(accIndex < 0 || accArr[accIndex].accID <= 0)
	{
		cout << "계좌번호에 맞는 계좌가 없습니다." << endl;
		return;
	}

	int depositMoney;
	cout << "입금액: ";
	cin >> depositMoney;
	// cout << endl;

	accArr[accIndex].balance += depositMoney;

	cout << "입금완료" << endl;
}

void WithdrawMenu()
{
	int id;
	
	cout << "[출	금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	// cout << endl;

	int accIndex = -1;
	for(int i = 0; i < accNum; i++)
	{
		if(accArr[i].accID == id)
		{
			accIndex = i;
			break;
		}		
	}

	if(accIndex < 0 || accArr[accIndex].accID <= 0)
	{
		cout << "계좌번호에 맞는 계좌가 없습니다." << endl;
		return;
	}

	int depositMoney;
	cout << "출금액: ";
	cin >> depositMoney;
	// cout << endl;

	accArr[accIndex].balance -= depositMoney;

	cout << "출금완료" << endl;
}

void InquireMenu()
{
	cout << "-----------------" << endl;
	for(int i = 0; i < accNum; i++)
	{
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이름: " << accArr[i].cusName << endl;
		cout << "잔액: " << accArr[i].balance << endl;
		cout << endl;
	}
	cout << "-----------------" << endl;
}
