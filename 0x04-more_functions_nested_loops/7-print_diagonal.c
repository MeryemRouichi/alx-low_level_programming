#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times
 *
 * @n: the number of times the character '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int space;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= i; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
