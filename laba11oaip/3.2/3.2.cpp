#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int m, s1 = 0, s2 = 0, s3 = 0, i = 0, j = 0;
	cout << "Введите количество элементов массива ";
	cin >> m;
	float* c = new float[m];
	float* b = new float[m];
	float* pc, * pb, k;
	cout << "Заполните массив a" << endl;
	for (pc = c; pc < c + m; pc++)
	{
		cout << "c[" << i << "] = "; cin >> *(pc + 1);
		i++;
	}
	cout << "Заполните массив b" << endl;
	i = 0;
	for (pb = b; pb < b + m; pb++)
	{
		cout << "b[" << i << "] = "; cin >> *(pb + 1);
		i++;
	}
	i = 0;
	for (pc = c; pc < c + m; pc++)
	{
		j = 0;
		for (pb = b; pb < b + m; pb++)
		{
			if (i == j)
			{
				if (*(pc + 1) < (*(pb + 1))) s1++;
				if (*(pc + 1) > (*(pb + 1))) s2++;
				if (*(pc + 1) == (*(pb + 1))) s3++;
			}
			j++;
		}
		i++;
	}
	cout << "Количество таких чисел k, для которых c[k] < b[k] = " << s1 << endl;
	cout << "Количество таких чисел k, для которых c[k] > b[k] = " << s2 << endl;
	cout << "Количество таких чисел k, для которых c[k] = b[k] = " << s3 << endl;
}