#include "main.h"

/**
 * _abs - function returns the absolute value of an integer
 *
 * @n: integer to get the absolute value of
 *
 * Return: void.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
