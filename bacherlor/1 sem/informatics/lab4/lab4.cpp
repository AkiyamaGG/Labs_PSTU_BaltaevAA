#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    const int N = 100;
    int a[N], n, k = 0, p = -1;
    srand(time(0));
    cout << "Введите длину массива (от 1 до 99): ";
    cin >> n;
    if (n < 1 || n >= N)
        cout << "Длина должна быть от 1 до 99" << endl;
    else
    {
        for (int i = 0; i < n; i++)
            a[i] = rand() % 10;
        cout << "Исходный массив:" << endl;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                a[k++] = a[i];
        }
        n = k;
        cout << "Массив после удаления нулей:" << endl;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        for (int i = 0; i < n && p == -1; i++)
        {
            if (a[i] % 2 == 0)
                p = i;
        }
        if (p != -1)
        {
            for (int i = n; i > p + 1; i--)
                a[i] = a[i - 1];
            a[p + 1] = a[p] + 2;
            n++;
        }
        cout << "Массив после добавления элемента:" << endl;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
