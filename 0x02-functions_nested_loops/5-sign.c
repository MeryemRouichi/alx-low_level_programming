#include "main.h"

/**
 * print_sign - function that checks the sign of a number
 *
 * @n: number being tested
 *
 * Return: returns 1 if the number is greater than 0
 * returns 0 if the number equals to 0 and -1 if the number is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
