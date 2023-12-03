#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	const int c = 30;
	int a[c], b[c], i, k, n;
	cout << " размер массива  k= ";
	cin >> k;
	if (k > 30) return 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < k; i++)
	{
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << "\n сдвиг на n= ";
	cin >> n;
	n = (int)fmod(n, k);
	n = k - n;
	for (i = 0; i < k; i++)
	{
		b[i] = a[(int)fmod(i + n, k)];
	}
	for (i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}
