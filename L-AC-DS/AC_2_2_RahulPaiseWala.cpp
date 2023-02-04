// 2.2 Input/Output in C++ | Data Structures and Algorithm Course in C++ | Lecture 2.2
// Print sum of two integer Number

#include<iostream>
using namespace std;

int main()
{

    // Rahul ke mummy ne diyea amount 1 paise
    int amount1;
    cout<<"Mummy ne diyea Rahul ko itne paise: ";
    cin>>amount1; // mummy ke paise ko co amount1 me store kiya!

    // Rahul ke papa ne diyea amount 2 paise
    int amount2;
    cout<<"papa ne diyea Rahul ko itne paise: ";
    cin>>amount2; // papa ke paise ko co amount2 me store kiya!

    
    
    // mummy, papa ke paiso ki total "amount1 + amount 2", inki totol store ki "sum" variable  me
    int sum = amount1 + amount2;

    cout<<"\nab Rahul ke pas huea itne paise: "<<sum;

    
    return 0;
}