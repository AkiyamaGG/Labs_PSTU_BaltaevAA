#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Меняем таблицу кодировки для русского языка

    int sum = 0;                                                        // sum - накопленная сумма

    cout << "Сумма нечетных положительных чисел, меньших 200:" << endl; // заголовок результата

    for (int i = 1; i < 200; i += 2)
    sum += i;

    cout << "Сумма = " << sum << endl;                                  // вывод результата

    return 0;
}
