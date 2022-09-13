#include "main.h"

/**
 * _isalpha - function that checks if the character is alphabetic
 *
 * @c: checks input of function
 *
 * Return: returns 1 if the character is a lowercase or
 * uppercase letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
