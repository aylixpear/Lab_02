// Lab_02.cpp
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 5

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double alpha; // вхідний кут у радіанах
    double z1;    // результат 1-ї формули
    double z2;    // результат 2-ї формули

    cout << "alpha (in rad) = ";
    cin >> alpha;

    // Обчислення z1 = 1 - 1/4 * sin^2(2*alpha) + cos(2*alpha)
    z1 = 1.0 - 0.25 * pow(sin(2 * alpha), 2) + cos(2 * alpha);

    // Обчислення z2 = cos^2(alpha) + cos^4(alpha)
    z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
// Зміна у гілці main