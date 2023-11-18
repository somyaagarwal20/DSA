#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter the value of ch";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << "ch is upper case" << endl;

    else if (ch >= 'a' && ch <= 'z')
        cout << "ch is in lower case" << endl;

    else
        cout << "ch is numeric value" << endl;
}