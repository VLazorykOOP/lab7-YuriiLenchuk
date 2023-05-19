#include <iostream>
#include "Tasks.h"
using namespace std;

int main()
{
    cout << "OOP. Template for laboratory work #2.\n";

    char ch = '5';
    do {
        system("cls");
        cout << "1  Task1\n";
        cout << "2  Task2\n";
        cout << "3  Task3\n";
        cout << "4  Task4\n";
        cout << "5  Exit\n";
        ch = cin.get();

        cin.get();

        switch (ch) {
        case '1': Task1();   break;
        case '2': Task2();   break;
        case '3': Task3();   break;
        case '4': Task4();   break;
        case '5': return 0;
        }
        cout << " Press any key and enter\n";
        ch = cin.get();
    } while (ch != '5');

    return 0;
}