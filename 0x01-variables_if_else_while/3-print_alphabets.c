#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabets lowercase'
  *Return: Always 0
  */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
