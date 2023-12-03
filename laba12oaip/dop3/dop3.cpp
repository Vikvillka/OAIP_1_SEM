#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{

    //3.Из заданного предложения удалить те слова, которые уже встречались в предложении раньше.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, count = 0, kol = 0;
    string text, str;
    string arr[100];

    cout << " ";
    getline(cin, text);

    n = text.size();
    text = text + " ";

    for (int i = 0; i <= n; i++)
    {
        if (text[i] != ' ')
        {
            str = str + text[i];
        }
        else
        {
            for (int k = 0; k <= count - 1; k++)
            {
                if (str == arr[k])
                {
                    kol++;
                }
            }
            if (kol < 1)
            {
                arr[count] = str;
                count++;
            }

            kol = 0;
            str = "";
        }
    }
    for (int j = 0; j <= count + 1; j++)
    {
        cout << arr[j] << " ";
    }
    //return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <Windows.h>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    SetConsoleCP(866);
//    SetConsoleOutputCP(866);
//    char strFirst[60];
//    gets_s(strFirst);
//    char* tempFirst = strtok(strFirst, " !,");
//    char arr[60][60];
//    int i = 0;
//    while (tempFirst != NULL)
//    {
//        strcpy(arr[i], tempFirst);
//        i++;
//        tempFirst = strtok(NULL, " !,");
//    }
//    int firstCount = i;
//    i = 0;
//
//
//    for (i = 0; i < firstCount; i++)
//    {
//        for (int j = 0; j < firstCount; j++)
//        {
//            if (strcmp(arr[i], arr[j]) == 0 && i != j)
//            {
//                strcpy(arr[i], " ");
//            }
//        }
//    }
//    for (i = 0; i < firstCount; i++)
//        cout << arr[i] << " ";
//}
//using namespace std;
//
//int main() {
//
//        setlocale(LC_ALL, "rus");
//        char strFirst[60] = "привет как дела как погода за окном";
//        char* tempFirst = strtok(strFirst, " ");
//        char arr[60][60];
//        int i = 0;
//        while (tempFirst != NULL)
//        {
//            strcpy(arr[i], tempFirst);
//            i++;
//            tempFirst = strtok(NULL, " ");
//        }
//        int firstCount = i;
//        i = 0;
//        int temp = 1;
//        for (i = 0; i < firstCount; i++)
//        {
//            for (int j = temp; j < firstCount; j++)
//            {
//                if (strcmp(arr[i], arr[j]) == 0)
//                {
//                    strcpy(arr[i], " ");
//                    strcpy(arr[j], " ");
//
//                }
//                temp++;
//            }
//        }
//        for (i = 0; i < firstCount; i++)
//            cout << arr[i] << endl;
//    }
