// Lab_4_7.cpp
// Грушка Олександр
// Лабораторна робота № 4.7
// Обчислення суми нескінченного ряду (Варіант 5)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double xp, xk, dx, eps, x, S, a, R, y;
    int n;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "---------------------------------------------------------" << endl;
    cout << "|" << setw(10) << "x" 
         << "|" << setw(18) << "ln((1+x)/(1-x))" 
         << "|" << setw(15) << "S" 
         << "|" << setw(8) << "n" << "|" << endl;
    cout << "---------------------------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        n = 0;
        a = x;
        S = a;

        do {
            n++;
            R = x * x * (2.0 * n - 1.0) / (2.0 * n + 1.0);
            a *= R;
            S += a;
        } while (abs(a) >= eps);

        S *= 2.0;
        y = log((1.0 + x) / (1.0 - x));

        cout << "|" << setw(10) << setprecision(2) << x 
             << "|" << setw(18) << setprecision(6) << y 
             << "|" << setw(15) << setprecision(6) << S 
             << "|" << setw(8) << n << "|" << endl;

        x += dx;
    }
    cout << "---------------------------------------------------------" << endl;

    return 0;
}