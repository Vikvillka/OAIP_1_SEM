#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void main(void)
{
    /*������� 1 ��������� ������*/
	setlocale(LC_ALL, "RU");
	cout << "�������7, ������� 1\n";
	char c, probel;
	cout << "��������� ������\n";
	probel = ' ';
	cout << "������� ������ ";
	cin >> c;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(49) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	/*������� 1 ��������������� ������*/
	cout << "��������������� ������\n";
	cout << "������� ������ ";
	c = _getch();
	putchar(c);
	char ss[] = {
	'\n', ' ', ' ', ' ', ' ', ' ', c, c, c, c, c, c, c, c, c, c, '\n',
		' ', ' ', ' ', ' ', c, c, c, c, c, c, c, c, c, c, c, c, '\n',
		' ', ' ', ' ', c, c, c, c, c, c, c, c, c, c, c, c, c, c, '\n',
		' ', ' ', c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, 0,
	};
	printf(ss);
	/*�������2 ��������� ������*/
	cout << "\n������� 2" << endl;
	double �,r,s;
	cout << "\n��������� ������\n" << endl;
	cout << "  �������� ����� ";
	cin >> �;
	r = �/(2* 3.14);
	s = pow(r,2)* 3.14;
	cout << "  ������� �����= " << s  << endl;
	/*�������2 ��������������� ������*/
	float c1,r1,s1;
	printf("\n��������������� ������\n");
	printf("  �������� ����� ");
	scanf_s("%f", &c1);
	r1 = c1 / (2 * 3.14);
	s1 = pow(r1, 2) * 3.14;
	printf("   ������� �����=%f\n", s1);
}