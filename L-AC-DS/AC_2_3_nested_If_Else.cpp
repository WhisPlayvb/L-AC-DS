// 2.3 If/else statement in C++ programming | Data Structure and Algorithm Course | Lecture 2.3
//  if else condition (rahul kiske shat jaayega)

#include <iostream>
using namespace std;

int main()
{
    /* rahul ki pass
        1. 5000rs se jada paise hoge to vo jaayega neha ke shat!
        2. 2000rs se jada aur 5000rs se kam paise hoge to vo jaayega rashmi ke shat!
        3. 0rs paise he nahi hoge to vi jaayega firends/dosto ke shat!
    */
    int saving;
    cout << "Rahul ke pas kitne saving hai:";
    cin >> saving;

    if (saving > 5000)
    {
        // ager rahul ke pass jada paise hoge to vo naha ko roadtrip pe leke jayega!
        if (saving > 10000)
        {
            cout << "Rahul jaayega roadtrip pe Neha ke shat." << endl;
        }
        else
        {
            cout << "Rahul jaayega shopping pe Neha ke shat." << endl;
        }
    }
    else if (saving > 2000)
    {
        cout << "Rahul jaayega Rashmi ke shat." << endl;
    }
    else
    {
        cout << "Firends" << endl;
    }
    return 0;
}

// Moral The Story: padhai karo dosto, paise kamav nahi to rahul subki girlfirend leke jaayega!