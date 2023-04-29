#include "main.h"

/**
  * print_diagonal - Entry point
  * Description - draw a diagonal line on the terminal
  * @n: variable to be inputed
  * Return: void (Success)
  */

void print_diagonal(int n)
{
	int k, l;

	if (n <= 0)
	_putchar('\n');
	for (k = 0; k < n; k++)
	{
	for (l = 0; l < k; l++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}

}
