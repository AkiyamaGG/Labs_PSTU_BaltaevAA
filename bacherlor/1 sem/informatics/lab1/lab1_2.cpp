#include<iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Меняем таблицу кодировки для русского языка

    // 2 Задача

    int n = 8, m = 9; // Задаем переменные n и m
    int a,b,c;                  

    //1)
    a = n---m;
    //2)
    b = m--<n;
    //3)
    c = n++>m;

    // Вывод результатов 2 задачи

    cout << "2 Задача:" << endl;

    cout << "1)" << a << endl;
    cout << "2)" << b << endl;
    cout << "3)" << c << endl;
    
    return 0;
}