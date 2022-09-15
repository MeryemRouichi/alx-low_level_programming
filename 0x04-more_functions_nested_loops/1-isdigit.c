#include "main.h"

/**
 * _isdigit - function that checks if a character is a digit
 *
 * @c: character in question
 *
 * Return: 1 if the character is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
