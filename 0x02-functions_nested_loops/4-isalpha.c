#include "main.h"

/**
  * _isalpha - Entry point
  * Description - A function that checks for alphabetic character
  * @a: Checking character from ASCII table
  * Return: 1 for lower or upper case letters, 0 for others
  */

int _isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
