#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 *
 * @n: integer in question
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (squareRoot(n, 1));
}

/**
 * squareRoot - finds the square root
 *
 * @n: integer to find square root of
 * @value: square root
 *
 * Return: square root
 */

int squareRoot(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (squareRoot(n, value + 1));
	else
		return (-1);
}
