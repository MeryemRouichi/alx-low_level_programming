#include "main.h"

/**
 * print_square - prints square using the character #
 *
 * @size: the size of the square
 */

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (column = 1; column <= size; column++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
