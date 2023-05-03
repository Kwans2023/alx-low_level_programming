#include "main.h"

/**
  * _atoi - convert a string to an integer
  * @s: pointer to convert
  * Return: integer
  */

int _atoi(char *s)
{
	int y = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[y])
	{
	if (s[y] == 45)
	{
		min *= -1;
	}
	while (s[y] >= 48 && s[y] <= 57)
	{
		isi = 1;
		ni = (ni * 10) + (s[y] - '0');
		y++;
	}
	if (isi == 1)
	{
	break;
	}
	y++;
	}
	ni *= min;
	return (ni);
}
