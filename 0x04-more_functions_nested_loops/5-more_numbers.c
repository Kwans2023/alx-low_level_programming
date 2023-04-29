#include "main.h"

/**
  * more_numbers - Entry point
  * Description - Print 10 times the numbers, from 0 to 14
  * Return: Always 0 (success)
  */

void more_numbers(void)
{
	int x, l;

	for (x = 0; x < 10; x++)
	{
	for (l = 0; l <= 14; l++)
	{
	if (l >= 10)
	{
	_putchar((l / 10) +  48);
	}
	_putchar((l % 10) + 48);
	}
	_putchar('\n');
	}
}
