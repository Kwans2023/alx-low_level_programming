#include <stdio.h>

/**
  * main - Entry point
  * Description - "prints alphas
  * Return: Always 0 (Success)
  */

int main(void)
{
	int b = 97;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
