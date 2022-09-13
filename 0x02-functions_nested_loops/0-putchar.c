#include "main.h"

/**
 * main - Entry point
 *
 * Description: printing a string using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char strg[] = "_putchar";
	int ch = 0;

	while (ch < 8)
	{
		_putchar(strg[ch++]);
	}

	_putchar('\n');
	return (0);
}
