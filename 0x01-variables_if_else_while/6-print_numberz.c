#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all single digit numbers of base 10 starting from 0'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
