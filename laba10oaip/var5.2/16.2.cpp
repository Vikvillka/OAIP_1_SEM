#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
//Установить в 1 два бита числа А, начиная с четвертого по счету справа
using namespace std;
int input(const char* text) {
	int num = 0;
	printf(text);
	scanf_s("%d", &num);
	return num;
}
void printBinary( int value, const char* description) {
	char buffer[33]{};
	_itoa_s(value, buffer, 2);
	printf("%s=%s\n", description, buffer);
}
int main() {
	setlocale(LC_CTYPE, "Russian");

	int number = input("Введите число: ");
	printBinary(number, "Число ");
	int mask = ~(~(unsigned int(0)) << 2) << 4;
	printBinary(mask, "Маска ");
	int result = number | mask;
	printBinary(result, "Результат ");
}

