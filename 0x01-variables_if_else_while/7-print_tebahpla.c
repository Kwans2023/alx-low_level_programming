#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints the lowercase alphabet in reverse'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int h = 122;

	while (h >= 97)
	{
		putchar(h);
		h--;
	}
	putchar('\n');
	return (0);
}
