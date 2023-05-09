
#include "main.h"

/**
  * _strstr - function that locates a substring
  * @haystack: main string to be used
  * @needle: substring to be searched within haystack
  * Return: pointer to haystack or 0 (success)
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *x = haystack;
	char *y = needle;

	while (*x == *y && *y != '\0')
	{
	x++;
	y++;
	}
	if (*y == '\0')
	return (haystack);
	}
	return (0);
}
