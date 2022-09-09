#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'e')
			++ch;
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
