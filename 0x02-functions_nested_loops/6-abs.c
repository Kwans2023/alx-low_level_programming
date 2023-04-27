#include "main.h"

/**
  * _abs - Entry point
  * Description - A function that computes the absolute value of an integer
  * @a: Inputed number which is an integer
  * Return: Absolute value
  */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
