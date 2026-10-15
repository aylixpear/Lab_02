// Lab_4_6.cpp
// Грушка Олександр
// Лабораторна робота № 4.6
// Вкладені цикли (Варіант 6)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double P = 1.0; // Початкове значення для добутку

    // Зовнішній цикл для k від 1 до 15
    for (int k = 1; k <= 15; k++) {
        double S = 0.0; // Початкове значення для внутрішньої суми

        // Внутрішній цикл для i від 1 до k
        for (int i = 1; i <= k; i++) {
            S += cos(1.0 * i + k);
        }

        // Обчислення множника: (1 + S)^2
        P *= pow(1.0 + S, 2);
    }

    cout << fixed << setprecision(8);
    cout << "P = " << P << endl;

    return 0;
}