// Lab_4_3.cpp
// Грушка Олександр
// Лабораторна робота № 4.3
// Табуляція функції з логічними умовами (Варіант 5)

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x_poch, x_kin, dx, x, F;

    // Введення значень параметрів та інтервалу
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "X_poch = "; cin >> x_poch;
    cout << "X_kin = "; cin >> x_kin;
    cout << "dX = "; cin >> dx;

    // Шарпка таблиці
    cout << fixed;
    cout << "-----------------------" << endl;
    cout << "|" << setw(8) << "X" << " |" << setw(10) << "F" << " |" << endl;
    cout << "-----------------------" << endl;

    x = x_poch;
    while (x <= x_kin + dx / 2.0) {
        bool undefined = false;

        // Перевірка умов для гілок
        if (x < 0 && b != 0) {
            // Гілка 1: a - x / (10 + b)
            if (fabs(10.0 + b) < 1e-7) { // перевірка ділення на нуль (якщо b = -10)
                undefined = true;
            } else {
                F = a - x / (10.0 + b);
            }
        } else if (x > 0 && b == 0) {
            // Гілка 2: (x - a) / (x - c)
            if (fabs(x - c) < 1e-7) { // перевірка ділення на нуль (якщо x = c)
                undefined = true;
            } else {
                F = (x - a) / (x - c);
            }
        } else {
            // Гілка 3: 3 * x + 2 / c
            if (fabs(c) < 1e-7) { // перевірка ділення на нуль (якщо c = 0)
                undefined = true;
            } else {
                F = 3.0 * x + 2.0 / c;
            }
        }

        // Вивід рядка таблиці
        if (undefined) {
            cout << "|" << setw(8) << setprecision(2) << x 
                 << " |" << setw(10) << "undefined" << " |" << endl;
        } else {
            cout << "|" << setw(8) << setprecision(2) << x 
                 << " |" << setw(10) << setprecision(4) << F << " |" << endl;
        }

        x += dx;
    }

    cout << "-----------------------" << endl;

    return 0;
}