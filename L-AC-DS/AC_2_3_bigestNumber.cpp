// 2.3 If/else statement in C++ programming | Data Structure and Algorithm Course | Lecture 2.3
// find the grestest number from 3.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter number1" << endl;
    cin >> a;
    cout << "Enter number2" << endl;
    cin >> b;
    cout << "Enter number3" << endl;
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    else
    {
        if (c > b)
            {
                cout << c << endl;
            }
            else
            {
                cout << b << endl;
            }
    }

    return 0;
}
