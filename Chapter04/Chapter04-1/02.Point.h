#ifndef __POINT_H__
#define __POINT_H__

class Point
{
private:
    // ���� ����
    int x;
    int y;

public:
    bool InitMembers(int xpos, int ypos);
    // �Լ��� ���ؼ� Get, Set (���� ����)
    // �׼��� �Լ���� �Ѵ� like C#�� ������Ƽ
    int GetX() const; // const�Լ� => �� �Լ� �������� ��������� ���� �������� �ʰڴ�.
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};

#endif