// 3.1 Break and Continue statement in C++ Programming | Guaranteed Placement Course | Lecture 3.1
// use of continu,break

#include <iostream>
using namespace std;

int main()
{
    int PocketMoney = 3000;
    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }

        if (PocketMoney == 0)
        {
            break;
        }
        cout << "go out today! [date :" << date << "]" << endl;
    }
    return 0;
}