#include <locale>
#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	const int n = 99;
	int a = 0, b = 0, m;
	int K[n], i;
	int L[n], M[n];
	cout << "������� ������ ������� (�� ����� 30)" << endl;
	cin >> m;
	if (m > 30) return;
	srand((unsigned)time(NULL));
	for (i = 0; i < m; i++)
	{
		K[i] = rand() % 99;
		cout << K[i] << " ";
	}
	cout << endl;
	for (i = 0; i < m; i++) {
		if (K[i] % 2 == 0 && K[i]!=0) {
			L[a] = K[i];
			a++;
		}
		else if (K[i] != 0) {
			M[b] = K[i];
			b++;
		}
	}
	cout << " ������ "<<endl;
	for (i = 0; i < a; i++) {
		cout << L[i] << " ";
	}
	cout << "\n ������ ����� = " << a;
	cout << "\n\n �������� " << endl;
	for (i = 0; i < b; i++) {
		cout << M[i] << " ";
	}
	cout << "\n �������� ����� = " << b;
}

