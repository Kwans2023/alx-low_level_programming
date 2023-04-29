#include "main.h"

/**
  * print_line - Entry point
  * Description - Print lines
  * @n: number of times
  * Return: void (success)
  */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
