#include<iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float b = -0.05, a = 1.72, i = -5, d, z;
	while (i < 7)
	{
		if (i > 3 * b) d = a + b * i;
		else if(i<=3*b) d = tan(b)-a*i;
		z = (d - a / 4) / (3 * a * b - exp(1 + d) / 100);
		cout << "z=" << z << endl;
		i = i + 2;
	}
}
