// Lab_4_2.cpp
// Грушка Олександр
// Лабораторна робота № 4.2
// Табуляція функції однієї змінної (Варіант 5)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double xp, xk, dx, x, y;

    // Введення початкових даних
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    // Заголовок таблиці
    cout << fixed;
    cout << "-----------------------" << endl;
    cout << "|" << setw(8) << "x" << " |" << setw(10) << "y" << " |" << endl;
    cout << "-----------------------" << endl;

    x = xp;
    // dx / 2.0 додається для компенсації похибки обчислень типів з плаваючою крапкою
    while (x <= xk + dx / 2.0) {
        // Перевірка ділення на нуль у спільній частині (якщо x = -2)
        if (fabs(x + 2.0) < 1e-7) {
            cout << "|" << setw(8) << setprecision(2) << x 
                 << " |" << setw(10) << "undefined" << " |" << endl;
        } else {
            double main_part = 1.0 / fabs(x + 2.0) + 1.0;
            double branch_part;

            // Вибір гілки
            if (x < 1.0) {
                branch_part = 7.0 * x * x + x - 8.0;
            } else if (x <= 4.0) {
                double arg = (x + 4.0) / sqrt(11.0);
                branch_part = (1.0 / tan(arg)) + 3.0; // ctg(a) = 1 / tan(a)
            } else {
                branch_part = sqrt(1.0 + fabs(pow(cos(x), 3)));
            }

            y = main_part - branch_part;

            // Вивід рядка таблиці
            cout << "|" << setw(8) << setprecision(2) << x 
                 << " |" << setw(10) << setprecision(4) << y << " |" << endl;
        }

        x += dx;
    }

    cout << "-----------------------" << endl;

    return 0;
}