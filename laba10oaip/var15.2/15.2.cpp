#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include <iostream>

void main()
{
    //2.	���������� � 0 n ����� � ����� � ����� �� ������� p.
    setlocale(LC_CTYPE, "Russian");

    char buffer[33];
    std::cout << "������� ����� A ";
    int a;
    std::cin >> a;

    _itoa_s(a, buffer, 2);
    std::cout << "����� A " << buffer << '\n';

    std::cout << "������� n ";
    int n;
    std::cin >> n;

    int position = -1;
    while (position < 1)
    {
        std::cout << "������� q ";
        std::cin >> position;
    }

    unsigned int mask = (1 << n) - 1;
    a &= ~(mask << (position - 1));

    _itoa_s(a, buffer, 2);
    std::cout << "���������: " << buffer << "\n";
}
