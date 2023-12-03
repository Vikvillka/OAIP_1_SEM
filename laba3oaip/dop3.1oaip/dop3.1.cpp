#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void main(void)
{
	/*задание 1 потоковый способ*/
	setlocale(LC_ALL, "RU");
	cout << "ВАРИАНТ6, Задание 1\n";
	char c6, s;
	s = ' ';
	cout << "Потоковый способ\n";
	cout << "  Введите символ ";
	cin >> c6;
	cout << setw(4) << setfill(s) << s << c6 << endl;
	cout << setw(3) << setfill(s) << s << setw(3) << setfill(c6) << c6 << endl;
	cout << setw(9) << setfill(c6) << c6 << endl;
	cout << s << setw(7) << setfill(c6) << c6 << endl;
	cout << setw(2) << setfill(s) << s << setw(5) << setfill(c6) << c6 << endl;
	cout << setw(2) << setfill(s) << s << setw(2) << setfill(c6) << c6 << s << setw(2) << setfill(c6) << c6 << endl;
	cout << setw(2) << setfill(s) << s << c6 << setw(3) << setfill(s) << s << c6 << endl << endl;
	/*задание 1 форматированный способ*/
	cout << "Форматированный способ\n";
	cout << "Введите символ";
	c6 = _getch();
	putchar(c6);
	char star[] = {
	'\n',' ',' ',' ',' ',c6,'\n',
	' ',' ',' ',c6,c6,c6,'\n',
	c6,c6,c6,c6,c6,c6,c6,c6,c6,'\n',
	' ',c6,c6,c6,c6,c6,c6,c6,'\n',
	' ',' ',c6,c6,c6,c6,c6,'\n',
	' ',' ',c6,c6,' ',c6,c6,'\n',
	' ',' ',c6,' ',' ',' ',c6,0
	};
	printf(star);
	/*задание 2 потоковый способ*/
	cout << "\n\nЗадание2\n";
	int x1, y1, x2, y2;
	cout << "Потоковые способ\nM1(x1;y1)\n";
	cout << "x1=";
	cin >> x1;
	cout << "y1=";
	cin >> y1;
	cout << endl;
	cout << "M1(x2;y2)\n";
	cout << "x2=";
	cin >> x2;
	cout << "y2=";
    cin >> y2;
	cout << endl;
	cout << "Pасстояние между точками М1 и М2 равно " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	/*задание 2 форматированный способ*/
	printf("\n Форматированный способ\n");
	printf("M1(x1; y1)\n");
	printf("x1=");
	scanf_s("%d", &x1);
	printf("y1=");
	scanf_s("%d", &y1);
	printf("\nM1(x2; y2)\n");
	printf("x2=");
	scanf_s("%d", &x2);
	printf("y2=");
	scanf_s("%d", &y2);
	printf("Расстояние между точками М1 и М2 равно %f", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}
