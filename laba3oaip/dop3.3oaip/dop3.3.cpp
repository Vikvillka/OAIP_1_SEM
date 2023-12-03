
#include <iostream>
#include <iomanip> 
#include<stdio.h>
#include<conio.h>
using namespace std;
void main(void)

{       setlocale(LC_ALL, "ru");
		char c, sp = ' ';
		cout << "Введите символ для заполнения ";
		cin >> c;
		cout << setw(4) << setfill(sp) << sp << setw(3) << setfill(c) << c << endl;
		cout << setw(3) << setfill(sp) << sp << setw(1) << setfill(c) << c << setw(3) << setfill(sp) << sp << setw(1) << setfill(c) << c << endl;
		cout << setw(4) << setfill(sp) << sp << setw(3) << setfill(c) << c << endl;
		cout << setw(5) << setfill(sp) << sp << setw(1) << setfill(c) << c << endl;
		cout << setw(3) << setfill(sp) << sp << setw(1) << setfill(c) << c << setw(1) << setfill(sp) << sp << setw(1) << setfill(c) << c << setw(1) << setfill(sp) << sp << setw(1) << setfill(c) << c << endl;
		cout << setw(2) << setfill(sp) << sp << setw(1) << setfill(c) << c << setw(2) << setfill(sp) << sp << setw(1) << setfill(c) << c << setw(2) << setfill(sp) << sp << setw(1) << setfill(c) << c << endl;
		cout << setw(5) << setfill(sp) << sp << setw(1) << setfill(c) << c << endl;
		cout << setw(3) << setfill(sp) << sp << setw(1) << setfill(c) << c << setw(3) << setfill(sp) << sp << setw(1) << setfill(c) << c << endl;
		cout << setw(2) << setfill(sp) << sp << setw(1) << setfill(c) << c << setw(5) << setfill(sp) << sp << setw(1) << setfill(c) << c << endl;

		double z, x, y,p,s,z1,x1,y1;
		cout << "\nПотоковый способ" << endl;
		cout << "катет1=";
		cin >> z;
		cout << "катет2=";
		cin >> x;
		cout << "гипотинуза=";
		cin >> y;
		p = (z + x + y) / 2;
		z1 = p - z;
		x1 = p - x;
		y1 = p - y;
		s = sqrt(p*z1*x1*y1);
		cout << " площадь=" << s << endl;
}
	