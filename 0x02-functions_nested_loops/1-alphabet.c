#include "main.h"

/**
  * print_alphabet - Entry point
  * Description - "prints alphabets in lowercase"
  * Return: always 0 (Success)
  */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
