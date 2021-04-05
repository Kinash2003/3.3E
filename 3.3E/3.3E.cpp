//3.3E.cpp
#include <iostream>
#include "Date.h"
#include <Windows.h> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Date A, B, C, D;
    int result;

    cout << " Enter t1: " << endl;
    cin >> A;
    cout << " Кількість елементів класу Date : " << Object::Count() << endl;
    cout << " Enter t2: " << endl;
    cin >> B;
    cout << " Кількість елементів класу Date : " << Object::Count() << endl;
    cout << " Comparison Triad: " << endl;
    result = A.Сomparison(A, B);
    A.TriadResult(result);
    cout << " Кількість елементів класу Date : " << Object::Count() << endl;
    cout << " Enter d1: " << endl;
    cin >> C;
    cout << " Кількість елементів класу Date : " << Object::Count() << endl;
    cout << " Enter d2: " << endl;
    cin >> D;
    cout << " Кількість елементів класу Date : " << Object::Count() << endl;
    cout << " Comparison Date: " << endl;
    result = C.Сomparison(C, D);
    C.date1(result);
    cout << " Кількість елементів класу Date : " << Object::Count() << endl;
    cout << " A2++ " << endl; cout << A++ << endl;
    cout << " A2-- " << endl; cout << A-- << endl;
    cout << " ++A2 " << endl; cout << ++A << endl;
    cout << " --A2 " << endl; cout << --A << endl;
    cout << " Кількість елементів класу Date : " << Object::Count() << endl;
}
