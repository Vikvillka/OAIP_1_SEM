#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
setlocale(LC_CTYPE, "Russian");
double x1, y1, x2;
cout << "¬ведите x1 ";
cin >> x1;
cout << "¬ведите y1 ";
cin >> y1;
cout << "¬ведите x2 ";
cin >> x2;
int max = x1;
if (y1 > max && y1 > x2)
cout << "максимальное y1";
else if (x2 > max && x2 > y1)
cout << "максимальное х2";
else
cout << "максималное x1";
}
