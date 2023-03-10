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

class CONTAC600 // ĸ��ȭ�� �Ǿ��ִ� �� ����� CONTAC600 Ŭ����
{
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient // ȯ�� Ŭ������ ����������.
{
public:
    void TakeCONTAC600(const CONTAC600 &cap) const { cap.Take(); }
};

int main(void)
{
    CONTAC600 cap;
    ColdPatient sufferer;
    // ��ԱⰡ ����������. => ȣ�� ������ �Ű澵 �ʿ䰡 ��������!
    sufferer.TakeCONTAC600(cap);
    return 0;
}
