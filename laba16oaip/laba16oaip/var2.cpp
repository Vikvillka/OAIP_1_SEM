#include <iostream>
using namespace std;
int main()

{
    setlocale(LC_CTYPE, "Russian");
    int n = 0, m = 0, element, index, k, str = 0;
    bool b = false;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;
    int** M = new int* [n];
    for (int i = 0; i < n; i++) {
        M[i] = new int[m];
    }
    cout << "Введите массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " строка: ";
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }
    cout << "Введите число k = ";
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (M[i][j] == k)
                str = i + 1;
            break;
        }
    }
    cout << "Номер строки, содержащей число k – " << str;
    
    delete[] M;
}