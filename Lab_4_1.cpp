// Lab_4_1.cpp
// Грушка Олександр
// Лабораторна робота № 4.1
// Цикли (Варіант 5)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double P;
    int i;

    // 1. Цикл while
    P = 1.0;
    i = 1;
    while (i <= 15) {
        double term = (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / (1.0 * i * i);
        P *= term;
        i++;
    }
    cout << "1) while:    " << scientific << setprecision(8) << P << endl;

    // 2. Цикл do...while
    P = 1.0;
    i = 1;
    do {
        double term = (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / (1.0 * i * i);
        P *= term;
        i++;
    } while (i <= 15);
    cout << "2) do-while: " << scientific << setprecision(8) << P << endl;

    // 3. Цикл for (інкремент i++)
    P = 1.0;
    for (i = 1; i <= 15; i++) {
        double term = (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / (1.0 * i * i);
        P *= term;
    }
    cout << "3) for (++): " << scientific << setprecision(8) << P << endl;

    // 4. Цикл for (декремент i--)
    P = 1.0;
    for (i = 15; i >= 1; i--) {
        double term = (pow(sin(i), 2) + pow(cos(1.0 / i), 2)) / (1.0 * i * i);
        P *= term;
    }
    cout << "4) for (--): " << scientific << setprecision(8) << P << endl;

    return 0;
}