#include "main.h"

/**
  * _strpbrk - function that searches a string for any of a set of bytes
  * @s: main string to be used
  * @accept: string containing the list of characters in s
  * Return: 0 (success)
  */

char *_strpbrk(char *s, char *accept)
{
	int x, l;

	for (x = 0; s[x] != '\0'; x++)
	{
	for (l = 0; accept[l] != '\0'; l++)
	{
	if (s[x] == accept[l])
	{
	return (&s[x]);
	}
	}
	}
	return (0);
}
