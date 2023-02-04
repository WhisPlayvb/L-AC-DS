//2.1 Data Types & Type Modifiers | Data Structures & Algorithms Course in C++ | Lecture 2.1
// Printing size of Data type and type modifiers

#include<iostream>
using namespace std;

int main()
{
    int a;
    a = 12;

    cout<<"Size of Int "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of Float "<<sizeof(b)<<endl;    

    char c;
    cout<<"Size of Char "<<sizeof(b)<<endl;

    bool d;
    cout<<"Size of Boolean "<<sizeof(d)<<endl;

    short int si;
    cout<<"Size of shortInt "<<sizeof(si)<<endl;

    long int li;
    cout<<"Size of longInt "<<sizeof(li)<<endl;

    return 0;
}   