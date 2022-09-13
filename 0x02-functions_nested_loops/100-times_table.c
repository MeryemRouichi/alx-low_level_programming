#include "main.h"

/**
 * print_times_table - function that prints the time table of n
 *
 * @n: input
 *
 * Return: Void
 */
void print_times_table(int n)
{
	int num1, num2, mult;

	if (n <= 15 && n >= 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');
				mult = num1 * num2;
				if (mult <= 9)
					_putchar(' ');
				if (mult <= 99)
					_putchar(' ');
				if (mult >= 100)
				{
					_putchar((mult / 100) + 48);
					_putchar((mult / 10) % 10 + 48);
				} else if (mult <= 99 && mult >= 10)
					_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
