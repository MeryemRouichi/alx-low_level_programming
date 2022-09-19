#include "main.h"

/**
 * rev_string - resverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int half, count = 0;
	char temp;

	/* find string length without null char */
	while (s[count] != '\0')
		count++;

	/* swap the string by looping to half the string */
	for (half = 0; half < count / 2; half++)
	{
		temp = s[half];
		s[half] = s[count - 1 - half]; /* -1 because the array starts from 0 */
		s[count - 1 - half] = temp;
	}
}
