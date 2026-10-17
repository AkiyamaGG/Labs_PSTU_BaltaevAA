#include<iostream>
#include <clocale>
#include<cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Меняем таблицу кодировки для русского языка

    // 1 Задача

    // тип float
    float fa = 1000 , fb = 0.0001;                                             // Задаем переменные a и b
    float fc = pow(fa,3) + 3 * pow(fa,2) * fb + 3 * fa * pow(fb,2) + pow(fb,3); // (a+b)^3
    float fd = pow(fa,3) + 3 * pow(fa,2) * fb;                                  // (a^3 + 3a^2b)
    float fe = 3 * fa * pow(fb,2) + pow(fb,3);                                  // (3ab^2 + b^3)

    float fresult = (fc - fd) / fe;                                             // ищем полный результат

    // тип double
    double da = 1000 , db = 0.0001;                                              // Задаем переменные a и b
    double dc = pow(da,3) + 3 * pow(da,2) * db + 3 * da * pow(db,2) + pow(db,3); // (a+b)^3
    double dd = pow(da,3) + 3 * pow(da,2) * db;                                  // (a^3 + 3a^2b)
    double de = 3 * da * pow(db,2) + pow(db,3);                                  // (3ab^2 + b^3)

    double dresult = (dc - dd) / de;                                             // ищем полный результат

    // Вывод результатов 1 задачи

    cout << "1 Задача:" << endl;

    cout << "Результат с типом float: " << fresult << endl;                      // вывод результата float
    cout << "Результат с типом double: " << dresult << endl;                     // вывод результата float
    
    return 0;
}