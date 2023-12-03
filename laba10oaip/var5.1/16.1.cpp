#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
//������ ����� ����� A.������� 3 ���� ����� A, 
//������� �� ������� �� ����� ������, � �������� �� 
//� ����� B, ������� � ������� ���� �� ����� ������.

using namespace std;
int input(const char* text) {
	int num = 0;
	printf(text);
	scanf_s("%d", &num);
	return num;
}
void printBinary( const char* description ,int value) {
	char buffer[33]{};
	_itoa_s(value, buffer, 2);
	printf("%s=%s\n", description, buffer);
}
int main() {
	setlocale(LC_CTYPE, "Russian");

	int maskA = 0b111 << 2;
	int maskB = ~maskA ;
	int a = input("������� ����� a: ");
	int b = input("������� ����� b: ");
	printBinary("a = ", a);
	printBinary("b = ", b);

	printBinary("����� ��� a = ", maskA);
	printBinary("����� ��� b = ", maskB);

	int dedicated = (a & maskA)>>1;
	int cleaned = b & maskB;
	int result = cleaned | dedicated;
	printBinary("���������� ���� a = ", dedicated);
	printBinary("���������� ���� b = ", cleaned);
	printBinary("��������� = ", result);
}


