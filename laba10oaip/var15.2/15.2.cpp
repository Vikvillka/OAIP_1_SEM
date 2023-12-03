#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include <iostream>

void main()
{
    //2.	Установить в 0 n битов в числе А влево от позиции p.
    setlocale(LC_CTYPE, "Russian");

    char buffer[33];
    std::cout << "Введите число A ";
    int a;
    std::cin >> a;

    _itoa_s(a, buffer, 2);
    std::cout << "Число A " << buffer << '\n';

    std::cout << "Введите n ";
    int n;
    std::cin >> n;

    int position = -1;
    while (position < 1)
    {
        std::cout << "Введите q ";
        std::cin >> position;
    }

    unsigned int mask = (1 << n) - 1;
    a &= ~(mask << (position - 1));

    _itoa_s(a, buffer, 2);
    std::cout << "Результат: " << buffer << "\n";
}
