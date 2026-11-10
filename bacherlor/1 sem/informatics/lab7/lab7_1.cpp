#include <iostream>
#include <clocale>
using namespace std;

struct Complex
{
    double re;
    double im;
};

int multiply(int a, int b)
{
    int r = a * b;
    return r;
}

Complex multiply(Complex a, Complex b)
{
    Complex r;
    r.re = a.re * b.re - a.im * b.im;
    r.im = a.re * b.im + a.im * b.re;
    return r;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int x, y;
    Complex c1, c2, c3;
    cout << "Введите два целых числа: ";
    cin >> x >> y;
    cout << "Произведение целых чисел: " << multiply(x, y) << endl;
    cout << "Введите два комплексных числа (Re Im Re Im): ";
    cin >> c1.re >> c1.im >> c2.re >> c2.im;
    c3 = multiply(c1, c2);
    cout << "Произведение комплексных чисел: Re = " << c3.re << ", Im = " << c3.im << endl;
    return 0;
}
