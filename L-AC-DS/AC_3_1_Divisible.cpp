// 3.1 Break and Continue statement in C++ Programming | Guaranteed Placement Course | Lecture 3.1
// print number 1 to 100 expect those are divisible by 3.

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if(i%3 == 0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}