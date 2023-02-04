// 3.1 Break and Continue statement in C++ Programming | Guaranteed Placement Course | Lecture 3.1
// check enter number is prime or not prime

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number to check if it is prime or not" << endl;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a Prime Number" << endl;

            break;
        }
        //cout << i << endl;
    }

    if (i == n)
    {
        cout << n << " is Prime Number" << endl;
    }

    return 0;
}