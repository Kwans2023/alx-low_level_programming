#include "main.h"

/**
  * print_triangle - Entry point
  * Description - prints out a triangle
  * @size: size of triangle
  * Return: always 0 (Success)
  */

void print_triangle(int size)
{
	int h, k, l;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (h = 0; h < size; h++)
	{
	for (k = size - h; k > 1; k--)
	{
	_putchar(' ');
	}
	for (l = 0; l <= h; l++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
