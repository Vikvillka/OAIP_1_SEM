#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
setlocale(LC_CTYPE, "Russian");
double x1, y1, x2;
cout << "������� x1 ";
cin >> x1;
cout << "������� y1 ";
cin >> y1;
cout << "������� x2 ";
cin >> x2;
int max = x1;
if (y1 > max && y1 > x2)
cout << "������������ y1";
else if (x2 > max && x2 > y1)
cout << "������������ �2";
else
cout << "����������� x1";
}
