#include<iostream>

using namespace std;
int main()

{
	setlocale(LC_ALL, "rus");
	int n, t, �[100][100];
	cout << "������� ����� ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		t = i + 1;
		for (int j = 0; j < n; j++)
		{
			�[i][j] = t;
			t++;
			if (t > n)
				t = 1;
			cout << �[i][j] << " ";
		}
		cout << endl;
	}
}