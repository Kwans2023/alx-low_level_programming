#include "main.h"

/**
  * _strspn - function that returns length of the initial
  * substring of the string pointed to
  * @s: main string to be used
  * @accept: string containing the list of characters in s
  * Return: 0 (success)
  */

unsigned int _strspn(char *s, char *accept)
{
	int x, l;

	for (x = 0; s[x] != '\0'; x++)
	{
	for (l = 0; accept[l] != '\0'; l++)
	{
	if (s[x] == accept[l])
	{
	break;
	}
	}
	if (accept[l] == '\0')
	{
	break;
	}
	}
	return (x);
}
