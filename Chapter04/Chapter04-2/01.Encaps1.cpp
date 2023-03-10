// 캡슐화의 잘못된 예제
#include <iostream>
using namespace std;

class SinivelCap // 콧물 처치용 캡슐
{
public:
    void Take() const { cout << "콧물이 싹~ 납니다." << endl; }
};

class SneezeCap // 재채기 처치용 캡슐
{
public:
    void Take() const { cout << "재채기가 멎습니다." << endl; }
};

class SnuffleCap // 코막힘 처치용 캡슐
{
public:
    void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
};

class ColdPatient
{
public:
    void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
    void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
    void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main(void)
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient snufferer;
    // 코감기의 처치를 위해서 콧물, 재채기, 코막힘을 치료하기 위한 캡슐을
    // 순서대로 복용하고 있다.
    // 항상 이 순서가 보장되어야 한다면 설계상 잘못된 코드이다.
    snufferer.TakeSinivelCap(scap);
    snufferer.TakeSneezeCap(zcap);
    snufferer.TakeSnuffleCap(ncap);
    return 0;
}