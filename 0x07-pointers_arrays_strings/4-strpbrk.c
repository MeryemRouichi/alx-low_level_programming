#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string to be scanned
 * @accept: string to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}

	return (0);
}
