// ĸ��ȭ�� �߸��� ����
#include <iostream>
using namespace std;

class SinivelCap // �๰ óġ�� ĸ��
{
public:
    void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};

class SneezeCap // ��ä�� óġ�� ĸ��
{
public:
    void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap // �ڸ��� óġ�� ĸ��
{
public:
    void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
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
    // �ڰ����� óġ�� ���ؼ� �๰, ��ä��, �ڸ����� ġ���ϱ� ���� ĸ����
    // ������� �����ϰ� �ִ�.
    // �׻� �� ������ ����Ǿ�� �Ѵٸ� ����� �߸��� �ڵ��̴�.
    snufferer.TakeSinivelCap(scap);
    snufferer.TakeSneezeCap(zcap);
    snufferer.TakeSnuffleCap(ncap);
    return 0;
}