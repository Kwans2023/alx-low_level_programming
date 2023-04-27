#include "main.h"

/**
  * jack_bauer - Entry point
  * Description - prints every minute of the day of Jack Bauer
  * Return: no return
*/

void jack_bauer(void)

{
	int k, w, a, n;

	for (k = 0; k <= 2; k++)
	{
	for (w = 0; w <= 9; w++)
	{
	if ((k <= 1 && w <= 9) || (k <= 2 && w <= 3))
	{
	for (a = 0; a <= 5; a++)
	{
	for (n = 0; n <= 9; n++)
	{
	_putchar(k + 48);
	_putchar(w + 48);
	_putchar(58);
	_putchar(a + 48);
	_putchar(n + 48);
	_putchar('\n');
	}
	}
	}
	}
	}
}
