#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all possible combinations of single-digit numbers'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
