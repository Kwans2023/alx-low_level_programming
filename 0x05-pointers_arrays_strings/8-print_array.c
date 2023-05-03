#include <stdio.h>
#include "main.h"

/**
  * print_array - prints elements of an array of integers
  * @a: array of integers
  * @n: elements of the array to be printed
  * Return: void
  */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%d", a[y]);
	if (y != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
