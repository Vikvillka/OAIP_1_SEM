#include <iostream>
#include <Windows.h>

using namespace std;

int var4_1(int**, int&);
int var4_2(char*);

void var7_1(int**, int&, int&, int&);
void var7_2(char*);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int** matrix;
    char action = '0';
    int n, m, d;
    char s[1000];
    while (action != '/')
    {
        cout << "¬ведите вариант (2 4 7). ƒл€ выхода введите ." << endl;
        cin >> action;
        switch (action)
        {
        case '4':
            cout << "¬ведите задание" << endl;
            cin >> action;
            switch (action)
            {
            case '1':
                cout << "n = ";
                cin >> n;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[n];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < n; j++)
                        cin >> matrix[i][j];
                var4_1(matrix, n);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            case'2':
                cout << "введте строку" << endl;
                cin.ignore(cin.rdbuf()->in_avail());
                gets_s(s);
                var4_2(s);
                break;
            }
            break;
        case '7':
            cout << "¬ведите задание" << endl;
            cin >> action;
            switch (action)
            {
            case '1':
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                cout << "d = ";
                cin >> d;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[m];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                var7_1(matrix, n, m, d);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            case'2':
                cout << "введте строку" << endl;
                cin.ignore(cin.rdbuf()->in_avail());
                gets_s(s);
                var7_2(s);
                break;
            }
            break;
        }
    }
}