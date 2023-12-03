#include <iostream>
using namespace std;
int main()
{
  setlocale(LC_CTYPE, "Russian");
  int a,b;
  puts("Вы предпочитаете чай или кофе? (1-чай, 2- кофе)");
  cin >> a;
  switch (a)
  {
  case 1: { puts("Какой? (1-черный, 2-зеленый, 3-красный)");
	  cin >> a;
	  switch (a)
	  {
	  case 1: puts("У вас хороший вкус"); break;
	  case 2: puts("Мне вас не понять"); break;
	  case 3: puts("Сомнительный вкус"); break;
		  break;
	  }
	  break;
  }
  case 2: { puts("Вам нравиться крепкий кофе? (1-да, 2-нет)");
	  cin >> b;
	  switch (b)
	  {
	  case 1: puts("У нас нет ничего общего"); break;
	  case 2: puts("Мне тоже не нравиться крепкий кофе"); break;
		  break;
	  }
	  break;
  }
  default: puts("Вы не ответили на мой вопрос"); break;
  }
   return 0;
}
