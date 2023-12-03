#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(void)
{
/*Задание1 потоковый способ*/
	setlocale(LC_ALL, "RU");
	cout << "Задание 1\n" << endl;
	char c, probel;
	probel = ' ';
	cout << "Потоковый способ\n";
	cout << "  Введите символ ";
	cin >> c;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(49) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;

	cout << setw(48) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(49) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
/*Задание1 форматированный способ*/
	cout << "Форматированный способ\n";
	cout << "  Введите символ ";
	c = _getch();
	putchar(c);
	char ss[] = {
		'\n',' ',' ',' ',' ',' ',c,c,c,c,c,c,c,c,c,c,'\n',
		' ',' ',' ',' ',c,c,c,c,c,c,c,c,c,c,c,c,'\n',
		' ',' ',' ',c,c,c,c,c,c,c,c,c,c,c,c,c,c,'\n',
		' ',' ',c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,'\n',
		' ',' ',' ',c,c,c,c,c,c,c,c,c,c,c,c,c,c,'\n',
		' ',' ',' ',' ',c,c,c,c,c,c,c,c,c,c,c,c,'\n',
		' ',' ',' ',' ',' ',c,c,c,c,c,c,c,c,c,c,0
	};
	printf(ss);
/*Задание2 потоковый способ*/
	cout << "\nЗадание 2" << endl;
	double m, x, y;
	cout << "\nПотоковый способ" << endl;
	cout << "  Выберите число ";
	cin >> m;
	x = (m + 5) / 2;
	y = x - 5;
	cout << "   первое число=" << x << endl;
	cout << "   второе число=" << y << endl;
/*Задание2 форматированный способ*/
	float m1, x1, y1;
	printf("\nФорматированный способ\n");
	printf("  Выберите число ");
	scanf_s("%f", &m1);
	x1 = (m1 + 5) / 2;
	y1 = x1 - 5;
	printf("   первое число=%f\n", x1);
	printf("   второе число=%f\n", y1);
}




