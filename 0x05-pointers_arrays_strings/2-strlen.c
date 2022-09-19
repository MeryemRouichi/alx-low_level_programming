#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: the pointer to the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
