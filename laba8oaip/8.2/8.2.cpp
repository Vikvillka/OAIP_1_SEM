#include <iostream>
void main()

{
	using namespace std;
	float a = -10, b = 10, e = 0.001, x;
	int i = 0;
	do
	{
		x = (a + b) / 2;
		i++;
		if ((pow(x,3)+x-3)*(pow(a, 3) + a - 3) <= 0)
			b = x;
		else 
			a = x;
	}
	while (abs(a - b) > 2 * e); 
	cout << "x= " << x << endl;
	cout << "i= " << i << endl;
}

