#include <iostream>
#include <clocale>
#include <cstdarg>
using namespace std;

int sum(int k, ...)
{
    va_list args;
    va_start(args, k);
    int prev = va_arg(args, int);
    int s = 0;
    for (int i = 1; i < k; i++)
    {
        int cur = va_arg(args, int);
        s += prev * cur;
        prev = cur;
    }
    va_end(args);
    return s;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "sum(5 параметров) = " << sum(5, 1, 2, 3, 4, 5) << endl;
    cout << "sum(10 параметров) = " << sum(10, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20) << endl;
    cout << "sum(12 параметров) = " << sum(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12) << endl;
    return 0;
}
