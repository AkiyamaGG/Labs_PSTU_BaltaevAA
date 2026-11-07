#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int N = 10;

void fillMatrix(int n, int a[][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 10;
    }
}

void printMatrix(int n, int a[][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
}

void transpose(int n, int a[][N], int t[][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            t[j][i] = a[i][j];
    }
}

void sumMatrix(int n, int a[][N], int b[][N], int c[][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int a[N][N], t[N][N], c[N][N], n;
    srand(time(0));
    cout << "Введите размер квадратной матрицы (от 1 до 10): ";
    cin >> n;
    if (n >= 1 && n <= N)
    {
        fillMatrix(n, a);
        cout << "Исходная матрица A:" << endl;
        printMatrix(n, a);
        transpose(n, a, t);
        cout << "Транспонированная матрица:" << endl;
        printMatrix(n, t);
        sumMatrix(n, a, t, c);
        cout << "Сумма A и транспонированной:" << endl;
        printMatrix(n, c);
    }
    else
        cout << "Размер должен быть от 1 до 10" << endl;
    return 0;
}
