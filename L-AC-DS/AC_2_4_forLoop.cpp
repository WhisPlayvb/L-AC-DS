// 2.4 Introduction to Loops in C++ programming | Guaranteed Placement Course | Lecture 2.4
// For Loop for 
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter number to find its sum"<<endl; // example n=5,  1+2+3+4+5=15
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<sum<<"+"<<i<<endl;
        sum = sum+i;
    }

    cout<<"sum of "<<n<<" is: "<<sum;
    return 0;
}