#include <iostream>

using namespace std;
int main()

{
	setlocale(LC_ALL, "rus");
	int n, s1 = 0, s2 = 0, i = 0;
	cout << "Введите количество элементов массива ";
	cin >> n;
	float* a = new float[n];
	float* b = new float[n];
	float* pa, * pb, t;
	cout << "Заполните массив a" << endl;
	for (pa = a; pa < a + n; pa++)
	{
		cout << "a[" << i << "] = "; cin >> *(pa + 1);
		i++;
	}
	cout << "Заполните массив b" << endl;
	i = 0;
	for (pb = b; pb < b + n; pb++)
	{
		cout << "b[" << i << "] = "; cin >> *(pb + 1);
		i++;
	}
	cout << "Значения массива должны быть меньше t = ";
	cin >> t;
	for (pa = a; pa < a + n; pa++)
	{
		if (*(pa + 1) < t) s1++;
	}
	for (pb = b; pb < b + n; pb++)
	{
		if (*(pb + 1) < t) s2++;
	}
	cout << "Таких элиментов в массиве a= " << s1<<endl;
	cout << "Таких элиментов в массиве b= " << s2<<endl;
	if (s1 > s2)
	{
		cout << "a {" << n << "} = [ ";
		for (pa = a; pa < a + n; pa++)
			cout << *(pa + 1) << " ";
		cout << "]" << endl;
		cout << "b {" << n << "} = [ ";
		for (pb = b; pb < b + n; pb++)
			cout << *(pb + 1) << " ";
		cout << "]" << endl;
	}
	else
	{
		cout << "b {" << n << "} = [ ";
		for (pb = b; pb < b + n; pb++)
			cout << *(pb + 1) << " ";
		cout << "]" << endl;
		cout << "a {" << n << "} = [ ";
		for (pa = a; pa < a + n; pa++)
			cout << *(pa + 1) << " ";
		cout << "]" << endl;
	}
}