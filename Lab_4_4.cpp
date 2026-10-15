// Lab_4_4.cpp
// Грушка Олександр
// Лабораторна робота № 4.4
// Табуляція кусочно-неперервної функції (Варіант 5)

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double R, x_poch, x_kin, dx, x, y;

    // Введення параметрів
    cout << "R = "; cin >> R;
    cout << "x_poch = "; cin >> x_poch;
    cout << "x_kin = "; cin >> x_kin;
    cout << "dx = "; cin >> dx;

    // Шапка таблиці
    cout << fixed;
    cout << "-----------------------" << endl;
    cout << "|" << setw(8) << "X" << " |" << setw(10) << "Y" << " |" << endl;
    cout << "-----------------------" << endl;

    x = x_poch;
    while (x <= x_kin + dx / 2.0) {
        // Обчислення залежно від ділянки
        if (x <= -2.0) {
            y = x + 3.0;
        } else if (x <= 4.0) {
            y = 1.0 - (R + 1.0) * (x + 2.0) / 6.0;
        } else if (x <= 8.0 - R) {
            y = -R;
        } else if (x <= 8.0 + R) {
            y = sqrt(R * R - (x - 8.0) * (x - 8.0)) - R;
        } else {
            y = -R;
        }

        // Вивід рядка таблиці
        cout << "|" << setw(8) << setprecision(2) << x 
             << " |" << setw(10) << setprecision(4) << y << " |" << endl;

        x += dx;
    }

    cout << "-----------------------" << endl;

    return 0;
}