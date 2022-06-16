#include <iostream> 

#include <Windows.h>  

#include "LongLong.h" 


class olderNotZero {};

void checkOlder(LongLong l) {
    if (l.getX() < 0)
        throw olderNotZero();
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    LongLong A;
    LongLong B;

    cout << " Введіть A числа: " << endl;
    cin >> A;

    try {
        checkOlder(A);
    }
    catch (olderNotZero) {
        cout << "Older can not be 0!";
    }

    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;

    cout << " Введіть B числа: " << endl;
    cin >> B;

    try {
        checkOlder(B);
    }
    catch (olderNotZero) {
        cout << "Older can not be 0!";
    }

    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;

    cout << " A + B: " << endl;
    cout << A + B << endl;

    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;

    cout << " A * B:" << endl;

    cout << A * B << endl;

    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;



    cout << " A > B " << endl;
    if (A > B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A < B " << endl;
    if (A < B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A == B " << endl;
    if (A == B) cout << " Yes " << endl; else cout << " No " << endl;

}