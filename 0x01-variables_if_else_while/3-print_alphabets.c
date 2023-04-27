#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints alphabets in lowercase and uppercase'
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
