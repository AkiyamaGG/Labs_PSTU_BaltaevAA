#include <iostream>
#include <clocale>
#include <cstring>
using namespace std;

int isVowel(char c)
{
    int r = (strchr("aeiouAEIOU", c) != NULL);
    return r;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char s[256], w[256];
    int len = 0, vow = 0, cnt = 0;
    cout << "Введите текст (слова через пробел, в конце точка): ";
    cin.getline(s, 256);
    cout << "Слова без гласных букв:" << endl;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ' && s[i] != '.')
        {
            w[len] = s[i];
            len++;
            if (isVowel(s[i]))
                vow = 1;
        }
        else
        {
            if (len > 0 && vow == 0)
            {
                w[len] = '\0';
                cout << w << endl;
                cnt++;
            }
            len = 0;
            vow = 0;
        }
    }
    if (cnt == 0)
        cout << "Таких слов нет" << endl;
    return 0;
}
