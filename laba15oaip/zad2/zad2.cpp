#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");
    std::string str;
    std::getline(std::cin, str);
    std::transform(str.begin(), str.end(), str.begin(), toupper);
    for (int i = 0; i < str.length(); i++) { // идем по символам
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            str[i] = '?';
    }
    std::cout << str << std::endl;
}