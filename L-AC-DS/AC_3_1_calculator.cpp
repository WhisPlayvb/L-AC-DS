// 3.2 Switch-Case statement in C++ Programming | Guaranteed Placement Course | Lecture 3.2
//  implement a simple calculator using switch.

#include <iostream>
using namespace std;

int main()
{
    float n1,n2;
    cout<<"Enter two number to perform calculation"<<endl;
    cout<<"number 1: ";
    cin>>n1;

    cout<<"number 2: ";
    cin>>n2;

    char op;
    cout<<"Enter oprator ('+', '-', '*', '/') you want to perform on this two number " <<n1<<" and "<<n2<<" :"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"Enter another oprator";
    }
    return 0;
}
