#include "main.h"

/**
  * print_chessboard - function that prints a chessboard
  * @a: array to be used
  * Return: 0 (success)
  */

void print_chessboard(char (*a)[8])
{
	int x, l;

	for (x = 0; x < 8; x++)
	{
	for (l = 0; l < 8; l++)
	_putchar(a[x][l]);
	_putchar('\n');
	}
}
