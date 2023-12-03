#include<iostream>
void main()
{
	using namespace std;
	int j;
	double  m = 4, c = -0.045, b[4] = { 0.9, 0.5, -2, -0.1 }, x = 1, g;
	for (j = 0; j < 4; j++)
	{
		x *= pow((b[j] + 1), 2);
	}
	g = c * x;
	cout << "g = " << g << endl;

	int i;
	double y[5] = { 6, 2, 0.9, 0.1, 5 }, q, z=1, t = 10;
	for (i = 0; i < 5; i++)
	{
		if (t > y[i]) 
		{
			t = y[i];
		}
		z *= (y[i] + t);
	}
	q=z;
	cout << "q = " << q << endl;
}