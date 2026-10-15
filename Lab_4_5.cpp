// Lab_4_5.cpp
// Грушка Олександр
// Лабораторна робота № 4.5
// Попадання точки у заштриховану область (Варіант 5)

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    double R, x, y;

    cout << "R = "; cin >> R;

    // ---------------- Спосіб 1: 10 випадкових точок ----------------
    cout << "\n--- Спосіб 1: 10 випадкових точок ---" << endl;
    cout << "-----------------------------------" << endl;
    cout << "|" << setw(8) << "X" << " |" << setw(8) << "Y" << " |" << setw(10) << "Hit?" << " |" << endl;
    cout << "-----------------------------------" << endl;

    srand((unsigned)time(NULL)); // Ініціалізація генератора випадкових чисел

    for (int i = 0; i < 10; i++) {
        // Генерація x та y на інтервалі [-R; R]
        x = -R + (2.0 * R * rand()) / RAND_MAX;
        y = -R + (2.0 * R * rand()) / RAND_MAX;

        bool isHit = (x * x + y * y <= R * R) && 
                     ((x >= 0 && y >= 0) || 
                      (x <= 0 && y >= 0 && y >= x + R) || 
                      (x <= 0 && y <= 0));

        cout << "|" << setw(8) << fixed << setprecision(2) << x 
             << " |" << setw(8) << setprecision(2) << y 
             << " |" << setw(10) << (isHit ? "yes" : "no") << " |" << endl;
    }
    cout << "-----------------------------------" << endl;

    // ---------------- Спосіб 2: Введення 10 точок з клавіатури ----------------
    cout << "\n--- Спосіб 2: Введення 10 точок ---" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Точка " << i + 1 << " (x y): ";
        cin >> x >> y;

        bool isHit = (x * x + y * y <= R * R) && 
                     ((x >= 0 && y >= 0) || 
                      (x <= 0 && y >= 0 && y >= x + R) || 
                      (x <= 0 && y <= 0));

        if (isHit) {
            cout << "  -> Попадання (yes)" << endl;
        } else {
            cout << "  -> Промах (no)" << endl;
        }
    }

    return 0;
}