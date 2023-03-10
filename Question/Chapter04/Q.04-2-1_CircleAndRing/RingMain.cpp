#include "Ring.h"
#include <iostream>

using namespace std;

int main(void)
{
    Ring ring;
    if (!ring.Init(1, 1, 4, 2, 2, 9))
    {
        cout << "값이 잘못됐습니다." << endl;
        return 0;
    }

    ring.ShowRingInfo();

    return 0;
}