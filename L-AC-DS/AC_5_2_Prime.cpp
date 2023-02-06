// 5.2 How to reverse a number | Check if a number is Prime or Armstrong | C++ Placement Course | # 5.2
//  prime number

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;

    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            cout << "not a prime" << endl;
        flag = 1;
        break;
    }

    if (flag == 0)
    {
        cout << "prime" << endl;
    }
}
