#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int r = 100;
	int arr[r], a, y, x, i = 0, s = 0, t = 0, b = 0; float n;
	cout << "������� ���������� ���� (�� 100) ";
	cin >> n;
	if ((n <= 99) && (n - (int)n == 0))
	{
		srand((unsigned)time(NULL));
		cout << "���������� ������� � ����: ";
		for (i; i < n; i++)
		{
			arr[i] = rand() % 40;
			cout << arr[i] << " ";
		}
		cout << endl;
		if (n > 7)
		{
			i = 0;
			for (a = 7; a <= n; a += 7)
			{
				s = 0;
				for (i; i < a; i++)
					s += arr[i];
				t++;
				if (s > b)
				{
					b = s;
					x = t;
				}
			}
			a = ((int)n / 7) * 7;
			y = n - a;
			s = 0;
			for (i; i < n; i++)
				s += arr[i];
			t++;
			if (s > b)
			{
				b = s;
				x = t;
			}
			cout << "����� ������� ���������� ������� = " << b << ", ������ �� " << x << " ������\n";
		}
		else
		{
			for (i = 0; i < n; i++)
				s += arr[i];
			cout << "����� ������� ���������� ������� = " << s << ", ������ �� 1 ������\n";
		}
	}
	else
		cout << "���� ����� �� ������������� �������, ���������� ��� ���\n";
}