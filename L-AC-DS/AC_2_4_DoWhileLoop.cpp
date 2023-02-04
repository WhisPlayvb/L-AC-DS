// 2.4 Introduction to Loops in C++ programming | Guaranteed Placement Course | Lecture 2.4
// Do while loop example

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    do
    {
        cout << n << endl;
        cin >> n;
    } while (n > 0);
    
    return 0;
}