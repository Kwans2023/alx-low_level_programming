#include "main.h"
/**
  * print_sign - Enty point
  * Description - prints the sign of a number
  * @a: The integer to be inputed
  * Return:1 if a is greater than zero, 0 if a is zero
  * -1 if a is less than zero
  */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (a == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
