#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n[11];
	int a = 0;
	int b = 0;
	for (int i = 0; i < 11; i++) {
		cin >> n[i];
	}
	int i = 0;
	for (i = 0; (n[i] == 0) && (i < 11); i++);
	b = n[i];

	for (int i = 0; i < 11; i++) {
		if (b * n[i] < 0) {
			b = n[i];
			a++;
		}
	}
	cout << "чередований= "<< a;
	return 0;
}

