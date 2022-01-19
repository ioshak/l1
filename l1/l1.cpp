// l1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <windows.h>

#include <cmath>//підключити бібліотеку маth

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double Pi = 4 * atan(1.);//число пі
    int a;
    double z1, z2;

    cout << "a= ";
    cin >> a;

    z1 = pow(cos(3 / 8 * Pi - a / 4), 2) - pow(cos(11 / 4 * Pi + a / 4), 2);
    z2 = sqrt(2) / 2 * sin(a / 2);

    cout << "z1 = " << z1 << endl;

    cout << "z2 = " << z2 << endl;
    cout << "change1";

    cin.get();//чекає введення якогось символу(або натискання клавіші) зручно коли запускаємо не з консолі




    return 0;

}