#include "main.h"

/**
* print_most_numbers - Entry point
* Description - Print the numbers 0 to 9 leaving 2 and 4
* Return: Always 0 (success)
*/

void print_most_numbers(void)

{

	int x = 0;

	for (x = 0; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
		continue;
	}
	else
	{
		_putchar(x + 48);
	}
	}
		_putchar('\n');

}
