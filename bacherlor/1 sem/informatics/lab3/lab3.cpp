#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Меняем таблицу кодировки для русского языка

    double a = 0.1, b = 1, eps = 0.0001; // границы изменения x и заданная точность
    int n = 10, k = 10;                  // n - число слагаемых, k - число отрезков разбиения
    double h = (b - a) / k;              // шаг изменения x
    double x, t, sn, se;                 // x - аргумент, t - текущее слагаемое, sn и se - суммы

    cout << "Вычисление функции" << endl; // заголовок результата

    for (int j = 0; j <= k; j++)
    {
        x = a + j * h; // очередное значение аргумента
        t = x;         // первое слагаемое ряда
        sn = x;        // сумма для заданного n

        for (int i = 1; i <= n; i++)
        {
            t = -t * x * x / (2 * i * (2 * i + 1)); // следующее слагаемое через предыдущее
            sn += t;
        }

        t = x;  // снова первое слагаемое
        se = 0; // сумма для заданной точности

        for (int m = 1; fabs(t) >= eps; m++)
        {
            se += t;
            t = -t * x * x / (2 * m * (2 * m + 1));
        }

        cout << "X=" << x << " SN=" << sn
             << " SE=" << se << " Y=" << sin(x) << endl;
    }

    return 0;
}
