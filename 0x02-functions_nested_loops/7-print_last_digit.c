#include "main.h"

/**
  * print_last_digit - Entry point
  * Description - Function that prints the last digit of a number
  * @a: Inputed number which is an integer
  * Return: Last digit of the number
  */

int print_last_digit(int a)
{
	int x;

	x = a % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
