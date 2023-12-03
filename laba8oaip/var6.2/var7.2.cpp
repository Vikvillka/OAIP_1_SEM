#include <iostream>
void main()

{
	using namespace std;
	float a = 0, b = 1, e = 0.0001, x;
	do
	{
		x = (a + b) / 2;
		
		if ((pow(x,3)+3*x-1) * (pow(a, 3) + 3 * a- 1) <= 0)
			b = x;
		else
			a = x;
	} while (abs(a - b) > 2 * e);
	cout << "x= " << x << endl;
}
