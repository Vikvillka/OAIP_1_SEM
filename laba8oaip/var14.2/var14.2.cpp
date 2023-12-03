#include<iostream>

void main()
{
	using namespace std;
	float a = 1, b = 4, e = 0.0001, x;
	do
	{
		x = (a + b) / 2;
		if ((pow(x, 3) + x - 2) * (pow(a, 3) + a - 2) <= 0)
			b = x;
		else 
			a = x;
	} while (abs(a - b) > (2 * e));
	cout << "x = " << x << endl;
}