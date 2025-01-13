// EmployeeManager4 예제를 기반으로 해외파견직 클래스를 추가하는 문제

#include <iostream>
#include <cstring>
using namespace std;

namespace RISK_LEVEL
{
    enum
    {
        RISK_A,
        RISK_B,
        RISK_C
    };
}

class Employee
{
private:
    char name[100];

public:
    Employee(char *name)
    {
        strcpy(this->name, name);
    }
    void ShowYourName() const
    {
        cout << "name: " << name << endl;
    }

    // virtual int GetPay() const
    // {
    //     return 0;
    // }
    // virtual void ShowSalaryInfo() const
    // {
    // }

    // 아래와 같이 작성한 함수를 '순수 가상함수'라고 한다.
    // 순수 가상함수는 몸체를 구현하지 않는 추상 함수이고, 순수 가상함수가 포함된 클래스는 추상 클래스가 되어서 인스턴스화 할 수 없게된다.
    virtual int GetPay() const = 0;
    virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Employee
{
private:
    int salary;

public:
    PermanentWorker(char *name, int money)
        : Employee(name), salary(money)
    {
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl
             << endl;
    }
};

class TemporaryWorker : public Employee
{
private:
    int workTime;
    int payPerHour;

public:
    TemporaryWorker(char *name, int pay)
        : Employee(name), workTime(0), payPerHour(pay)
    {
    }
    void AddWorkTime(int time)
    {
        workTime += time;
    }
    int GetPay() const
    {
        return workTime * payPerHour;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl
             << endl;
    }
};

class SalesWorker : public PermanentWorker
{
protected:
    int salesResult;   // 월 판매실적
    double bonusRatio; // 상여금 비율
public:
    SalesWorker(char *name, int money, double ratio)
        : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
    {
    }
    void AddSalesResult(int value)
    {
        salesResult += value;
    }
    int GetPay() const
    {
        return PermanentWorker::GetPay() // PermanentWorker의 GetPay 함수 호출
               + (int)(salesResult * bonusRatio);
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl
             << endl;
    }
};

class ForeignSalesWorker : public SalesWorker
{
private:
    // 위험수당 비율
    float riskRatio;

public:
    ForeignSalesWorker(char *name, int money, double ratio, int riskLevel)
        : SalesWorker(name, money, ratio)
    {
        switch (riskLevel)
        {
        case RISK_LEVEL::RISK_A:
            riskRatio = 0.3f;
            break;
        case RISK_LEVEL::RISK_B:
            riskRatio = 0.2f;
            break;
        case RISK_LEVEL::RISK_C:
            riskRatio = 0.1f;
            break;
        default:
            riskRatio = 0;
            break;
        }
    }
    virtual int GetPay() const override
    {
        int base = SalesWorker::GetPay();
        return base + (int)(base * riskRatio);
    }
    virtual void ShowSalaryInfo() const override
    {
        ShowYourName();
        cout << "salary: " << SalesWorker::GetPay() << endl;
        cout << "risk pay: " << (int)(SalesWorker::GetPay() * riskRatio) << endl; // 위험수당
        cout << "sum: " << GetPay() << endl                                       // 합계
             << endl;
    }
};

class EmployeeHandler
{
private:
    Employee *empList[50];
    int empNum;

public:
    EmployeeHandler() : empNum(0)
    {
    }
    void AddEmployee(Employee *emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        // ShowSalaryInfo함수는 virtual함수이기 때문에 실제 배열 타입은 Employee이지만
        // 실제 최종 객체의 ShowSalaryInfo함수를 호출하게된다.
        // 밑에 GetPay함수도 마찬가지
        for (int i = 0; i < empNum; i++)
            empList[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        for (int i = 0; i < empNum; i++)
            sum += empList[i]->GetPay();

        cout << "salary sum: " << sum << endl;
    }
    ~EmployeeHandler()
    {
        for (int i = 0; i < empNum; i++)
            delete empList[i];
    }
};

int main(void)
{
    // 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
    EmployeeHandler handler;

    // 해외 영업직 등록
    ForeignSalesWorker *fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    fseller1->AddSalesResult(7000); // 영업실적 7000
    handler.AddEmployee(fseller1);

    ForeignSalesWorker *fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    fseller2->AddSalesResult(7000); // 영업실적 7000
    handler.AddEmployee(fseller2);

    ForeignSalesWorker *fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
    fseller3->AddSalesResult(7000); // 영업실적 7000
    handler.AddEmployee(fseller3);

    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSalary();
    return 0;
}