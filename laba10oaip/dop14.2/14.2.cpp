#include <iostream>
using namespace std;
void main()
{
	char tmp[30];
	//n=2, m=3
	int a, b, mask1 = 28, mask2 = ~mask1 << 1;
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << tmp << endl;
	cin >> b;
	_itoa_s(b, tmp, 2);
	cout << tmp << endl;
	_itoa_s((b & mask2), tmp, 2);
	cout << tmp << endl;
	_itoa_s((a & mask1) << 1, tmp, 2);
	cout << tmp << endl;
	_itoa_s(((a & mask1) << 1) | (b & mask2), tmp, 2);
	cout << tmp << endl;
}

