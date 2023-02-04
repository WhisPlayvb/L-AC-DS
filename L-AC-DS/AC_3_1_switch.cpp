// 3.2 Switch-Case statement in C++ Programming | Guaranteed Placement Course | Lecture 3.2
//  multiple languages robot

#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Input a Character" << endl;
    cin >> button;

    // if (button == 'a')
    // {
    //     cout << "Hello" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "Namaste" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "Salut" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "Hole" << endl;
    // }
    // else if (button == 'e')
    // {
    //     cout << "Ciao" << endl;
    // }
    // else
    // {
    //     cout << "I am still learning more" << endl;
    // }

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Salut" << endl;
        break;
    case 'd':
        cout << "Hole" << endl;
        break;
    case 'e':
        cout << "Ciao" << endl;
        break;
    default:
        cout << "I am still learning more" << endl;
    }
}