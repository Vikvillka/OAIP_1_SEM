#include <iostream>
#include <Windows.h>

using namespace std;

void Show(int** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "   ";
        cout << '\n';
    }
}
void Str(char* str)
{
    for (int i = 1; str[i] != '\0'; i++)
    {
        if ((str[i - 1] == ' ' || str[i - 1] == '.') && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
            continue;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

    }
}

int Diagonal(int** arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {

                sum += arr[i][j];
            }
            else
                break;
        }
    return sum;
}

int CountM(char* str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'm')
            count++;
    }

    return count;
}

void Odd(int**& arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < 0 && i % 2 != 0)
                arr[i][j] = abs(arr[i][j]);
        }

    }
}

void final(int** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][0] == 0)
            {
                break;
            }
            else
            {
                arr[i][j] += 1;
            }
        }
    }
}

void FinalSTR(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'а' && str[i] <= 'я')
        {
            str[i] -= 32;
        }
    }
       /* else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = '?';*/
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = '?';
    }
    cout << str;
}

int main()
{
    setlocale(LC_CTYPE, "Russian");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice;
    cin >> choice;

    switch (choice)
    {
        //1
       /* case 1:
            int** arr;
            int n;
            cin >> n;
            arr = new int* [n];
            int m; cin >> m;
            for (int i = 0; i < m; i++)
            {
                arr[i] = new int[m];

            }

            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    arr[i][j] = rand() % 100 - 100;

            cout << "До" << endl;
            Show(arr, n, m);

            Odd(arr, n, m);
            cout << "После" << endl;
            Show(arr, n, m);
            break;
        case 2:

            char str[60];
            cin >> str;
            Str(str);
            puts(str);
            break;



    case 3:
        int** arrr;
        int k;
        cin >> k;
        arrr = new int* [k];
        for (int i = 0; i < k; i++)
        {
            arrr[i] = new int[k];

        }

        for (int i = 0; i < k; i++)
            for (int j = 0; j < k; j++)
                arrr[i][j] = rand() % 50;

        Show(arrr, k, k);
        cout << Diagonal(arrr, k);
        break;

    case 4:
        char heh[255];
        cin >> heh;
        cout << CountM(heh);
        break;*/

        //2
    case 5:
        int** finalarr;
        int n;
        cin >> n;
        finalarr = new int* [n];
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
            finalarr[i] = new int[m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                finalarr[i][j] = rand() % 50;

        finalarr[0][0] = 0;
        finalarr[1][0] = 0;

        Show(finalarr, n, m);
        final(finalarr, n, m);
        Show(finalarr, n, m);


        break;

    case 6:
        char finalstr[60];
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        cin >> finalstr;
        FinalSTR(finalstr);
        






        break;
    default:
        break;
    }
}
