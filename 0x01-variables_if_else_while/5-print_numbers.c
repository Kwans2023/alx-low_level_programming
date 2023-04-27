#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all single digit numbers of base 10 starting from 0'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		printf("%d", h);
	}
	printf("\n");
	return (0);
}
