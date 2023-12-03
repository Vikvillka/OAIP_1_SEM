#include <iostream>
using namespace std;
void main()
{
	char tmp[33];
	int a, b = 0, i, mask = 2047;
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << tmp << endl;
	_itoa_s((a & mask) >> 5, tmp, 2);
	cout << tmp << endl;
	for (i = 10; i >= 0; i--)
	{
		if (tmp[i] == '1')
		{
			b++;
		}
	}
	cout << b << endl;
}

