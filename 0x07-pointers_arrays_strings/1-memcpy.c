#include "main.h"

/**
  * _memcpy - copies characters from memory src to memory dest
  * @src: memory area of source
  * @dest: destination memory area
  * @n: number of bytes to be copied
  * Return: destination output
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = n;
	int x;

	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
