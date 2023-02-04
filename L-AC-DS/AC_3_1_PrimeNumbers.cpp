// 3.1 Break and Continue statement in C++ Programming | Guaranteed Placement Course | Lecture 3.1
// check enter number is prime or not prime

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}