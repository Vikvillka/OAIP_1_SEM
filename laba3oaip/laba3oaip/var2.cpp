#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(void)
{
/*�������1 ��������� ������*/
	setlocale(LC_ALL, "RU");
	cout << "������� 1\n" << endl;
	char c, probel;
	probel = ' ';
	cout << "��������� ������\n";
	cout << "  ������� ������ ";
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
/*�������1 ��������������� ������*/
	cout << "��������������� ������\n";
	cout << "  ������� ������ ";
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
/*�������2 ��������� ������*/
	cout << "\n������� 2" << endl;
	double m, x, y;
	cout << "\n��������� ������" << endl;
	cout << "  �������� ����� ";
	cin >> m;
	x = (m + 5) / 2;
	y = x - 5;
	cout << "   ������ �����=" << x << endl;
	cout << "   ������ �����=" << y << endl;
/*�������2 ��������������� ������*/
	float m1, x1, y1;
	printf("\n��������������� ������\n");
	printf("  �������� ����� ");
	scanf_s("%f", &m1);
	x1 = (m1 + 5) / 2;
	y1 = x1 - 5;
	printf("   ������ �����=%f\n", x1);
	printf("   ������ �����=%f\n", y1);
}




