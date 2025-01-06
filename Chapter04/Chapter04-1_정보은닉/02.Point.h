#ifndef __POINT_H__
#define __POINT_H__

class Point
{
private:
    // 정보 은닉
    int x;
    int y;

public:
    bool InitMembers(int xpos, int ypos);
    // 함수를 통해서 Get, Set (정보 은닉)
    // 액세스 함수라고 한다 like C#의 프로퍼티
    int GetX() const; // const함수 => 이 함수 내에서는 멤버변수의 값을 변경하지 않겠다.
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};

#endif