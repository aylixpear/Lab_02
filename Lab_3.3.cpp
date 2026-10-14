// Lab_03_3.cpp
// Грушка Олександр
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 5

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x; // вхідний аргумент
    double R; // радіус / параметр
    double y; // результат

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // Обчислення y в залежності від інтервалу x
    if (x <= -2) {
        y = x + 3.0;
    }
    else if (x > -2 && x <= 0) {
        y = -0.5 * x;
    }
    else if (x > 0 && x <= 4) {
        y = -(R / 4.0) * x;
    }
    else if (x > 4 && x <= 8.0 - R) {
        y = -R;
    }
    else if (x > 8.0 - R && x <= 8.0 + R) {
        y = -R + sqrt(R * R - (x - 8.0) * (x - 8.0));
    }
    else { // x > 8.0 + R
        y = -R;
    }

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}