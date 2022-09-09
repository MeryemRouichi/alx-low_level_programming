#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch1, ch2;
	/* print a - z */
	ch1 = 'a';
	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}
	/* print A -Z */
	ch2 = 'A';
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}

	putchar('\n');
	return (0);
}
