#include <iostream>
using namespace std;
// Функция выделения подстроки
char* substr(char* str, int start, int length = 0)
{
    char* s;
    // Определить длину исходной строки
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
        len++;
    // Определить позицию последнего символа подстроки
    if (length > 0)
    {
        if (start + length < len)
            len = start + length;
    }
    else // length < 0
        len = len + length;
    int newlen = len - start + 1; // длина подстроки
    s = new char[newlen];
    // Копирование символов подстроки
    int j = 0;
    for (int i = start; i < len; i++)
    {
        s[j] = str[i]; j++;
    }
    s[j] = '\0';
    return(s);
}
    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        char str[] = "Я люблю спать";
        char* t;
        int start, length;
        cout << str << endl;
        cout << "Введите начальную позицию" << endl;
        cin >> start;
        cout << "Введите длину подстроке" << endl;
        cin >> length;
        
        t = substr(str, start-1, length);
        cout << t << endl;
     }
