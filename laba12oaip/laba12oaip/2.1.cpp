#include <iostream>
using namespace std;
// ������� ��������� ���������
char* substr(char* str, int start, int length = 0)
{
    char* s;
    // ���������� ����� �������� ������
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
        len++;
    // ���������� ������� ���������� ������� ���������
    if (length > 0)
    {
        if (start + length < len)
            len = start + length;
    }
    else // length < 0
        len = len + length;
    int newlen = len - start + 1; // ����� ���������
    s = new char[newlen];
    // ����������� �������� ���������
    int j = 0;
    for (int i = start; i < len; i++)
    {
        s[j] = str[i]; j++;
    }
    s[j] = '\0';
    return(s);
}
    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        char str[] = "� ����� �����";
        char* t;
        int start, length;
        cout << str << endl;
        cout << "������� ��������� �������" << endl;
        cin >> start;
        cout << "������� ����� ���������" << endl;
        cin >> length;
        
        t = substr(str, start-1, length);
        cout << t << endl;
     }
