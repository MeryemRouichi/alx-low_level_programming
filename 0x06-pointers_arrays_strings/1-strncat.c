#include "main.h"

/**
 * _strncat - concatenate n byte from a string to another
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: amount of bytes from source string
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
