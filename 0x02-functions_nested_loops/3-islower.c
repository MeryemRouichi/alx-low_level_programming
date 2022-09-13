#include "main.h"

/**
 * _islower: checks if the character is lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 in case the character is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
