#include <iostream>
using namespace std;
int main()
{
  setlocale(LC_CTYPE, "Russian");
  int a,b;
  puts("�� ������������� ��� ��� ����? (1-���, 2- ����)");
  cin >> a;
  switch (a)
  {
  case 1: { puts("�����? (1-������, 2-�������, 3-�������)");
	  cin >> a;
	  switch (a)
	  {
	  case 1: puts("� ��� ������� ����"); break;
	  case 2: puts("��� ��� �� ������"); break;
	  case 3: puts("������������ ����"); break;
		  break;
	  }
	  break;
  }
  case 2: { puts("��� ��������� ������� ����? (1-��, 2-���)");
	  cin >> b;
	  switch (b)
	  {
	  case 1: puts("� ��� ��� ������ ������"); break;
	  case 2: puts("��� ���� �� ��������� ������� ����"); break;
		  break;
	  }
	  break;
  }
  default: puts("�� �� �������� �� ��� ������"); break;
  }
   return 0;
}
