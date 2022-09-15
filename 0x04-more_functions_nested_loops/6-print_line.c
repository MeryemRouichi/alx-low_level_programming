#include "main.h"

/**
 * print_line - function that draws a straight line
 *
 * @n: the number of times the character _ should
 * be printed
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
		_putchar('\n');
	}
}
