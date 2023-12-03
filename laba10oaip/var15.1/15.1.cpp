#include <iostream>
using namespace std;
int main()
{
	//1.	Используя битовые операции проверить, кратно ли двум число А.
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int long a;
	cin >> a;
	_itoa_s(a, tmp, 2);
	if ((a & 1) == 0) cout << "Число кратно двум" << endl;
	else cout << "Число не кратно двум" << endl;
}