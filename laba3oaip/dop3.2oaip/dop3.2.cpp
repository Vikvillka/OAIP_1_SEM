#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void main(void)
{
    /*задание 1 потоковый способ*/
	setlocale(LC_ALL, "RU");
	cout << "ВАРИАНТ7, Задание 1\n";
	char c, probel;
	cout << "Потоковый способ\n";
	probel = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(49) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	/*задание 1 форматированный способ*/
	cout << "Форматированный способ\n";
	cout << "Введите символ ";
	c = _getch();
	putchar(c);
	char ss[] = {
	'\n', ' ', ' ', ' ', ' ', ' ', c, c, c, c, c, c, c, c, c, c, '\n',
		' ', ' ', ' ', ' ', c, c, c, c, c, c, c, c, c, c, c, c, '\n',
		' ', ' ', ' ', c, c, c, c, c, c, c, c, c, c, c, c, c, c, '\n',
		' ', ' ', c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, 0,
	};
	printf(ss);
	/*Задание2 потоковый способ*/
	cout << "\nЗадание 2" << endl;
	double С,r,s;
	cout << "\nПотоковый способ\n" << endl;
	cout << "  Выберите число ";
	cin >> С;
	r = С/(2* 3.14);
	s = pow(r,2)* 3.14;
	cout << "  Площадь круга= " << s  << endl;
	/*Задание2 форматированный способ*/
	float c1,r1,s1;
	printf("\nФорматированный способ\n");
	printf("  Выберите число ");
	scanf_s("%f", &c1);
	r1 = c1 / (2 * 3.14);
	s1 = pow(r1, 2) * 3.14;
	printf("   Площадь круга=%f\n", s1);
}