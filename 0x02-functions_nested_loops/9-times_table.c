#include "main.h"
/**
 * times_table - prints the 9 time table
 *
 * Return: Void.
 */

void times_table(void)
{
	int x, y, mult;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			mult = x * y;
			if (x == 0)
			{
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
