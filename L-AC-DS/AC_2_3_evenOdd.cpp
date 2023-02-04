#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number to find it's Even or Odd" << endl;
    cin >> n;

    if (n%2 == 0)
    {
        cout << n << " is an Even Number" << endl;
    }
    else
    {
        cout<<n <<" is a Odd Number"<<endl;
    }
    return 0;
}