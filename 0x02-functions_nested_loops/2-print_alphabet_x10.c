#include "main.h"

/**
  * _islower - Entry point
  * @a: The character to be checked from ASCII table
  * Return: 1 for lowercase character. 0 for others.
  */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
