#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	dest[i] = '\0';

	return (dest);
}
