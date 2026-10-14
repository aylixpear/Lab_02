// Lab_03_4.cpp
// Грушка Олександр
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5

#include <iostream>

using namespace std;

int main() {
    double x; // координата x
    double y; // координата y
    double R; // радіус кола

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Перевірка, чи точка належить зафарбованій області
    if (x * x + y * y <= R * R) {
        if (x >= 0 && y >= 0) {
            cout << "yes" << endl;
        }
        else if (x <= 0 && y <= 0) {
            cout << "yes" << endl;
        }
        else if (x <= 0 && y >= 0 && y >= x + R) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}