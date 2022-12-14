#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: the number of times the character '\' should
 * be printed
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= n; space++)
			{
				if (space == i)
					_putchar('\\');
				else if (space < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
