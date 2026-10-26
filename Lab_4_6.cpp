// Lab_4_6.cpp
// Грушка Олександр
// Лабораторна робота № 4.6
// Вкладені цикли (Варіант 5)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double P, S;
    int i, k;

    P = 1.0;
    i = 1;
    while (i <= 10) {
        S = 0.0;
        k = 1;
        while (k <= i) {
            S += 1.0 / k;
            k++;
        }
        P *= (i + S) / sqrt(S);
        i++;
    }
    cout << fixed << setprecision(8) << P << endl;

    P = 1.0;
    i = 1;
    do {
        S = 0.0;
        k = 1;
        do {
            S += 1.0 / k;
            k++;
        } while (k <= i);
        P *= (i + S) / sqrt(S);
        i++;
    } while (i <= 10);
    cout << fixed << setprecision(8) << P << endl;

    P = 1.0;
    for (i = 1; i <= 10; i++) {
        S = 0.0;
        for (k = 1; k <= i; k++) {
            S += 1.0 / k;
        }
        P *= (i + S) / sqrt(S);
    }
    cout << fixed << setprecision(8) << P << endl;

    P = 1.0;
    for (i = 10; i >= 1; i--) {
        S = 0.0;
        for (k = i; k >= 1; k--) {
            S += 1.0 / k;
        }
        P *= (i + S) / sqrt(S);
    }
    cout << fixed << setprecision(8) << P << endl;

    return 0;
}