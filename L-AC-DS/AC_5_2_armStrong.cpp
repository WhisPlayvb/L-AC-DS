// 5.2 How to reverse a number | Check if a number is Prime or Armstrong | C++ Placement Course | # 5.2
//  print numbers in Reverse order.

#include <iostream>
#include <cmath> // #include <cmath> or #include <math.h> both works.

using namespace std;

int main()
{
    int n;
    cout << "Enter number to find armstrong: ";
    cin >> n;

    int sum = 0;
    int original_n = n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit); // ummm that code wasn't working, you can change "pow(lastdigit,3)" to "(lastdigit * lastdigit * lastdigit)"  .
        n = n / 10;                                         // maybe i'm dumb that i can't get the right output from that line of code (line no. 21). 
    }

    if (sum == original_n)
    {
        cout << original_n << " is an armstrong" << endl;
    }
    else
    {
        cout << original_n << " is not an armstrong" << endl;
    }
    return 0;
}
