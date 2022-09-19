#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string to print from
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n, l;

	for (l = 0; str[l] != '\0'; l++)
		;

	if (l % 2 == 0)
	{
		for (n = l / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	else
	{
		for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
