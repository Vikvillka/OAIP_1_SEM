#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void main(void)
{
	/*������� 1 ��������� ������*/
	setlocale(LC_ALL, "RU");
	cout << "�������6, ������� 1\n";
	char c6, s;
	s = ' ';
	cout << "��������� ������\n";
	cout << "  ������� ������ ";
	cin >> c6;
	cout << setw(4) << setfill(s) << s << c6 << endl;
	cout << setw(3) << setfill(s) << s << setw(3) << setfill(c6) << c6 << endl;
	cout << setw(9) << setfill(c6) << c6 << endl;
	cout << s << setw(7) << setfill(c6) << c6 << endl;
	cout << setw(2) << setfill(s) << s << setw(5) << setfill(c6) << c6 << endl;
	cout << setw(2) << setfill(s) << s << setw(2) << setfill(c6) << c6 << s << setw(2) << setfill(c6) << c6 << endl;
	cout << setw(2) << setfill(s) << s << c6 << setw(3) << setfill(s) << s << c6 << endl << endl;
	/*������� 1 ��������������� ������*/
	cout << "��������������� ������\n";
	cout << "������� ������";
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
	/*������� 2 ��������� ������*/
	cout << "\n\n�������2\n";
	int x1, y1, x2, y2;
	cout << "��������� ������\nM1(x1;y1)\n";
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
	cout << "P��������� ����� ������� �1 � �2 ����� " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	/*������� 2 ��������������� ������*/
	printf("\n ��������������� ������\n");
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
	printf("���������� ����� ������� �1 � �2 ����� %f", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}
