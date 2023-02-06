// 5.2 How to reverse a number | Check if a number is Prime or Armstrong | C++ Placement Course | # 5.2
//  print numbers in Reverse order.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number to reverse: ";
    cin>> n;

    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse =reverse*10 + lastdigit;
        n= n/10;
    }

    cout<<reverse;
    return 0;
}
