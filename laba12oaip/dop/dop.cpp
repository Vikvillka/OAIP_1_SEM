#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[1000], m[10], buf[80], * p;
	int i, k, len;
	cout << "Введите строку:\n";
	gets_s(s);
	cout << "\nВведите окончание:\n";
	gets_s(m); cout << "\n";
	len = strlen(s);
	i = 0;

	while (i < len)
	{
		while (s[i] == ' ' && i < len)
			i++;
		strcpy(buf, "");
		k = 0;
		while (s[i] != ' ' && i < len)
			buf[k++] = s[i++];
		buf[k] = '\0';
		p = strstr(buf, m);
		if (p)
			cout << buf << "\n";
		i++;
	}
	_CRT_SECURE_NO_WARNINGS;
	
}
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//
//    int n;
//    char q;
//
//    cout << "Введите количество строк" << endl;
//    cin >> n;
//
//    cout << "Введите окончание" << endl;
//    cin >> q;
//
//    for (int i = 0; i < n; i++)
//    {
//        string str;
//        cout << "Введите строку" << endl;
//        cin >> str;
//
//        if (str[str.size() - 1] == q)
//        {
//            cout << "Окончание верное" << endl << endl;
//        }
//        else if (str[str.size() - 1] != q)
//        {
//            cout << "Окончание не верное" << endl << endl;
//        }
//    }
//}
