#include <iostream>
using namespace std;
void func1()
{
	
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, row = 0, column = 0;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];

	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
	float sum = 0, col = 0, arefm;
	for (int j = 0; j < m; j++)
		if (B[i][j] > 0)
		{
			sum += B[i][j];
			col++;
		}
	arefm = sum / col;
	cout << "\nСумма в "<< i+1 << " строке: " << sum << "\nКоличество элементво: " << col << "\nCреднее арефметическое: " << arefm;
	}
}

#include <set>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;
int func2() {
	srand(time(0));
	int m, n, i, j;
	cout << "введите размер массива(строки, элементы) ";
	cin >> m >> n;
	int** a = new int* [m];
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < m; i++) {
		a[i] = new int[n];
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "] =" << a[i][j] << "\t";
	}
	cout << endl;
	set<int> s;
	for (i = 0; i < m; ++i) 
		for (j = 0; j < n; ++j) 
			s.insert(a[i][j]);
	cout << "Различных элементов: " << s.size() << endl;
	return 0;
}

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//func1();
	func2();

}

